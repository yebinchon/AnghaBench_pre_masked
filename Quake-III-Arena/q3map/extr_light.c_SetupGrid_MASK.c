
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_2__ {int* mins; int* maxs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int) ;

void FUNC_4( void ) {
 int VAR_6;
 vec3_t VAR_7;

 for ( VAR_6 = 0 ; VAR_6 < 3 ; VAR_6++ ) {
  VAR_3[VAR_6] = VAR_4[VAR_6] * FUNC_1( VAR_1[0].mins[VAR_6] / VAR_4[VAR_6] );
  VAR_7[VAR_6] = VAR_4[VAR_6] * FUNC_2( VAR_1[0].maxs[VAR_6] / VAR_4[VAR_6] );
  VAR_2[VAR_6] = (VAR_7[VAR_6] - VAR_3[VAR_6])/VAR_4[VAR_6] + 1;
 }

 VAR_5 = VAR_2[0] * VAR_2[1] * VAR_2[2];
 if (VAR_5 * 8 >= VAR_0)
  FUNC_0("MAX_MAP_LIGHTGRID");
 FUNC_3( "%5i gridPoints\n", VAR_5 );
}
