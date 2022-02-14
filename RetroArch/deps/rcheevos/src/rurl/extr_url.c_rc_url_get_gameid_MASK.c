
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;

int FUNC_1(char* VAR_0, size_t VAR_1, unsigned char VAR_2[16]) {
  int VAR_3 = FUNC_0(
    VAR_0,
    VAR_1,
    "http://retroachievements.org/dorequest.php?r=gameid&m=%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
    VAR_2[ 0], VAR_2[ 1], VAR_2[ 2], VAR_2[ 3], VAR_2[ 4], VAR_2[ 5], VAR_2[ 6], VAR_2[ 7],
    VAR_2[ 8], VAR_2[ 9], VAR_2[10], VAR_2[11],VAR_2[12], VAR_2[13], VAR_2[14], VAR_2[15]
  );

  return (size_t)VAR_3 >= VAR_1 ? -1 : 0;
}
