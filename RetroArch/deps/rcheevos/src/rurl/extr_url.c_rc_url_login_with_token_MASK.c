
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int urle_user_name ;
typedef int urle_login_token ;


 scalar_t__ FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (char*,size_t,char*,char*,char*) ;

int FUNC_2(char* VAR_0, size_t VAR_1, const char* VAR_2, const char* VAR_3) {
  char VAR_4[64];
  char VAR_5[64];
  int VAR_6;

  if (FUNC_0(VAR_4, sizeof(VAR_4), VAR_2) != 0) {
    return -1;
  }

  if (FUNC_0(VAR_5, sizeof(VAR_5), VAR_3) != 0) {
    return -1;
  }

  VAR_6 = FUNC_1(
    VAR_0,
    VAR_1,
    "http://retroachievements.org/dorequest.php?r=login&u=%s&t=%s",
    VAR_4,
    VAR_5
  );

  return (size_t)VAR_6 >= VAR_1 ? -1 : 0;
}
