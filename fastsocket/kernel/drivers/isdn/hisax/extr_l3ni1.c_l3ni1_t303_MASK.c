
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct l3_process {scalar_t__ N303; TYPE_2__* st; int timer; } ;
struct TYPE_3__ {int (* l3l4 ) (TYPE_2__*,int ,struct l3_process*) ;} ;
struct TYPE_4__ {TYPE_1__ l3; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct l3_process*,int ,int) ;
 int FUNC_2 (struct l3_process*,int ,void*) ;
 int FUNC_3 (struct l3_process*) ;
 int FUNC_4 (TYPE_2__*,int ,struct l3_process*) ;

__attribute__((used)) static void
FUNC_5(struct l3_process *VAR_2, u_char VAR_3, void *VAR_4)
{
 if (VAR_2->N303 > 0) {
  VAR_2->N303--;
  FUNC_0(&VAR_2->timer);
  FUNC_2(VAR_2, VAR_3, VAR_4);
 } else {
  FUNC_0(&VAR_2->timer);
  FUNC_1(VAR_2, VAR_1, 102);
  VAR_2->st->l3.l3l4(VAR_2->st, VAR_0, VAR_2);
  FUNC_3(VAR_2);
 }
}
