
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char**,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int,int **,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_8(sqlite3 *VAR_4, char **VAR_5, const char *VAR_6){
  sqlite3_stmt *VAR_7;
  int VAR_8;


  VAR_8 = FUNC_5(VAR_4, VAR_6, -1, &VAR_7, 0);
  if( VAR_8!=VAR_2 ) return VAR_8;
  while( VAR_3==(VAR_8 = FUNC_6(VAR_7)) ){
    const char *VAR_9 = (const char*)FUNC_2(VAR_7,0);
    FUNC_0( FUNC_7(VAR_6,"SELECT",6)==0 );
    FUNC_0( FUNC_7(VAR_9,"SELECT",6)!=0 || VAR_0 );
    if( VAR_9 && VAR_9[0]!='S' ){
      VAR_8 = FUNC_8(VAR_4, VAR_5, VAR_9);
      if( VAR_8!=VAR_2 ) break;
    }
  }
  FUNC_0( VAR_8!=VAR_3 );
  if( VAR_8==VAR_1 ) VAR_8 = VAR_2;
  if( VAR_8 ){
    FUNC_1(VAR_5, VAR_4, FUNC_3(VAR_4));
  }
  (void)FUNC_4(VAR_7);
  return VAR_8;
}
