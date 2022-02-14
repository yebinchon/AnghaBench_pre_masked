
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int* phone; int si1; int* eazmsn; int si2; } ;
struct TYPE_4__ {TYPE_1__ setup; } ;
struct l3_process {int debug; int st; int timer; TYPE_2__ para; int callref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int*,int) ;
 void* FUNC_1 (int,int) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int*,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int) ;
 struct sk_buff* FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int,struct sk_buff*) ;
 int FUNC_9 (int ,int*,int) ;
 int FUNC_10 (struct l3_process*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (int*,char) ;
 int FUNC_13 (int*) ;

__attribute__((used)) static void
FUNC_14(struct l3_process *VAR_14, u_char VAR_15,
   void *VAR_16)
{
 struct sk_buff *VAR_17;
 u_char VAR_18[128];
 u_char *VAR_19 = VAR_18;
 u_char VAR_20 = 0;

        u_char VAR_21;
 u_char VAR_22 = 0x80;
 u_char *VAR_23;
 u_char *VAR_24;
 u_char *VAR_25;
 u_char *VAR_26;
 int VAR_27;

 FUNC_4(VAR_19, VAR_14->callref, VAR_11);

 VAR_23 = VAR_14->para.setup.phone;

        VAR_21 = (FUNC_12(VAR_23,'*') || FUNC_12(VAR_23,'#')) ? 1 : 0;




 if (!VAR_21)
  *VAR_19++ = 0xa1;




 switch (VAR_14->para.setup.si1) {
 case 1:
  *VAR_19++ = VAR_2;
  *VAR_19++ = 0x3;
  *VAR_19++ = 0x90;
  *VAR_19++ = 0x90;
  *VAR_19++ = 0xa3;
  break;
 case 5:
 case 7:
 default:
  *VAR_19++ = VAR_2;
  *VAR_19++ = 0x2;
  *VAR_19++ = 0x88;
  *VAR_19++ = 0x90;
  break;
 }

 if (VAR_21) {
  *VAR_19++ = VAR_8;
  *VAR_19++ = FUNC_13(VAR_23);
  while (*VAR_23)
   *VAR_19++ = (*VAR_23++) & 0x7F;
 }




 if ((*VAR_23) && (!VAR_21)) {

  if (!FUNC_5(*VAR_23)) {
   switch (0x5f & *VAR_23) {
    case 'C':
     VAR_20 = 0x08;
    case 'P':
     VAR_20 |= 0x80;
     VAR_23++;
     if (*VAR_23 == '1')
      VAR_20 |= 0x01;
     else
      VAR_20 |= 0x02;
     break;
    case 'R':
     VAR_22 = 0xA0;
     break;
    case 'D':
     VAR_22 = 0x80;
     break;

           default:
     if (VAR_14->debug & VAR_10)
      FUNC_7(VAR_14->st, "Wrong MSN Code");
     break;
   }
   VAR_23++;
  }
 }
 if (VAR_20) {
  *VAR_19++ = VAR_7;
  *VAR_19++ = 1;
  *VAR_19++ = VAR_20;
 }
 VAR_24 = VAR_14->para.setup.eazmsn;
 VAR_25 = ((void*)0);
 VAR_26 = VAR_24;
 while (*VAR_26) {
  if ('.' == *VAR_26) {
   VAR_25 = VAR_26;
   *VAR_26 = 0;
  } else
   VAR_26++;
 }
 if (*VAR_24) {
  *VAR_19++ = VAR_5;
  *VAR_19++ = FUNC_13(VAR_24) + (VAR_22 ? 2 : 1);

  if (VAR_22) {
   *VAR_19++ = 0x01;
   *VAR_19++ = VAR_22;
  } else
   *VAR_19++ = 0x81;
  while (*VAR_24)
   *VAR_19++ = *VAR_24++ & 0x7f;
 }
 if (VAR_25) {
  *VAR_25++ = '.';
  *VAR_19++ = VAR_6;
  *VAR_19++ = FUNC_13(VAR_25) + 2;
  *VAR_19++ = 0x80;
  *VAR_19++ = 0x50;
  while (*VAR_25)
   *VAR_19++ = *VAR_25++ & 0x7f;
 }
 VAR_25 = ((void*)0);
 VAR_26 = VAR_23;
 while (*VAR_26) {
  if ('.' == *VAR_26) {
   VAR_25 = VAR_26;
   *VAR_26 = 0;
  } else
   VAR_26++;
 }

        if (!VAR_21) {
  *VAR_19++ = VAR_3;
  *VAR_19++ = FUNC_13(VAR_23) + 1;

  *VAR_19++ = 0x81;
  while (*VAR_23)
   *VAR_19++ = *VAR_23++ & 0x7f;

  if (VAR_25) {
   *VAR_25++ = '.';
   *VAR_19++ = VAR_4;
   *VAR_19++ = FUNC_13(VAR_25) + 2;
   *VAR_19++ = 0x80;
   *VAR_19++ = 0x50;
   while (*VAR_25)
    *VAR_19++ = *VAR_25++ & 0x7f;
  }
        }
 VAR_27 = VAR_19 - VAR_18;
 if (!(VAR_17 = FUNC_6(VAR_27)))
  return;
 FUNC_9(FUNC_11(VAR_17, VAR_27), VAR_18, VAR_27);
 FUNC_3(&VAR_14->timer);
 FUNC_2(&VAR_14->timer, VAR_13, VAR_0);
 FUNC_10(VAR_14, 1);
 FUNC_8(VAR_14->st, VAR_1 | VAR_12, VAR_17);
}
