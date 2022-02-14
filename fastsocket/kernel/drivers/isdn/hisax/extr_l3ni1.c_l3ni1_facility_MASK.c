
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sk_buff {int len; int data; } ;
struct l3_process {int callref; int st; } ;


 int VAR_0 ;
 int FUNC_0 (struct l3_process*,struct sk_buff*,int ) ;
 int * FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct l3_process*,int ,int *) ;
 int FUNC_3 (struct l3_process*,int) ;

__attribute__((used)) static void
FUNC_4(struct l3_process *VAR_2, u_char VAR_3, void *VAR_4)
{
 struct sk_buff *VAR_5 = VAR_4;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_1);
 FUNC_3(VAR_2, VAR_6);
    {
  u_char *VAR_7;
  if ((VAR_7 = FUNC_1(VAR_5->data, VAR_5->len, VAR_0, 0)))
   FUNC_2(VAR_2->st, VAR_2, VAR_2->callref, VAR_7);
 }
}
