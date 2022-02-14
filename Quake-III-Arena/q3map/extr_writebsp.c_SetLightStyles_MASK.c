
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int entity_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (int *,char*,char*) ;
 char* FUNC_3 (int *,char*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char const*) ;

void FUNC_7 (void)
{
 int VAR_3;
 const char *VAR_4;
 entity_t *VAR_5;
 int VAR_6, VAR_7;
 char VAR_8[10];
 char VAR_9[VAR_0][64];





 VAR_3 = 0;
 for (VAR_6=1 ; VAR_6<VAR_2 ; VAR_6++)
 {
  VAR_5 = &VAR_1[VAR_6];

  VAR_4 = FUNC_3 (VAR_5, "classname");
  if (FUNC_1 (VAR_4, "light", 5))
   continue;
  VAR_4 = FUNC_3 (VAR_5, "targetname");
  if (!VAR_4[0])
   continue;


  for (VAR_7=0 ; VAR_7<VAR_3 ; VAR_7++)
   if (!FUNC_5 (VAR_9[VAR_7], VAR_4))
    break;
  if (VAR_7 == VAR_3)
  {
   if (VAR_3 == VAR_0)
    FUNC_0 ("stylenum == MAX_SWITCHED_LIGHTS");
   FUNC_6 (VAR_9[VAR_7], VAR_4);
   VAR_3++;
  }
  FUNC_4 (VAR_8, "%i", 32 + VAR_7);
  FUNC_2 (VAR_5, "style", VAR_8);
 }

}
