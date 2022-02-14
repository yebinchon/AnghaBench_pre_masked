
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int urle_user_name ;
typedef int urle_login_token ;


 scalar_t__ FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (char*,size_t,char*,char*,char*,unsigned int,unsigned int,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;

int FUNC_2(char* VAR_0, size_t VAR_1, const char* VAR_2, const char* VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned char VAR_6[16]) {
  char VAR_7[64];
  char VAR_8[64];
  int VAR_9;

  if (FUNC_0(VAR_7, sizeof(VAR_7), VAR_2) != 0) {
    return -1;
  }

  if (FUNC_0(VAR_8, sizeof(VAR_8), VAR_3) != 0) {
    return -1;
  }

  VAR_9 = FUNC_1(
    VAR_0,
    VAR_1,
    "http://retroachievements.org/dorequest.php?r=submitlbentry&u=%s&t=%s&i=%u&s=%u&v=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
    VAR_7,
    VAR_8,
    VAR_4,
    VAR_5,
    VAR_6[ 0], VAR_6[ 1], VAR_6[ 2], VAR_6[ 3], VAR_6[ 4], VAR_6[ 5], VAR_6[ 6], VAR_6[ 7],
    VAR_6[ 8], VAR_6[ 9], VAR_6[10], VAR_6[11],VAR_6[12], VAR_6[13], VAR_6[14], VAR_6[15]
  );

  return (size_t)VAR_9 >= VAR_1 ? -1 : 0;
}
