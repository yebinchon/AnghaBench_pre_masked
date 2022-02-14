
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonBuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int,char*,int) ;
 int FUNC_2 (int *,char*,int,int) ;
 scalar_t__ FUNC_3 (char*) ;
 char** VAR_2 ;

void FUNC_4(JsonBuf* VAR_3, int VAR_4) {
  if (VAR_4 == 0) {
    FUNC_1(VAR_3, "status", 6, "succ", 4);
  } else {
    FUNC_1(VAR_3, "status", 6, "error", 5);
    FUNC_0(VAR_3);
    FUNC_2(VAR_3, "code", 4, VAR_4);
    if (VAR_4 >= 0) {
      FUNC_0(VAR_3);
      if (VAR_4 == VAR_0) {
        FUNC_1(VAR_3, "desc", 4, "failed to create database", 23);
      } else if (VAR_4 == VAR_1) {
        FUNC_1(VAR_3, "desc", 4, "failed to create table", 22);
      } else
        FUNC_1(VAR_3, "desc", 4, VAR_2[VAR_4], (int)FUNC_3(VAR_2[VAR_4]));
    }
  }
}
