
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(char *VAR_2) {
 int VAR_3;
 char VAR_4[VAR_1];
 static int VAR_5;

 if (!VAR_5)
  VAR_5 = FUNC_3("sv_maxclients");
 for (VAR_3 = 0; VAR_3 < VAR_5 && VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
  if (!FUNC_1(VAR_4, VAR_2)) return VAR_3;
 }
 for (VAR_3 = 0; VAR_3 < VAR_5 && VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
  if (FUNC_2(VAR_4, VAR_2)) return VAR_3;
 }
 return -1;
}
