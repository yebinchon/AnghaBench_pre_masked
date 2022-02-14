
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_state {int* stack; int i; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct stub_state *VAR_0)
{
   switch (VAR_0->stack[VAR_0->i - 1])
   {
      case 1:
         if (VAR_0->stack[VAR_0->i] % 2 == 0)
         {
            FUNC_0(": ");
            VAR_0->stack[VAR_0->i]--;
         }
         else if (VAR_0->stack[VAR_0->i] == 1)
         {
            FUNC_0("}");
            VAR_0->i -= 2;
            FUNC_1(VAR_0);
         }
         else
         {
            FUNC_0(", ");
            VAR_0->stack[VAR_0->i]--;
         }
         break;
      case 2:
         if (VAR_0->stack[VAR_0->i] == 1)
         {
            FUNC_0("]");
            VAR_0->i -= 2;
            FUNC_1(VAR_0);
         }
         else
         {
            FUNC_0(", ");
            VAR_0->stack[VAR_0->i]--;
         }
         break;
   }
}
