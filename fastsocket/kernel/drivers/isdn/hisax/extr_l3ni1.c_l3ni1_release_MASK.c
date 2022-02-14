
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int len; int data; } ;
struct TYPE_6__ {int cause; } ;
struct l3_process {int debug; int state; TYPE_3__* st; int callref; TYPE_1__ para; } ;
struct TYPE_7__ {int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_8__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct l3_process*) ;
 int FUNC_1 (struct l3_process*,struct sk_buff*,int ) ;
 int * FUNC_2 (int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (struct l3_process*,struct sk_buff*) ;
 int FUNC_5 (struct l3_process*,int ) ;
 int FUNC_6 (struct l3_process*,int ,int) ;
 int FUNC_7 (TYPE_3__*,struct l3_process*,int ,int *) ;
 int FUNC_8 (struct l3_process*,int ) ;
 int FUNC_9 (struct l3_process*) ;
 int FUNC_10 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_11(struct l3_process *VAR_9, u_char VAR_10, void *VAR_11)
{
 struct sk_buff *VAR_12 = VAR_11;
 u_char *VAR_13;
 int VAR_14, VAR_15=0;

 FUNC_0(VAR_9);
 if ((VAR_14 = FUNC_4(VAR_9, VAR_12))>0) {
  if (VAR_9->debug & VAR_5)
   FUNC_3(VAR_9->st, "REL get_cause ret(%d)", VAR_14);
 } else if (VAR_14<0)
  VAR_9->para.cause = VAR_7;
 if ((VAR_13 = FUNC_2(VAR_12->data, VAR_12->len, VAR_3, 0))) {
  FUNC_7(VAR_9->st, VAR_9, VAR_9->callref, VAR_13);
 }
 if ((VAR_14<0) && (VAR_9->state != 11))
  VAR_15 = 96;
 else if (VAR_14>0)
  VAR_15 = 100;
 VAR_14 = FUNC_1(VAR_9, VAR_12, VAR_8);
 if (VAR_1 == VAR_14)
  VAR_15 = 96;
 else if ((VAR_2 == VAR_14) && (!VAR_15))
  VAR_15 = 99;
 if (VAR_15)
  FUNC_6(VAR_9, VAR_6, VAR_15);
 else
  FUNC_5(VAR_9, VAR_6);
 VAR_9->st->l3.l3l4(VAR_9->st, VAR_0 | VAR_4, VAR_9);
 FUNC_8(VAR_9, 0);
 FUNC_9(VAR_9);
}
