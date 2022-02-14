
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float* plane; } ;


 float FUNC_0 (float*,float*) ;
 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_1( float *VAR_5, int VAR_6 ) {
 float *VAR_7;
 float VAR_8;

 if ( VAR_6 == -1 ) {
  return VAR_3;
 }
 VAR_7 = VAR_4[ VAR_6 ].plane;

 VAR_8 = FUNC_0( VAR_5, VAR_7 ) - VAR_7[3];

 if ( VAR_8 > VAR_0 ) {
  return VAR_2;
 }

 if ( VAR_8 < -VAR_0 ) {
  return VAR_1;
 }

 return VAR_3;
}
