
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int urle_user_name ;
typedef int urle_login_token ;


 scalar_t__ FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (char*,size_t,char*,char*,char*,unsigned int,int) ;

int FUNC_2(char* VAR_0, size_t VAR_1, const char* VAR_2, const char* VAR_3, unsigned VAR_4, int VAR_5) {
  char VAR_6[64];
  char VAR_7[64];
  int VAR_8;

  if (FUNC_0(VAR_6, sizeof(VAR_6), VAR_2) != 0) {
    return -1;
  }

  if (FUNC_0(VAR_7, sizeof(VAR_7), VAR_3) != 0) {
    return -1;
  }

  VAR_8 = FUNC_1(
    VAR_0,
    VAR_1,
    "http://retroachievements.org/dorequest.php?r=awardachievement&u=%s&t=%s&a=%u&h=%d",
    VAR_6,
    VAR_7,
    VAR_4,
    VAR_5 ? 1 : 0
  );

  return (size_t)VAR_8 >= VAR_1 ? -1 : 0;
}
