
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int,char*,char*,int,long long) ;
 int FUNC_4 (char*) ;

int FUNC_5(char* VAR_5, int VAR_6, int VAR_7, long long VAR_8) {
  long long VAR_9;
  int VAR_10;
  int VAR_11;
  char VAR_12[VAR_0];

  for(VAR_9=0; VAR_9<VAR_8; VAR_9++) {
    FUNC_3(VAR_12, VAR_0, "%s/file_create-%d-%lld", VAR_5, VAR_6, VAR_9);
    VAR_10 = FUNC_2(VAR_12, VAR_1 | VAR_2 | VAR_3, 0644);
    FUNC_0(VAR_10 >= 0, "open failed");

    FUNC_1(VAR_10);
  }

  for(VAR_9=0; VAR_9<VAR_8; VAR_9++) {
    FUNC_3(VAR_12, VAR_0, "%s/file_create-%d-%lld", VAR_5, VAR_6, VAR_9);
    VAR_11 = FUNC_4(VAR_12);
    FUNC_0(VAR_11 == 0, "unlink failed");
  }

  return VAR_4;
}
