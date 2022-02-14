
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
float FUNC_0( int VAR_0 ) {
 float VAR_1;


 VAR_0 -= 32768;


 VAR_1 = (float)VAR_0 / 32768.0;

 if ( VAR_1 < -1 ) {
  VAR_1 = -1;
 }
 if ( VAR_1 > 1 ) {
  VAR_1 = 1;
 }
 return VAR_1;
}
