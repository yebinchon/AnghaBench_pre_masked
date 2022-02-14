
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef scalar_t__ i64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (char const) ;
 int VAR_0 ;
 int FUNC_4 (int *,char*,int,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(sqlite3_context *VAR_1, int VAR_2, sqlite3_value **VAR_3){
  char *VAR_4;
  const char *VAR_5;
  int VAR_6, VAR_7;
  FUNC_0(VAR_2);
  VAR_5 = (char*)FUNC_6(VAR_3[0]);
  VAR_7 = FUNC_5(VAR_3[0]);

  FUNC_1( VAR_5==(char*)FUNC_6(VAR_3[0]) );
  if( VAR_5 ){
    VAR_4 = FUNC_2(VAR_1, ((i64)VAR_7)+1);
    if( VAR_4 ){
      for(VAR_6=0; VAR_6<VAR_7; VAR_6++){
        VAR_4[VAR_6] = (char)FUNC_3(VAR_5[VAR_6]);
      }
      FUNC_4(VAR_1, VAR_4, VAR_7, VAR_0);
    }
  }
}
