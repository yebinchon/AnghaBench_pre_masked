
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 char** VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 char VAR_5 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*,char*) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_4(void)
{
 if (VAR_7)
  FUNC_1("CD Command");

 if (FUNC_0(VAR_4) == 0)
  return;

 if (!FUNC_2(VAR_9)) {
  VAR_2 = 150;
  VAR_1;
  return;
 }

 if (VAR_6[0] == '\0')
  VAR_3[VAR_8][0] = '\0';
 else {
  char *VAR_10 = FUNC_3(VAR_3[VAR_8], VAR_6);
  VAR_10[0] = VAR_5;
  VAR_10[1] = '\0';
 }

 VAR_2 = 1;
 VAR_0;
}
