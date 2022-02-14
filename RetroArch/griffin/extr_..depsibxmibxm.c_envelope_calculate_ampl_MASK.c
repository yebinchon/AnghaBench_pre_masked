
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct envelope {int* points_ampl; int num_points; int* points_tick; } ;



__attribute__((used)) static int FUNC_0( struct envelope *VAR_0, int VAR_1 ) {
 int VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6 = VAR_0->points_ampl[ VAR_0->num_points - 1 ];
 if( VAR_1 < VAR_0->points_tick[ VAR_0->num_points - 1 ] ) {
  VAR_3 = 0;
  for( VAR_2 = 1; VAR_2 < VAR_0->num_points; VAR_2++ ) {
   if( VAR_0->points_tick[ VAR_2 ] <= VAR_1 ) {
    VAR_3 = VAR_2;
   }
  }
  VAR_4 = VAR_0->points_tick[ VAR_3 + 1 ] - VAR_0->points_tick[ VAR_3 ];
  VAR_5 = VAR_0->points_ampl[ VAR_3 + 1 ] - VAR_0->points_ampl[ VAR_3 ];
  VAR_6 = VAR_0->points_ampl[ VAR_3 ];
  VAR_6 += ( ( VAR_5 << 24 ) / VAR_4 ) * ( VAR_1 - VAR_0->points_tick[ VAR_3 ] ) >> 24;
 }
 return VAR_6;
}
