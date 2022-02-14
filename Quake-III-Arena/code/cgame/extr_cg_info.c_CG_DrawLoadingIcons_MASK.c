
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,int,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_1( void ) {
 int VAR_4;
 int VAR_5, VAR_6;

 for( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ ) {
  VAR_5 = 16 + VAR_4 * 78;
  VAR_6 = 324-40;
  FUNC_0( VAR_5, VAR_6, 64, 64, VAR_3[VAR_4] );
 }

 for( VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ ) {
  VAR_6 = 400-40;
  if( VAR_4 >= 13 ) {
   VAR_6 += 40;
  }
  VAR_5 = 16 + VAR_4 % 13 * 48;
  FUNC_0( VAR_5, VAR_6, 32, 32, VAR_1[VAR_4] );
 }
}
