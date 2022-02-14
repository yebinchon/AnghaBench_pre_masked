
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;


 int FUNC_0 (char*,int,char*,int ,char*) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_0)
{
 static int VAR_1 = -1, VAR_2;
 char VAR_3[1024];
 char *VAR_4 = VAR_0;

 while ((VAR_4 = FUNC_2(VAR_4, "@@")))
 {
  if (VAR_4[2] < '0' || VAR_4[2] > '9') { VAR_4++; continue; }

  if (VAR_1 != VAR_4[2] - '0') {
   VAR_1 = VAR_4[2] - '0';
   VAR_2 = 1;
  }
  FUNC_0(VAR_3, sizeof(VAR_3), "%i%s", VAR_2++, VAR_4 + 3);
  FUNC_1(VAR_4, VAR_3);
 }
}
