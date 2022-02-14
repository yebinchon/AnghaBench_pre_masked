
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int PC; } ;
struct TYPE_6__ {TYPE_2__ regs; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;
 size_t FUNC_10 (char*) ;
 char* FUNC_11 (char const*,char) ;
 char FUNC_12 (char) ;

void FUNC_13(const char *VAR_1, u32 VAR_2)
{
   char *VAR_3;
   size_t VAR_4;

   if ((VAR_3 = FUNC_11(VAR_1, '.')))
   {
      VAR_3 = FUNC_9(VAR_3);
      for (VAR_4 = 0; VAR_4 < FUNC_10(VAR_3); VAR_4++)
         VAR_3[VAR_4] = FUNC_12(VAR_3[VAR_4]);
      if (FUNC_8(VAR_3, ".COF") == 0 || FUNC_8(VAR_3, ".COFF") == 0)
      {
         FUNC_1(VAR_1);
         FUNC_7(VAR_3);
         return;
      }
      else if(FUNC_8(VAR_3, ".ELF") == 0)
      {
         FUNC_2(VAR_1);
         FUNC_7(VAR_3);
         return;
      }

      FUNC_7(VAR_3);
   }

   FUNC_5();


   FUNC_6();

   FUNC_0(VAR_1, VAR_2);
   FUNC_3(VAR_0, &VAR_0->regs);
   VAR_0->regs.PC = VAR_2;
   FUNC_4(VAR_0, &VAR_0->regs);
}
