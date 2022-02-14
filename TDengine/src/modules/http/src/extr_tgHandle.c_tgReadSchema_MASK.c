
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (char*,int,size_t,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*,char const*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,char const*) ;

int FUNC_11(const char *VAR_1) {
  FILE *VAR_2 = FUNC_2(VAR_1, "r");
  if (VAR_2 == ((void*)0)) {
    return -1;
  }

  FUNC_8("open telegraf schema file:%s success", VAR_1);
  FUNC_5(VAR_2, 0, VAR_0);
  size_t VAR_3 = (size_t)FUNC_6(VAR_2);
  FUNC_9(VAR_2);
  char *VAR_4 = (char *)FUNC_0(VAR_3 * sizeof(char) + 1, 1);
  size_t VAR_5 = FUNC_3(VAR_4, 1, VAR_3, VAR_2);
  if (VAR_5 != VAR_3) {
    FUNC_7("failed to read telegraf schema file:%s", VAR_1);
    return -1;
  }

  int VAR_6 = FUNC_10(VAR_4, VAR_1);

  FUNC_4(VAR_4);
  FUNC_1(VAR_2);
  FUNC_8("parse telegraf schema file:%s, schema size:%d", VAR_1, VAR_6);

  return VAR_6;
}
