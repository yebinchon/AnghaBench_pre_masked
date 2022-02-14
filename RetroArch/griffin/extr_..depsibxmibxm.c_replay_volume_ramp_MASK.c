
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay {int sample_rate; int* ramp_buf; } ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void FUNC_1( struct replay *VAR_0, int *VAR_1, int VAR_2 ) {
 int VAR_3, VAR_4, VAR_5, VAR_6 = 256 * 2048 / VAR_0->sample_rate;
 for( VAR_3 = 0, VAR_4 = 0; VAR_4 < 256; VAR_3 += 2, VAR_4 += VAR_6 ) {
  VAR_5 = 256 - VAR_4;
  VAR_1[ VAR_3 ] = ( VAR_1[ VAR_3 ] * VAR_4 + VAR_0->ramp_buf[ VAR_3 ] * VAR_5 ) >> 8;
  VAR_1[ VAR_3 + 1 ] = ( VAR_1[ VAR_3 + 1 ] * VAR_4 + VAR_0->ramp_buf[ VAR_3 + 1 ] * VAR_5 ) >> 8;
 }
 FUNC_0( VAR_0->ramp_buf, &VAR_1[ VAR_2 * 2 ], 128 * sizeof( int ) );
}
