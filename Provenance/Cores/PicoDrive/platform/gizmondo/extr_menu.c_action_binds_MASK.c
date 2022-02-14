
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* KeyBinds; } ;


 TYPE_1__ VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *FUNC_2(int VAR_2, int VAR_3)
{
 static char VAR_4[32*5];
 int VAR_5;

 VAR_4[0] = 0;
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
 {
  if (VAR_0.KeyBinds[VAR_5] & VAR_3)
  {
   if (VAR_2 >= 0 && ((VAR_0.KeyBinds[VAR_5] >> 16) & 3) != VAR_2) continue;
   if (VAR_4[0]) { FUNC_0(VAR_4, " + "); FUNC_0(VAR_4, VAR_1[VAR_5]); break; }
   else FUNC_1(VAR_4, VAR_1[VAR_5]);
  }
 }

 return VAR_4;
}
