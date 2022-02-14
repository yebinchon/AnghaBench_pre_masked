
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int* ProgramRam; } ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (void*,int,int,int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(const char *VAR_1) {
   FILE *VAR_2;
   u32 VAR_3;
   u8 *VAR_4;

   if (!VAR_1)
      return -1;

   if ((VAR_2 = FUNC_1(VAR_1, "wb")) == ((void*)0))
      return -1;

   if ((VAR_4 = (u8 *)FUNC_4(sizeof(VAR_0->ProgramRam))) == ((void*)0))
   {
      FUNC_0(VAR_2);
      return -2;
   }

   for (VAR_3 = 0; VAR_3 < 256; VAR_3++)
   {
      VAR_4[VAR_3 * 4] = (u8)(VAR_0->ProgramRam[VAR_3] >> 24);
      VAR_4[(VAR_3 * 4)+1] = (u8)(VAR_0->ProgramRam[VAR_3] >> 16);
      VAR_4[(VAR_3 * 4)+2] = (u8)(VAR_0->ProgramRam[VAR_3] >> 8);
      VAR_4[(VAR_3 * 4)+3] = (u8)VAR_0->ProgramRam[VAR_3];
   }

   FUNC_3((void *)VAR_4, 1, sizeof(VAR_0->ProgramRam), VAR_2);
   FUNC_0(VAR_2);
   FUNC_2(VAR_4);

   return 0;
}
