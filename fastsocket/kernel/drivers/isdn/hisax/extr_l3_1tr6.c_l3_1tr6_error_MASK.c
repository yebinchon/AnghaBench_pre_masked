
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct l3_process {TYPE_2__* st; } ;
struct TYPE_3__ {int debug; } ;
struct TYPE_4__ {TYPE_1__ l3; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct l3_process*,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_3(struct l3_process *VAR_1, u_char *VAR_2, struct sk_buff *VAR_3)
{
 FUNC_0(VAR_3);
 if (VAR_1->st->l3.debug & VAR_0)
  FUNC_2(VAR_1->st, VAR_2);
 FUNC_1(VAR_1, 0, ((void*)0));
}
