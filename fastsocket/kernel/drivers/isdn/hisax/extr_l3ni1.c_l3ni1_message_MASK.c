
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sk_buff {int dummy; } ;
struct l3_process {int st; int callref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int,struct sk_buff*) ;
 int * FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_4(struct l3_process *VAR_2, u_char VAR_3)
{
 struct sk_buff *VAR_4;
 u_char *VAR_5;

 if (!(VAR_4 = FUNC_1(4)))
  return;
 VAR_5 = FUNC_3(VAR_4, 4);
 FUNC_0(VAR_5, VAR_2->callref, VAR_3);
 FUNC_2(VAR_2->st, VAR_0 | VAR_1, VAR_4);
}
