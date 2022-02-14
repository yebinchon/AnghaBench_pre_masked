
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;
typedef int msgbuf ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int,int *,char*,int) ;
 int FUNC_4 (int *,char const*,int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

int FUNC_6(const char *VAR_2, const char *VAR_3, int VAR_4) {
  regex_t VAR_5;
  char VAR_6[100];


  if (FUNC_2(&VAR_5, VAR_3, VAR_4) != 0) {
    FUNC_1(VAR_1, "Fail to compile regex");
    FUNC_0();
  }


  int VAR_7 = FUNC_4(&VAR_5, VAR_2, 0, ((void*)0), 0);
  if (!VAR_7) {
    FUNC_5(&VAR_5);
    return 1;
  } else if (VAR_7 == VAR_0) {
    FUNC_5(&VAR_5);
    return 0;
  } else {
    FUNC_3(VAR_7, &VAR_5, VAR_6, sizeof(VAR_6));
    FUNC_1(VAR_1, "Regex match failed: %s\n", VAR_6);
    FUNC_5(&VAR_5);
    FUNC_0();
  }

  return 0;
}
