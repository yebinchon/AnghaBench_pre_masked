
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int* data; int len; } ;
struct TYPE_6__ {int chargeinfo; int cause; int loc; } ;
struct l3_process {TYPE_3__* st; TYPE_1__ para; } ;
struct TYPE_7__ {int debug; int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_8__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct l3_process*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sk_buff*) ;
 int* FUNC_2 (int*,int ,int ,int) ;
 int FUNC_3 (char*,int*,int) ;
 int FUNC_4 (struct l3_process*,char*,struct sk_buff*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (struct l3_process*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_3__*,int,struct l3_process*) ;
 int FUNC_10 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_11(struct l3_process *VAR_9, u_char VAR_10, void *VAR_11)
{
 struct sk_buff *VAR_12 = VAR_11;
 u_char *VAR_13;
 int VAR_14, VAR_15 = 0;
 char VAR_16[8], VAR_17[32];

 FUNC_0(VAR_9);
 VAR_13 = VAR_12->data;
 if ((VAR_13 = FUNC_2(VAR_13, VAR_12->len, VAR_7, 6))) {
  FUNC_3(VAR_16, VAR_13, 1);
  for (VAR_14 = 0; VAR_14 < FUNC_8(VAR_16); VAR_14++) {
   VAR_15 *= 10;
   VAR_15 += VAR_16[VAR_14] & 0xf;
  }
  if (VAR_15 > VAR_9->para.chargeinfo) {
   VAR_9->para.chargeinfo = VAR_15;
   VAR_9->st->l3.l3l4(VAR_9->st, VAR_0 | VAR_2, VAR_9);
  }
  if (VAR_9->st->l3.debug & VAR_3) {
   FUNC_7(VAR_17, "charging info %d", VAR_9->para.chargeinfo);
   FUNC_5(VAR_9->st, VAR_17);
  }
 } else if (VAR_9->st->l3.debug & VAR_3)
  FUNC_5(VAR_9->st, "charging info not found");


 VAR_13 = VAR_12->data;
 if ((VAR_13 = FUNC_2(VAR_13, VAR_12->len, VAR_6, 0))) {
  if (VAR_13[1] > 0) {
   VAR_9->para.cause = VAR_13[2];
   if (VAR_13[1] > 1)
    VAR_9->para.loc = VAR_13[3];
   else
    VAR_9->para.loc = 0;
  } else {
   VAR_9->para.cause = 0;
   VAR_9->para.loc = 0;
  }
 } else {
  if (VAR_9->st->l3.debug & VAR_4)
   FUNC_5(VAR_9->st, "cause not found");
  VAR_9->para.cause = VAR_5;
 }
 if (!FUNC_2(VAR_12->data, VAR_12->len, VAR_8, 6)) {
  FUNC_4(VAR_9, "missing connack date", VAR_12);
  return;
 }
 FUNC_1(VAR_12);
 FUNC_6(VAR_9, 12);
 VAR_9->st->l3.l3l4(VAR_9->st, VAR_1 | VAR_2, VAR_9);
}
