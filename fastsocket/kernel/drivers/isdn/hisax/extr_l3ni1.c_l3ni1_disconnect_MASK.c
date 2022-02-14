
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int len; int data; } ;
struct l3_process {int debug; int state; int timer; TYPE_2__* st; int callref; } ;
struct TYPE_5__ {int (* l3l4 ) (TYPE_2__*,int,struct l3_process*) ;} ;
struct TYPE_6__ {TYPE_1__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct l3_process*) ;
 int VAR_8 ;
 int FUNC_2 (struct l3_process*,struct sk_buff*,int ) ;
 int* FUNC_3 (int ,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (struct l3_process*,struct sk_buff*) ;
 int FUNC_6 (struct l3_process*,int ,int) ;
 int FUNC_7 (TYPE_2__*,struct l3_process*,int ,int*) ;
 int FUNC_8 (struct l3_process*,int,int *) ;
 int FUNC_9 (struct l3_process*,int) ;
 int FUNC_10 (TYPE_2__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_11(struct l3_process *VAR_10, u_char VAR_11, void *VAR_12)
{
 struct sk_buff *VAR_13 = VAR_12;
 u_char *VAR_14;
 int VAR_15;
 u_char VAR_16 = 0;

 FUNC_1(VAR_10);
 if ((VAR_15 = FUNC_5(VAR_10, VAR_13))) {
  if (VAR_10->debug & VAR_6)
   FUNC_4(VAR_10->st, "DISC get_cause ret(%d)", VAR_15);
  if (VAR_15 < 0)
   VAR_16 = 96;
  else if (VAR_15 > 0)
   VAR_16 = 100;
 }
 if ((VAR_14 = FUNC_3(VAR_13->data, VAR_13->len, VAR_4, 0)))
  FUNC_7(VAR_10->st, VAR_10, VAR_10->callref, VAR_14);
 VAR_15 = FUNC_2(VAR_10, VAR_13, VAR_9);
 if (VAR_2 == VAR_15)
  VAR_16 = 96;
 else if ((!VAR_16) && (VAR_3 == VAR_15))
  VAR_16 = 99;
 VAR_15 = VAR_10->state;
 FUNC_9(VAR_10, 12);
 if (VAR_16)
  FUNC_9(VAR_10, 19);
        if (11 != VAR_15)
  VAR_10->st->l3.l3l4(VAR_10->st, VAR_0 | VAR_5, VAR_10);
        else if (!VAR_16)
     FUNC_8(VAR_10, VAR_11, ((void*)0));
 if (VAR_16) {
  FUNC_6(VAR_10, VAR_7, VAR_16);
  FUNC_0(&VAR_10->timer, VAR_8, VAR_1);
 }
}
