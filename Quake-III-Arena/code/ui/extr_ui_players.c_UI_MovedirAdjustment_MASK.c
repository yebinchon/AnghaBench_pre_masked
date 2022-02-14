
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_3__ {int moveAngles; int viewAngles; } ;
typedef TYPE_1__ playerInfo_t ;


 int FUNC_0 (double*,double*,int *,int *) ;
 double FUNC_1 (double) ;
 int FUNC_2 (int ,int ,double*) ;

__attribute__((used)) static float FUNC_3( playerInfo_t *VAR_0 ) {
 vec3_t VAR_1;
 vec3_t VAR_2;

 FUNC_2( VAR_0->viewAngles, VAR_0->moveAngles, VAR_1 );
 FUNC_0( VAR_1, VAR_2, ((void*)0), ((void*)0) );
 if ( FUNC_1( VAR_2[0] ) < 0.01 ) {
  VAR_2[0] = 0.0;
 }
 if ( FUNC_1( VAR_2[1] ) < 0.01 ) {
  VAR_2[1] = 0.0;
 }

 if ( VAR_2[1] == 0 && VAR_2[0] > 0 ) {
  return 0;
 }
 if ( VAR_2[1] < 0 && VAR_2[0] > 0 ) {
  return 22;
 }
 if ( VAR_2[1] < 0 && VAR_2[0] == 0 ) {
  return 45;
 }
 if ( VAR_2[1] < 0 && VAR_2[0] < 0 ) {
  return -22;
 }
 if ( VAR_2[1] == 0 && VAR_2[0] < 0 ) {
  return 0;
 }
 if ( VAR_2[1] > 0 && VAR_2[0] < 0 ) {
  return 22;
 }
 if ( VAR_2[1] > 0 && VAR_2[0] == 0 ) {
  return -45;
 }

 return -22;
}
