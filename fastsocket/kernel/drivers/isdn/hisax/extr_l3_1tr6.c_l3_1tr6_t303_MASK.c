
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {scalar_t__ cause; } ;
struct l3_process {scalar_t__ N303; TYPE_1__ para; int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct l3_process*,int ,int *) ;
 int FUNC_2 (struct l3_process*,int ,void*) ;

__attribute__((used)) static void
FUNC_3(struct l3_process *VAR_0, u_char VAR_1, void *VAR_2)
{
 if (VAR_0->N303 > 0) {
  VAR_0->N303--;
  FUNC_0(&VAR_0->timer);
  FUNC_2(VAR_0, VAR_1, VAR_2);
 } else {
  FUNC_0(&VAR_0->timer);
  VAR_0->para.cause = 0;
  FUNC_1(VAR_0, 0, ((void*)0));
 }
}
