
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i2; int facing; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int* VAR_2 ;

void FUNC_0( int VAR_3, int VAR_4, int VAR_5 ) {
 int VAR_6;

 VAR_6 = VAR_2[ VAR_3 ];
 if ( VAR_6 == VAR_0 ) {
  return;
 }
 VAR_1[ VAR_3 ][ VAR_6 ].i2 = VAR_4;
 VAR_1[ VAR_3 ][ VAR_6 ].facing = VAR_5;

 VAR_2[ VAR_3 ]++;
}
