
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int) ;

void FUNC_7 (char *VAR_3)
{
 char VAR_4[1024];
 char *VAR_5;
 int VAR_6;

 if (!(VAR_3[0] == '/' || VAR_3[0] == '\\' || VAR_3[1] == ':'))
 {
  FUNC_1 (VAR_4);
  FUNC_4 (VAR_4, VAR_3);
  VAR_3 = VAR_4;
 }



 VAR_6 = FUNC_5(VAR_0);
 for (VAR_5=VAR_3+FUNC_5(VAR_3)-1 ; VAR_5 != VAR_3 ; VAR_5--)
  if (!FUNC_2 (VAR_5, VAR_0, VAR_6))
  {
   FUNC_6 (VAR_2, VAR_3, VAR_5+VAR_6+1-VAR_3);
   FUNC_3 ("qdir: %s\n", VAR_2);
   VAR_5 += VAR_6+1;
   while (*VAR_5)
   {
    if (*VAR_5 == '/' || *VAR_5 == '\\')
    {
     FUNC_6 (VAR_1, VAR_3, VAR_5+1-VAR_3);
     FUNC_3 ("gamedir: %s\n", VAR_1);
     return;
    }
    VAR_5++;
   }
   FUNC_0 ("No gamedir in %s", VAR_3);
   return;
  }
 FUNC_0 ("SetQdirFromPath: no '%s' in %s", VAR_0, VAR_3);
}
