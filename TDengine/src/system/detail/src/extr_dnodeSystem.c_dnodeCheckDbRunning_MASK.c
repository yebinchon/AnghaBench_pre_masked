
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,char*,char const*) ;

void FUNC_5(const char* VAR_8) {
  char VAR_9[256] = {0};
  FUNC_4(VAR_9, "%s/.running", VAR_8);
  int VAR_10 = FUNC_3(VAR_9, VAR_4 | VAR_2 | VAR_3, VAR_7 | VAR_5 | VAR_6);
  int VAR_11 = FUNC_2(VAR_10, VAR_0 | VAR_1);
  if (VAR_11 != 0) {
    FUNC_0("failed to lock file:%s ret:%d, database may be running, quit", VAR_9, VAR_11);
    FUNC_1(0);
  }
}
