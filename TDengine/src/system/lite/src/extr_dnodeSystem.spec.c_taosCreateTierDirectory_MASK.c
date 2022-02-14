
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 char* VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,char*) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (char*,char*) ;
 char* VAR_2 ;

int FUNC_5() {
  struct stat VAR_3;
  FUNC_4(VAR_2, VAR_0);
  if (FUNC_3(VAR_0, &VAR_3) < 0) {
    FUNC_1(VAR_0, 0755);
  }

  char VAR_4[128];

  FUNC_2(VAR_4, "%s/tsdb", VAR_2);
  FUNC_1(VAR_4, 0755);

  FUNC_2(VAR_4, "%s/data", VAR_2);
  FUNC_1(VAR_4, 0755);

  FUNC_2(VAR_1, "%s/mgmt", VAR_2);
  FUNC_2(VAR_2, "%s/tsdb", VAR_0);
  FUNC_0(VAR_0);

  return 0;
}
