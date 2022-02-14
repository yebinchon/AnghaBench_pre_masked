
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,char*,int) ;

int FUNC_5(char *VAR_3) {
 int VAR_4;
 char VAR_5[VAR_2];
 static int VAR_6;

 if (!VAR_6)
  VAR_6 = FUNC_3("sv_maxclients");
 for (VAR_4 = 0; VAR_4 < VAR_6 && VAR_4 < VAR_1; VAR_4++) {
  FUNC_4(VAR_0+VAR_4, VAR_5, sizeof(VAR_5));
  FUNC_1( VAR_5 );
  if (!FUNC_2(FUNC_0(VAR_5, "n"), VAR_3)) return VAR_4;
 }
 return -1;
}
