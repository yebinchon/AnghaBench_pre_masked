
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,char*,int) ;

int FUNC_5(void) {
 int VAR_4, VAR_5;
 char VAR_6[VAR_2];
 static int VAR_7;

 if (!VAR_7)
  VAR_7 = FUNC_3("sv_maxclients");

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_7 && VAR_4 < VAR_1; VAR_4++) {
  FUNC_4(VAR_0+VAR_4, VAR_6, sizeof(VAR_6));

  if (!FUNC_2(VAR_6) || !FUNC_2(FUNC_0(VAR_6, "n"))) continue;

  if (FUNC_1(FUNC_0(VAR_6, "t")) == VAR_3) continue;

  VAR_5++;
 }
 return VAR_5;
}
