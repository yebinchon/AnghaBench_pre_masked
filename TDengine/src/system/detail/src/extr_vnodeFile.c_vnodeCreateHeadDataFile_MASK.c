
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,int,char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int,char*) ;
 char* FUNC_3 (int,int) ;
 int FUNC_4 (char*,char*,char*,int,int,char*) ;
 int FUNC_5 (char*,char*,char*,int,int) ;

int FUNC_6(int VAR_1, int VAR_2, char *VAR_3, char *VAR_4, char *VAR_5) {
  char VAR_6[VAR_0];
  char VAR_7[VAR_0];
  char VAR_8[VAR_0];

  char *VAR_9 = FUNC_3(VAR_1, VAR_2);
  if (VAR_9 == ((void*)0)) {
    return -1;
  }

  FUNC_2(VAR_1, VAR_9);

  FUNC_5(VAR_3, VAR_4, VAR_5, VAR_1, VAR_2);
  FUNC_4(VAR_6, VAR_7, VAR_8, VAR_1, VAR_2, VAR_9);
  if (FUNC_1(VAR_6, VAR_3) != 0) return -1;
  if (FUNC_1(VAR_7, VAR_4) != 0) return -1;
  if (FUNC_1(VAR_8, VAR_5) != 0) return -1;

  FUNC_0(
      "vid:%d, fileId:%d, empty header file:%s dataFile:%s lastFile:%s on "
      "disk:%s is created ",
      VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_9);

  return 0;
}
