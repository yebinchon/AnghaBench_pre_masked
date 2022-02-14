
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;
typedef int sqlite3_stmt ;


 void FUNC_0 (void*) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,char const*,int,void (*) (void*),unsigned char) ;
 int FUNC_3 (char const*,void (*) (void*),int ) ;

int FUNC_4(
  sqlite3_stmt *VAR_2,
  int VAR_3,
  const char *VAR_4,
  sqlite3_uint64 VAR_5,
  void (*VAR_6)(void*),
  unsigned char VAR_7
){
  FUNC_1( VAR_6!=FUNC_0 );
  if( VAR_5>0x7fffffff ){
    return FUNC_3(VAR_4, VAR_6, 0);
  }else{
    if( VAR_7==VAR_0 ) VAR_7 = VAR_1;
    return FUNC_2(VAR_2, VAR_3, VAR_4, (int)VAR_5, VAR_6, VAR_7);
  }
}
