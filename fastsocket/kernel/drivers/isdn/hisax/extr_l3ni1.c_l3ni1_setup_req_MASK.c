
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {char* phone; int si1; int si2; } ;
struct TYPE_4__ {TYPE_1__ setup; } ;
struct l3_process {int st; int timer; TYPE_2__ para; int callref; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int) ;
 void* FUNC_1 (int,int) ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_5 (int) ;
 int FUNC_6 (int ,int,struct sk_buff*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (struct l3_process*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(struct l3_process *VAR_8, u_char VAR_9,
   void *VAR_10)
{
 struct sk_buff *VAR_11;
 u_char VAR_12[128];
 u_char *VAR_13 = VAR_12;

 u_char *VAR_14;
 u_char *VAR_15;
 u_char *VAR_16;
 int VAR_17;

 FUNC_4(VAR_13, VAR_8->callref, VAR_5);

 VAR_14 = VAR_8->para.setup.phone;

 *VAR_13++ = 0xa1;



 switch (VAR_8->para.setup.si1) {
 case 1:
  *VAR_13++ = VAR_2;
  *VAR_13++ = 0x3;
  *VAR_13++ = 0x90;
  *VAR_13++ = 0x90;
  *VAR_13++ = 0xa2;
  break;
 case 5:
 case 7:
 default:
  *VAR_13++ = VAR_2;
  *VAR_13++ = 0x2;
  *VAR_13++ = 0x88;
  *VAR_13++ = 0x90;
  break;
 }

 VAR_15 = ((void*)0);
 VAR_16 = VAR_14;
 while (*VAR_16) {
  if ('.' == *VAR_16) {
   VAR_15 = VAR_16;
   *VAR_16 = 0;
  } else
   VAR_16++;
 }

 *VAR_13++ = VAR_3;
 *VAR_13++ = FUNC_10(VAR_14);
 while (*VAR_14)
  *VAR_13++ = (*VAR_14++) & 0x7F;

 if (VAR_15)
  *VAR_15++ = '.';
 VAR_17 = VAR_13 - VAR_12;
 if (!(VAR_11 = FUNC_5(VAR_17)))
{
  return;
}
 FUNC_7(FUNC_9(VAR_11, VAR_17), VAR_12, VAR_17);
 FUNC_3(&VAR_8->timer);
 FUNC_2(&VAR_8->timer, VAR_7, VAR_0);
 FUNC_8(VAR_8, 1);
 FUNC_6(VAR_8->st, VAR_1 | VAR_6, VAR_11);
}
