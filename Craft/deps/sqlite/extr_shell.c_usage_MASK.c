
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 char* VAR_2 ;

__attribute__((used)) static void FUNC_2(int VAR_3){
  FUNC_1(VAR_1,
      "Usage: %s [OPTIONS] FILENAME [SQL]\n"
      "FILENAME is the name of an SQLite database. A new database is created\n"
      "if the file does not previously exist.\n", VAR_0);
  if( VAR_3 ){
    FUNC_1(VAR_1, "OPTIONS include:\n%s", VAR_2);
  }else{
    FUNC_1(VAR_1, "Use the -help option for additional information\n");
  }
  FUNC_0(1);
}
