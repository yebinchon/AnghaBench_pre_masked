
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ destructor; int next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct sk_buff *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->next);
 if (VAR_0->destructor)



  FUNC_2(VAR_0);
 else



  FUNC_1(VAR_0);
}
