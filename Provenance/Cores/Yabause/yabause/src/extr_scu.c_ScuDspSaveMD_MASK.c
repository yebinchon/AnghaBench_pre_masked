
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int** MD; } ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (void*,int,int,int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(const char *VAR_1, int VAR_2) {
   FILE *VAR_3;
   u32 VAR_4;
   u8 *VAR_5;

   if (!VAR_1)
      return -1;

   if ((VAR_3 = FUNC_1(VAR_1, "wb")) == ((void*)0))
      return -1;

   if ((VAR_5 = (u8 *)FUNC_4(sizeof(VAR_0->MD[VAR_2]))) == ((void*)0))
   {
      FUNC_0(VAR_3);
      return -2;
   }

   for (VAR_4 = 0; VAR_4 < 64; VAR_4++)
   {
      VAR_5[VAR_4 * 4] = (u8)(VAR_0->MD[VAR_2][VAR_4] >> 24);
      VAR_5[(VAR_4 * 4)+1] = (u8)(VAR_0->MD[VAR_2][VAR_4] >> 16);
      VAR_5[(VAR_4 * 4)+2] = (u8)(VAR_0->MD[VAR_2][VAR_4] >> 8);
      VAR_5[(VAR_4 * 4)+3] = (u8)VAR_0->MD[VAR_2][VAR_4];
   }

   FUNC_3((void *)VAR_5, 1, sizeof(VAR_0->MD[VAR_2]), VAR_3);
   FUNC_0(VAR_3);
   FUNC_2(VAR_5);

   return 0;
}
