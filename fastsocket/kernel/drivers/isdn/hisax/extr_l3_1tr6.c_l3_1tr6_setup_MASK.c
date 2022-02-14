
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int* data; int len; } ;
struct TYPE_6__ {int si1; int si2; char* eazmsn; char* phone; } ;
struct TYPE_7__ {int bchannel; int spv; TYPE_1__ setup; } ;
struct l3_process {TYPE_4__* st; TYPE_2__ para; } ;
struct TYPE_8__ {int debug; int (* l3l4 ) (TYPE_4__*,int,struct l3_process*) ;} ;
struct TYPE_9__ {TYPE_3__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*) ;
 int* FUNC_1 (int*,int ,int ,int) ;
 int FUNC_2 (char*,int*,int) ;
 int FUNC_3 (struct l3_process*,char*,struct sk_buff*) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (struct l3_process*,int) ;
 int FUNC_6 (struct l3_process*) ;
 int FUNC_7 (char*,char*,char*,char*) ;
 int FUNC_8 (TYPE_4__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_9(struct l3_process *VAR_10, u_char VAR_11, void *VAR_12)
{
 u_char *VAR_13;
 int VAR_14 = 0;
 char VAR_15[80];
 struct sk_buff *VAR_16 = VAR_12;

 VAR_13 = VAR_16->data;


 VAR_13 = VAR_16->data;
 if ((VAR_13 = FUNC_1(VAR_13, VAR_16->len, VAR_5, 0))) {
  if (VAR_13[1] != 1) {
   FUNC_3(VAR_10, "setup wrong chanID len", VAR_16);
   return;
  }
  if ((VAR_13[2] & 0xf4) != 0x80) {
   FUNC_3(VAR_10, "setup wrong WE0_chanID", VAR_16);
   return;
  }
  if ((VAR_10->para.bchannel = VAR_13[2] & 0x3))
    VAR_14++;
 } else {
  FUNC_3(VAR_10, "missing setup chanID", VAR_16);
  return;
 }

 VAR_13 = VAR_16->data;
 if ((VAR_13 = FUNC_1(VAR_13, VAR_16->len, VAR_9, 6))) {
  VAR_10->para.setup.si1 = VAR_13[2];
  VAR_10->para.setup.si2 = VAR_13[3];
 } else {
  FUNC_3(VAR_10, "missing setup SI", VAR_16);
  return;
 }

 VAR_13 = VAR_16->data;
 if ((VAR_13 = FUNC_1(VAR_13, VAR_16->len, VAR_6, 0)))
  FUNC_2(VAR_10->para.setup.eazmsn, VAR_13, 1);
 else
  VAR_10->para.setup.eazmsn[0] = 0;

 VAR_13 = VAR_16->data;
 if ((VAR_13 = FUNC_1(VAR_13, VAR_16->len, VAR_8, 0))) {
  FUNC_2(VAR_10->para.setup.phone, VAR_13, 1);
 } else
  VAR_10->para.setup.phone[0] = 0;

 VAR_13 = VAR_16->data;
 VAR_10->para.spv = 0;
 if ((VAR_13 = FUNC_1(VAR_13, VAR_16->len, VAR_7, 0))) {
  if ((VAR_2 == VAR_13[3]) || (VAR_1 == VAR_13[3]))
   VAR_10->para.spv = 1;
 }
 FUNC_0(VAR_16);


 if (VAR_14) {
  if ((VAR_10->para.setup.si1 != 7) && (VAR_10->st->l3.debug & VAR_4)) {
   FUNC_7(VAR_15, "non-digital call: %s -> %s",
    VAR_10->para.setup.phone,
    VAR_10->para.setup.eazmsn);
   FUNC_4(VAR_10->st, VAR_15);
  }
  FUNC_5(VAR_10, 6);
  VAR_10->st->l3.l3l4(VAR_10->st, VAR_0 | VAR_3, VAR_10);
 } else
  FUNC_6(VAR_10);
}
