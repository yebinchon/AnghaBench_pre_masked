
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int entityState_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int,int) ;

int FUNC_3( int VAR_0, int VAR_1, entityState_t *VAR_2 ) {
 int VAR_3;

 VAR_3 = FUNC_2( VAR_0, VAR_1 );
 if ( VAR_3 == -1 ) {
  FUNC_1(VAR_2, 0, sizeof(entityState_t));
  return -1;
 }

 FUNC_0( VAR_3, VAR_2 );

 return VAR_1 + 1;
}
