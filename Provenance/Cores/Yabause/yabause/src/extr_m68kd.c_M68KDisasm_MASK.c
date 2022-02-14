
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int mask; int inst; scalar_t__ (* disasm ) (scalar_t__,int,char*) ;int * name; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__,int,char*) ;

u32 FUNC_3(u32 VAR_1, char *VAR_2)
{
   int VAR_3;

   VAR_2 += FUNC_1(VAR_2, "%05X: ", (unsigned int)VAR_1);

   for (VAR_3 = 0; VAR_0[VAR_3].name != ((void*)0); VAR_3++)
   {
      u16 VAR_4 = (u16)FUNC_0(VAR_1);

      if ((VAR_4 & VAR_0[VAR_3].mask) == VAR_0[VAR_3].inst)
      {
         VAR_1 += VAR_0[VAR_3].disasm(VAR_1, VAR_4, VAR_2);
         return VAR_1;
      }
   }

   FUNC_1(VAR_2, "unknown");
   return (VAR_1+2);
}
