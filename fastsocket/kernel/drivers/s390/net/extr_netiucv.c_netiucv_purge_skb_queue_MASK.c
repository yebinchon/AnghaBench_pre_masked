
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int users; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff_head *VAR_0)
{
 struct sk_buff *VAR_1;

 while ((VAR_1 = FUNC_2(VAR_0))) {
  FUNC_0(&VAR_1->users);
  FUNC_1(VAR_1);
 }
}
