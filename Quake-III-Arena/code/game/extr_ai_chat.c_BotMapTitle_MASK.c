
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mapname ;
typedef int info ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int) ;

char *FUNC_3(void) {
 char VAR_0[1024];
 static char VAR_1[128];

 FUNC_2(VAR_0, sizeof(VAR_0));

 FUNC_1(VAR_1, FUNC_0( VAR_0, "mapname" ), sizeof(VAR_1)-1);
 VAR_1[sizeof(VAR_1)-1] = '\0';

 return VAR_1;
}
