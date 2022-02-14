
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int*,int*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int,int,int ,int *) ;
 scalar_t__ VAR_1 ;

void FUNC_3 ( void ) {
 int VAR_2, VAR_3;

 if ( VAR_1 ) {
  FUNC_0( &VAR_2, &VAR_3 );
 } else {
  FUNC_1( &VAR_2, &VAR_3 );
 }

 if ( !VAR_2 && !VAR_3 ) {
  return;
 }

 FUNC_2( 0, VAR_0, VAR_2, VAR_3, 0, ((void*)0) );
}
