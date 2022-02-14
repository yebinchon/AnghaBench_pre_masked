
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int i64 ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 double FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(sqlite3_context *VAR_1, int VAR_2, sqlite3_value **VAR_3){
  FUNC_1( VAR_2==1 );
  FUNC_0(VAR_2);
  switch( FUNC_8(VAR_3[0]) ){
    case 129: {
      i64 VAR_4 = FUNC_7(VAR_3[0]);
      if( VAR_4<0 ){
        if( VAR_4==VAR_0 ){



          FUNC_3(VAR_1, "integer overflow", -1);
          return;
        }
        VAR_4 = -VAR_4;
      }
      FUNC_4(VAR_1, VAR_4);
      break;
    }
    case 128: {

      FUNC_5(VAR_1);
      break;
    }
    default: {





      double VAR_5 = FUNC_6(VAR_3[0]);
      if( VAR_5<0 ) VAR_5 = -VAR_5;
      FUNC_2(VAR_1, VAR_5);
      break;
    }
  }
}
