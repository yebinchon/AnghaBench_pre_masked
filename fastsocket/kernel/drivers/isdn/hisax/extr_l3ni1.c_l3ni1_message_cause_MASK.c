
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sk_buff {int dummy; } ;
struct l3_process {int st; int callref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int,struct sk_buff*) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_5(struct l3_process *VAR_3, u_char VAR_4, u_char VAR_5)
{
 struct sk_buff *VAR_6;
 u_char VAR_7[16];
 u_char *VAR_8 = VAR_7;
 int VAR_9;

 FUNC_0(VAR_8, VAR_3->callref, VAR_4);
 *VAR_8++ = VAR_1;
 *VAR_8++ = 0x2;
 *VAR_8++ = 0x80;
 *VAR_8++ = VAR_5 | 0x80;

 VAR_9 = VAR_8 - VAR_7;
 if (!(VAR_6 = FUNC_1(VAR_9)))
  return;
 FUNC_3(FUNC_4(VAR_6, VAR_9), VAR_7, VAR_9);
 FUNC_2(VAR_3->st, VAR_0 | VAR_2, VAR_6);
}
