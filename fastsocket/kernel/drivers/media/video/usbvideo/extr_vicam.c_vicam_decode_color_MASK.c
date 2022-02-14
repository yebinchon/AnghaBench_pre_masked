
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static void FUNC_1(const u8 *VAR_1, u8 *VAR_2)
{




 int VAR_3, VAR_4, VAR_5;

 VAR_4 = 512;
 VAR_5 = 512;

 VAR_1 += VAR_0;

 for( VAR_3 = 0; VAR_3 < 240; VAR_3++, VAR_1 += 512 ) {
  const int VAR_6 = ( VAR_3 * 242 ) / 240;

  int VAR_7, VAR_8, VAR_9;
  int VAR_10, VAR_11, VAR_12;

  if ( VAR_6 == 242 - 1 ) {
   VAR_5 = -512;
  }

  VAR_8 = 1;
  VAR_9 = 1;

  for ( VAR_7 = 0; VAR_7 < 320; VAR_7++, VAR_2 += 3 ) {
   const int VAR_13 = ( VAR_7 * 512 ) / 320;
   const u8 * const VAR_14 = &VAR_1[VAR_13];

   if ( VAR_13 == 512 - 1 ) {
    VAR_9 = -1;
   }

   VAR_11 = ( VAR_14[VAR_8] - VAR_14[0] ) +
    ( VAR_14[VAR_9] - VAR_14[0] );
   VAR_11 /= 2;

   VAR_12 = ( VAR_14[VAR_4] - VAR_14[VAR_8 + VAR_4] ) +
    ( VAR_14[VAR_4] - VAR_14[VAR_9 + VAR_4] ) +
    ( VAR_14[VAR_5] - VAR_14[VAR_8 + VAR_5] ) +
    ( VAR_14[VAR_5] - VAR_14[VAR_9 + VAR_5] );
   VAR_12 /= 4;

   VAR_10 = 1160 * ( VAR_14[0] + ( VAR_11 / 2 ) - 16 );

   if ( VAR_3 & 1 ) {
    int VAR_15 = VAR_11;
    VAR_11 = VAR_12;
    VAR_12 = VAR_15;
   }

   if ( ( VAR_13 ^ VAR_3 ) & 1 ) {
    VAR_11 = -VAR_11;
    VAR_12 = -VAR_12;
   }

   VAR_2[0] = FUNC_0( ( ( VAR_10 + ( 2017 * VAR_12 ) ) +
     500 ) / 900, 0, 255 );
   VAR_2[1] = FUNC_0( ( ( VAR_10 - ( 392 * VAR_12 ) -
       ( 813 * VAR_11 ) ) +
       500 ) / 1000, 0, 255 );
   VAR_2[2] = FUNC_0( ( ( VAR_10 + ( 1594 * VAR_11 ) ) +
     500 ) / 1300, 0, 255 );

   VAR_8 = -1;
  }

  VAR_4 = -512;
 }
}
