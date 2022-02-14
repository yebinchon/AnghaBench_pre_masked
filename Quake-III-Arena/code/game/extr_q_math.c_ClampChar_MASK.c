
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
signed char FUNC_0( int VAR_0 ) {
 if ( VAR_0 < -128 ) {
  return -128;
 }
 if ( VAR_0 > 127 ) {
  return 127;
 }
 return VAR_0;
}
