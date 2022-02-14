
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {int nErr; int db; int out; } ;
typedef int sqlite3_stmt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int,int **,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(
  struct callback_data *VAR_2,
  const char *VAR_3,
  const char *VAR_4
){
  sqlite3_stmt *VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;
  const char *VAR_9;
  VAR_6 = FUNC_5(VAR_2->db, VAR_3, -1, &VAR_5, 0);
  if( VAR_6!=VAR_0 || !VAR_5 ){
    FUNC_0(VAR_2->out, "/**** ERROR: (%d) %s *****/\n", VAR_6, FUNC_3(VAR_2->db));
    VAR_2->nErr++;
    return VAR_6;
  }
  VAR_6 = FUNC_6(VAR_5);
  VAR_7 = FUNC_1(VAR_5);
  while( VAR_6==VAR_1 ){
    if( VAR_4 ){
      FUNC_0(VAR_2->out, "%s", VAR_4);
      VAR_4 = 0;
    }
    VAR_9 = (const char*)FUNC_2(VAR_5, 0);
    FUNC_0(VAR_2->out, "%s", VAR_9);
    for(VAR_8=1; VAR_8<VAR_7; VAR_8++){
      FUNC_0(VAR_2->out, ",%s", FUNC_2(VAR_5, VAR_8));
    }
    if( VAR_9==0 ) VAR_9 = "";
    while( VAR_9[0] && (VAR_9[0]!='-' || VAR_9[1]!='-') ) VAR_9++;
    if( VAR_9[0] ){
      FUNC_0(VAR_2->out, "\n;\n");
    }else{
      FUNC_0(VAR_2->out, ";\n");
    }
    VAR_6 = FUNC_6(VAR_5);
  }
  VAR_6 = FUNC_4(VAR_5);
  if( VAR_6!=VAR_0 ){
    FUNC_0(VAR_2->out, "/**** ERROR: (%d) %s *****/\n", VAR_6, FUNC_3(VAR_2->db));
    VAR_2->nErr++;
  }
  return VAR_6;
}
