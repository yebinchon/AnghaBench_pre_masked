
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int cause; } ;
struct l3_process {int debug; TYPE_3__* st; int timer; TYPE_1__ para; } ;
struct TYPE_6__ {int (* l3l4 ) (TYPE_3__*,int ,struct l3_process*) ;} ;
struct TYPE_7__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct l3_process*,struct sk_buff*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (struct l3_process*,struct sk_buff*) ;
 int FUNC_4 (struct l3_process*,int ,int *) ;
 int FUNC_5 (struct l3_process*,int) ;
 int FUNC_6 (struct l3_process*,int) ;
 int FUNC_7 (TYPE_3__*,int ,struct l3_process*) ;

__attribute__((used)) static void
FUNC_8(struct l3_process *VAR_4, u_char VAR_5, void *VAR_6)
{
 struct sk_buff *VAR_7 = VAR_6;
 int VAR_8;

 if ((VAR_8 = FUNC_3(VAR_4, VAR_7))) {
  if (VAR_4->debug & VAR_2)
   FUNC_2(VAR_4->st, "SUSP_REJ get_cause ret(%d)",VAR_8);
  if (VAR_8 < 0)
   VAR_4->para.cause = 96;
  else
   VAR_4->para.cause = 100;
  FUNC_4(VAR_4, VAR_5, ((void*)0));
  return;
 }
 VAR_8 = FUNC_1(VAR_4, VAR_7, VAR_3);
 if (VAR_1 == VAR_8) {
  FUNC_5(VAR_4, VAR_8);
  return;
 }
 FUNC_0(&VAR_4->timer);
 VAR_4->st->l3.l3l4(VAR_4->st, VAR_0, VAR_4);
 FUNC_6(VAR_4, 10);
 if (VAR_8)
  FUNC_5(VAR_4, VAR_8);
}
