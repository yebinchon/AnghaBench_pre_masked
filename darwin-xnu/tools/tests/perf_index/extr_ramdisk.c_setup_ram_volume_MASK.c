
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char**,char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,char*,char const*) ;
 int FUNC_4 (char*) ;

int FUNC_5(const char* VAR_2, char* VAR_3) {
  char *VAR_4;
  int VAR_5;

  VAR_5 = FUNC_1(&VAR_4, "diskutil erasevolume HFS+ '%s' `hdiutil attach -nomount ram://1500000` >/dev/null", VAR_2);
  FUNC_0(VAR_5 > 0, "asprintf failed");

  VAR_5 = FUNC_4(VAR_4);
  FUNC_0(VAR_5 == 0, "diskutil command failed");

  FUNC_3(VAR_3, VAR_0, "/Volumes/%s", VAR_2);

  FUNC_2(VAR_4);

  return VAR_1;
}
