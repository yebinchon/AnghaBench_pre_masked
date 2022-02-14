
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mfield_t ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

void FUNC_3( mfield_t *VAR_0 ) {
 char VAR_1[64];
 int VAR_2, VAR_3;

 FUNC_2( VAR_1, 64 );


 VAR_2 = FUNC_1( VAR_1 );
 for ( VAR_3 = 0 ; VAR_3 < VAR_2 ; VAR_3++ ) {
  FUNC_0( VAR_0, VAR_1[VAR_3] );
 }
}
