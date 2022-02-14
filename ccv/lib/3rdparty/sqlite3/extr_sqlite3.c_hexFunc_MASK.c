
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int i64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int *,int) ;
 void** VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,int,int ) ;
 unsigned char const* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  int VAR_5, VAR_6;
  const unsigned char *VAR_7;
  char *VAR_8, *VAR_9;
  FUNC_1( VAR_3==1 );
  FUNC_0(VAR_3);
  VAR_7 = FUNC_4(VAR_4[0]);
  VAR_6 = FUNC_5(VAR_4[0]);
  FUNC_1( VAR_7==FUNC_4(VAR_4[0]) );
  VAR_9 = VAR_8 = FUNC_2(VAR_2, ((i64)VAR_6)*2 + 1);
  if( VAR_8 ){
    for(VAR_5=0; VAR_5<VAR_6; VAR_5++, VAR_7++){
      unsigned char VAR_10 = *VAR_7;
      *(VAR_9++) = VAR_0[(VAR_10>>4)&0xf];
      *(VAR_9++) = VAR_0[VAR_10&0xf];
    }
    *VAR_9 = 0;
    FUNC_3(VAR_2, VAR_8, VAR_6*2, VAR_1);
  }
}
