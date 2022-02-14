
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int* phone; int* eazmsn; int si2; int si1; } ;
struct TYPE_8__ {int spv; TYPE_2__ setup; } ;
struct l3_process {TYPE_4__* st; int timer; TYPE_3__ para; int callref; } ;
struct TYPE_6__ {int debug; } ;
struct TYPE_9__ {TYPE_1__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int*,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int) ;
 struct sk_buff* FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*,int,struct sk_buff*) ;
 int FUNC_7 (int ,int*,int) ;
 int FUNC_8 (struct l3_process*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (int*) ;

__attribute__((used)) static void
FUNC_11(struct l3_process *VAR_14, u_char VAR_15, void *VAR_16)
{
 struct sk_buff *VAR_17;
 u_char VAR_18[128];
 u_char *VAR_19 = VAR_18;
 u_char *VAR_20;
 u_char *VAR_21;
 u_char VAR_22 = 0;
 int VAR_23;

 FUNC_2(VAR_19, VAR_14->callref, VAR_5, VAR_6);
 VAR_20 = VAR_14->para.setup.phone;
 VAR_14->para.spv = 0;
 if (!FUNC_3(*VAR_20)) {
  switch (0x5f & *VAR_20) {
   case 'S':
    VAR_14->para.spv = 1;
    break;
   case 'C':
    VAR_22 = 0x08;
   case 'P':
    VAR_22 |= 0x80;
    VAR_20++;
    if (*VAR_20 == '1')
     VAR_22 |= 0x01;
    else
     VAR_22 |= 0x02;
    break;
   default:
    if (VAR_14->st->l3.debug & VAR_4)
     FUNC_5(VAR_14->st, "Wrong MSN Code");
    break;
  }
  VAR_20++;
 }
 if (VAR_22) {
  *VAR_19++ = 0x18;
  *VAR_19++ = 1;
  *VAR_19++ = VAR_22;
 }
 if (VAR_14->para.spv) {

  *VAR_19++ = VAR_10;
  *VAR_19++ = 4;
  *VAR_19++ = 0;
  *VAR_19++ = VAR_3;
  *VAR_19++ = VAR_14->para.setup.si1;
  *VAR_19++ = VAR_14->para.setup.si2;
  *VAR_19++ = VAR_10;
  *VAR_19++ = 4;
  *VAR_19++ = 0;
  *VAR_19++ = VAR_2;
  *VAR_19++ = VAR_14->para.setup.si1;
  *VAR_19++ = VAR_14->para.setup.si2;
 }
 VAR_21 = VAR_14->para.setup.eazmsn;
 if (*VAR_21) {
  *VAR_19++ = VAR_11;
  *VAR_19++ = FUNC_10(VAR_21) + 1;

  *VAR_19++ = 0x81;
  while (*VAR_21)
   *VAR_19++ = *VAR_21++ & 0x7f;
 }
 *VAR_19++ = VAR_9;
 *VAR_19++ = FUNC_10(VAR_20) + 1;

 *VAR_19++ = 0x81;
 while (*VAR_20)
  *VAR_19++ = *VAR_20++ & 0x7f;

 *VAR_19++ = VAR_13;

 *VAR_19++ = VAR_12;
 *VAR_19++ = 2;
 *VAR_19++ = VAR_14->para.setup.si1;
 *VAR_19++ = VAR_14->para.setup.si2;

 VAR_23 = VAR_19 - VAR_18;
 if (!(VAR_17 = FUNC_4(VAR_23)))
  return;
 FUNC_7(FUNC_9(VAR_17, VAR_23), VAR_18, VAR_23);
 FUNC_1(&VAR_14->timer);
 FUNC_0(&VAR_14->timer, VAR_8, VAR_0);
 FUNC_8(VAR_14, 1);
 FUNC_6(VAR_14->st, VAR_1 | VAR_7, VAR_17);
}
