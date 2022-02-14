
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int bchannel; } ;
struct l3_process {int st; int callref; TYPE_1__ para; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int,struct sk_buff*) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_5(struct l3_process *VAR_3, u_char VAR_4)

{
 struct sk_buff *VAR_5;
 u_char VAR_6[16];
 u_char *VAR_7 = VAR_6;
 u_char VAR_8;

 VAR_8 = (u_char)(VAR_3->para.bchannel & 0x03) | 0x88;
 FUNC_0(VAR_7, VAR_3->callref, VAR_4);
 *VAR_7++ = VAR_1;
 *VAR_7++ = 0x01;
 *VAR_7++ = VAR_8;

 if (!(VAR_5 = FUNC_1(7)))
  return;
 FUNC_3(FUNC_4(VAR_5, 7), VAR_6, 7);
 FUNC_2(VAR_3->st, VAR_0 | VAR_2, VAR_5);
}
