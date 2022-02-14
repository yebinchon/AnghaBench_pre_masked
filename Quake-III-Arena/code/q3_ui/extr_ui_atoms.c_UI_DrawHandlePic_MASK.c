
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qhandle_t ;


 int FUNC_0 (float*,float*,float*,float*) ;
 int FUNC_1 (float,float,float,float,float,float,float,float,int ) ;

void FUNC_2( float VAR_0, float VAR_1, float VAR_2, float VAR_3, qhandle_t VAR_4 ) {
 float VAR_5;
 float VAR_6;
 float VAR_7;
 float VAR_8;

 if( VAR_2 < 0 ) {
  VAR_2 = -VAR_2;
  VAR_5 = 1;
  VAR_6 = 0;
 }
 else {
  VAR_5 = 0;
  VAR_6 = 1;
 }

 if( VAR_3 < 0 ) {
  VAR_3 = -VAR_3;
  VAR_7 = 1;
  VAR_8 = 0;
 }
 else {
  VAR_7 = 0;
  VAR_8 = 1;
 }

 FUNC_0( &VAR_0, &VAR_1, &VAR_2, &VAR_3 );
 FUNC_1( VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_7, VAR_6, VAR_8, VAR_4 );
}
