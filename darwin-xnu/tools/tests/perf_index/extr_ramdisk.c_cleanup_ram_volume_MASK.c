
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char**,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(char* VAR_1) {
  char *VAR_2;
  int VAR_3;

  VAR_3 = FUNC_1(&VAR_2, "umount -f '%s' >/dev/null", VAR_1);
  FUNC_0(VAR_3 > 0, "asprintf failed");

  VAR_3 = FUNC_3(VAR_2);
  FUNC_0(VAR_3 == 0, "diskutil command failed");

  FUNC_2(VAR_2);

  return VAR_0;
}
