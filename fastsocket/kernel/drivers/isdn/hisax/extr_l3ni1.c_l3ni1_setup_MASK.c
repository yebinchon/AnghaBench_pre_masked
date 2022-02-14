
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
struct TYPE_7__ {int si1; char* eazmsn; int plan; char* phone; int screen; scalar_t__ si2; } ;
struct TYPE_8__ {int moderate; int cause; int bchannel; TYPE_2__ setup; } ;
struct l3_process {int debug; TYPE_4__* st; TYPE_3__ para; } ;
struct TYPE_6__ {int (* l3l4 ) (TYPE_4__*,int,struct l3_process*) ;} ;
struct TYPE_9__ {TYPE_1__ l3; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct l3_process*,struct sk_buff*,int ) ;
 int* FUNC_2 (int*,int ,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,int*,int) ;
 int FUNC_4 (TYPE_4__*,char*,...) ;
 int FUNC_5 (struct l3_process*,struct sk_buff*) ;
 int FUNC_6 (struct l3_process*,int,int *) ;
 int FUNC_7 (struct l3_process*,int) ;
 int FUNC_8 (struct l3_process*,int) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (TYPE_4__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_11(struct l3_process *VAR_6, u_char VAR_7, void *VAR_8)
{
 u_char *VAR_9;
 int VAR_10 = 0;
 char VAR_11[80];
 struct sk_buff *VAR_12 = VAR_8;
 int VAR_13;
 int VAR_14 = 0;




 VAR_9 = VAR_12->data;

 if ((VAR_9 = FUNC_2(VAR_9, VAR_12->len, 0x04, 0))) {
  if ((VAR_9[1] < 2) || (VAR_9[1] > 11))
   VAR_14 = 1;
  else {
   VAR_6->para.setup.si2 = 0;
   switch (VAR_9[2] & 0x7f) {
    case 0x00:
    case 0x10:
     VAR_6->para.setup.si1 = 1;
     break;
    case 0x08:
     VAR_6->para.setup.si1 = 7;




     break;
    case 0x09:
     VAR_6->para.setup.si1 = 2;
     break;
    case 0x11:



     VAR_6->para.setup.si1 = 3;
     break;
    case 0x18:
     VAR_6->para.setup.si1 = 4;
     break;
    default:
     VAR_14 = 2;
     break;
   }
   switch (VAR_9[3] & 0x7f) {
    case 0x40:
     VAR_6->para.setup.si1 = 8;
     break;
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x15:
    case 0x17:
     VAR_6->para.moderate = VAR_9[3] & 0x7f;
     break;
    default:
     VAR_14 = 3;
     break;
   }
  }
  if (VAR_6->debug & VAR_3)
   FUNC_4(VAR_6->st, "SI=%d, AI=%d",
    VAR_6->para.setup.si1, VAR_6->para.setup.si2);
  if (VAR_14) {
   if (VAR_6->debug & VAR_4)
    FUNC_4(VAR_6->st, "setup with wrong bearer(l=%d:%x,%x)",
     VAR_9[1], VAR_9[2], VAR_9[3]);
   VAR_6->para.cause = 100;
   FUNC_6(VAR_6, VAR_7, ((void*)0));
   return;
  }
 } else {
  if (VAR_6->debug & VAR_4)
   FUNC_4(VAR_6->st, "setup without bearer capabilities");

  VAR_6->para.cause = 96;
  FUNC_6(VAR_6, VAR_7, ((void*)0));
  return;
 }



 if ((VAR_13 = FUNC_5(VAR_6, VAR_12)) >= 0) {
  if ((VAR_6->para.bchannel = VAR_13)) {
   if ((3 == VAR_13) && (0x10 == VAR_6->para.moderate)) {
    if (VAR_6->debug & VAR_4)
     FUNC_4(VAR_6->st, "setup with wrong chid %x",
      VAR_13);
    VAR_6->para.cause = 100;
    FUNC_6(VAR_6, VAR_7, ((void*)0));
    return;
   }
   VAR_10++;
  } else
                   { if (VAR_6->debug & VAR_4)
    FUNC_4(VAR_6->st, "setup without bchannel, call waiting");
                     VAR_10++;
                   }
 } else {
  if (VAR_6->debug & VAR_4)
   FUNC_4(VAR_6->st, "setup with wrong chid ret %d", VAR_13);
  if (VAR_13 == -1)
   VAR_6->para.cause = 96;
  else
   VAR_6->para.cause = 100;
  FUNC_6(VAR_6, VAR_7, ((void*)0));
  return;
 }

 VAR_14 = FUNC_1(VAR_6, VAR_12, VAR_5);
 if (VAR_1 == VAR_14) {
  VAR_6->para.cause = 96;
  FUNC_6(VAR_6, VAR_7, ((void*)0));
  return;
 }
 VAR_9 = VAR_12->data;
 if ((VAR_9 = FUNC_2(VAR_9, VAR_12->len, 0x70, 0)))
  FUNC_3(VAR_6->para.setup.eazmsn, VAR_9, 1);
 else
  VAR_6->para.setup.eazmsn[0] = 0;

 VAR_9 = VAR_12->data;
 if ((VAR_9 = FUNC_2(VAR_9, VAR_12->len, 0x71, 0))) {

  if ((VAR_9[1] >= 2) && (VAR_9[2] == 0x80) && (VAR_9[3] == 0x50)) {
   VAR_11[0] = '.';
   FUNC_3(&VAR_11[1], VAR_9, 2);
   FUNC_9(VAR_6->para.setup.eazmsn, VAR_11);
  } else if (VAR_6->debug & VAR_4)
   FUNC_4(VAR_6->st, "wrong called subaddress");
 }
 VAR_9 = VAR_12->data;
 if ((VAR_9 = FUNC_2(VAR_9, VAR_12->len, 0x6c, 0))) {
  VAR_6->para.setup.plan = VAR_9[2];
  if (VAR_9[2] & 0x80) {
   FUNC_3(VAR_6->para.setup.phone, VAR_9, 1);
   VAR_6->para.setup.screen = 0;
  } else {
   FUNC_3(VAR_6->para.setup.phone, VAR_9, 2);
   VAR_6->para.setup.screen = VAR_9[3];
  }
 } else {
  VAR_6->para.setup.phone[0] = 0;
  VAR_6->para.setup.plan = 0;
  VAR_6->para.setup.screen = 0;
 }
 VAR_9 = VAR_12->data;
 if ((VAR_9 = FUNC_2(VAR_9, VAR_12->len, 0x6d, 0))) {

  if ((VAR_9[1] >= 2) && (VAR_9[2] == 0x80) && (VAR_9[3] == 0x50)) {
   VAR_11[0] = '.';
   FUNC_3(&VAR_11[1], VAR_9, 2);
   FUNC_9(VAR_6->para.setup.phone, VAR_11);
  } else if (VAR_6->debug & VAR_4)
   FUNC_4(VAR_6->st, "wrong calling subaddress");
 }
 FUNC_8(VAR_6, 6);
 if (VAR_14)
  FUNC_7(VAR_6, VAR_14);
 VAR_6->st->l3.l3l4(VAR_6->st, VAR_0 | VAR_2, VAR_6);
}
