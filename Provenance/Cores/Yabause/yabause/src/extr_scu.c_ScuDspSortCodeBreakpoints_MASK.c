
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* codebreakpoint; } ;
struct TYPE_3__ {int addr; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_0(void) {
   int VAR_2, VAR_3;
   u32 VAR_4;

   for (VAR_2 = 0; VAR_2 < (VAR_0-1); VAR_2++)
   {
      for (VAR_3 = VAR_2+1; VAR_3 < VAR_0; VAR_3++)
      {
         if (VAR_1->codebreakpoint[VAR_2].addr == 0xFFFFFFFF &&
            VAR_1->codebreakpoint[VAR_3].addr != 0xFFFFFFFF)
         {
            VAR_4 = VAR_1->codebreakpoint[VAR_2].addr;
            VAR_1->codebreakpoint[VAR_2].addr = VAR_1->codebreakpoint[VAR_3].addr;
            VAR_1->codebreakpoint[VAR_3].addr = VAR_4;
         }
      }
   }
}
