
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int b; } ;
struct del_stack {int tm; int top; struct frame* spine; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct del_stack *VAR_0)
{
 struct frame *VAR_1 = VAR_0->spine + VAR_0->top--;

 FUNC_1(VAR_0->tm, FUNC_0(VAR_1->b));
 FUNC_2(VAR_0->tm, VAR_1->b);
}
