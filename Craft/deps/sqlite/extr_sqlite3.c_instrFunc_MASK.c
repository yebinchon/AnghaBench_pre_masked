
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char const*,unsigned char const*,int) ;
 int FUNC_2 (int *,int) ;
 unsigned char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  const unsigned char *VAR_5;
  const unsigned char *VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9, VAR_10;
  int VAR_11 = 1;
  int VAR_12;

  FUNC_0(VAR_3);
  VAR_9 = FUNC_6(VAR_4[0]);
  VAR_10 = FUNC_6(VAR_4[1]);
  if( VAR_9==VAR_1 || VAR_10==VAR_1 ) return;
  VAR_7 = FUNC_4(VAR_4[0]);
  VAR_8 = FUNC_4(VAR_4[1]);
  if( VAR_9==VAR_0 && VAR_10==VAR_0 ){
    VAR_5 = FUNC_3(VAR_4[0]);
    VAR_6 = FUNC_3(VAR_4[1]);
    VAR_12 = 0;
  }else{
    VAR_5 = FUNC_5(VAR_4[0]);
    VAR_6 = FUNC_5(VAR_4[1]);
    VAR_12 = 1;
  }
  while( VAR_8<=VAR_7 && FUNC_1(VAR_5, VAR_6, VAR_8)!=0 ){
    VAR_11++;
    do{
      VAR_7--;
      VAR_5++;
    }while( VAR_12 && (VAR_5[0]&0xc0)==0x80 );
  }
  if( VAR_8>VAR_7 ) VAR_11 = 0;
  FUNC_2(VAR_2, VAR_11);
}
