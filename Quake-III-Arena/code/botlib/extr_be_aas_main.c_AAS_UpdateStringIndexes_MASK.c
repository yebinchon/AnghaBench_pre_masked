
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** configstrings; int indexessetup; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

void FUNC_3(int VAR_2, char *VAR_3[])
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  if (VAR_3[VAR_4])
  {

   VAR_0.configstrings[VAR_4] = (char *) FUNC_0(FUNC_2(VAR_3[VAR_4]) + 1);
   FUNC_1(VAR_0.configstrings[VAR_4], VAR_3[VAR_4]);
  }
 }
 VAR_0.indexessetup = VAR_1;
}
