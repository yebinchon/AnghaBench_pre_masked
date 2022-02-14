
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int len; int data; } ;
struct TYPE_5__ {scalar_t__ chargeinfo; } ;
struct l3_process {TYPE_3__* st; int timer; TYPE_2__ para; } ;
struct TYPE_4__ {int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_6__ {TYPE_1__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct l3_process*,char*,struct sk_buff*) ;
 int FUNC_4 (struct l3_process*,int) ;
 int FUNC_5 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_6(struct l3_process *VAR_3, u_char VAR_4, void *VAR_5)
{
 struct sk_buff *VAR_6 = VAR_5;

 if (!FUNC_2(VAR_6->data, VAR_6->len, VAR_2, 6)) {
  FUNC_3(VAR_3, "missing connack date", VAR_6);
  return;
 }
 FUNC_1(VAR_6);
 FUNC_4(VAR_3, 10);
 VAR_3->para.chargeinfo = 0;
 FUNC_0(&VAR_3->timer);
 VAR_3->st->l3.l3l4(VAR_3->st, VAR_0 | VAR_1, VAR_3);
}
