
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int,void const*,int ,int ) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 () ;

int FUNC_6(const void *VAR_4){
  sqlite3_value *VAR_5;
  char const *VAR_6;
  int VAR_7;


  VAR_7 = FUNC_5();
  if( VAR_7 ) return VAR_7;

  VAR_5 = FUNC_1(0);
  FUNC_2(VAR_5, -1, VAR_4, VAR_2, VAR_1);
  VAR_6 = FUNC_3(VAR_5, VAR_3);
  if( VAR_6 ){
    VAR_7 = FUNC_4(VAR_6);
  }else{
    VAR_7 = VAR_0;
  }
  FUNC_0(VAR_5);
  return VAR_7 & 0xff;
}
