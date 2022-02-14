
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* filename; int unset; } ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t* VAR_5 ;
 TYPE_1__* VAR_6 ;
 size_t VAR_7 ;
 char** VAR_8 ;
 char** VAR_9 ;
 int FUNC_0 (int *,char*,char*,...) ;

void FUNC_1(FILE *VAR_10)
{
 int VAR_11;
 for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
  if (!VAR_6[VAR_11].unset)
   FUNC_0(VAR_10, "%s=%s\n", VAR_8[VAR_11], VAR_6[VAR_11].filename);
 }
 FUNC_0(VAR_10, "OS_400/800_VERSION=%s\n", VAR_9[VAR_5[VAR_1]]);
 FUNC_0(VAR_10, "OS_XL/XE_VERSION=%s\n", VAR_9[VAR_5[VAR_2]]);
 FUNC_0(VAR_10, "OS_5200_VERSION=%s\n", VAR_9[VAR_5[VAR_0]]);
 FUNC_0(VAR_10, "BASIC_VERSION=%s\n", VAR_9[VAR_4]);
 FUNC_0(VAR_10, "XEGS_GAME_VERSION=%s\n", VAR_9[VAR_7]);
}
