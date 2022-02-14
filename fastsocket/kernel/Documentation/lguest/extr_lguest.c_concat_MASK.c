
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, char *VAR_1[])
{
 unsigned int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
  if (VAR_2) {
   FUNC_0(VAR_0+VAR_3, " ");
   VAR_3++;
  }
  FUNC_1(VAR_0+VAR_3, VAR_1[VAR_2]);
  VAR_3 += FUNC_2(VAR_1[VAR_2]);
 }

 VAR_0[VAR_3] = '\0';
}
