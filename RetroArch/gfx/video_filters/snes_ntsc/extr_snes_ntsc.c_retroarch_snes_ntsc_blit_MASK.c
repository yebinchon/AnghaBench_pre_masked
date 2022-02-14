
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int snes_ntsc_t ;
typedef int snes_ntsc_out_t ;
typedef int SNES_NTSC_IN_T ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const*,int,int ,int ,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4( snes_ntsc_t const* VAR_4, SNES_NTSC_IN_T const* VAR_5, long VAR_6,
  int VAR_7, int VAR_8, int VAR_9, void* VAR_10, long VAR_11, int VAR_12, int VAR_13 )
{
 int VAR_14 = (VAR_8 - 1) / VAR_3;
 for ( ; VAR_9; --VAR_9 )
 {
  SNES_NTSC_IN_T const* VAR_15 = VAR_5;
  FUNC_1( VAR_4, VAR_7,
    VAR_1, VAR_1, FUNC_0( *VAR_15 ) );
  snes_ntsc_out_t* VAR_16 = (snes_ntsc_out_t*) VAR_10;
  int VAR_17;
  ++VAR_15;

  for ( VAR_17 = VAR_14; VAR_17; --VAR_17 )
  {

   FUNC_2( 0, FUNC_0( VAR_15 [0] ) );
   FUNC_3( 0, VAR_16 [0], VAR_0 );
   FUNC_3( 1, VAR_16 [1], VAR_0 );

   FUNC_2( 1, FUNC_0( VAR_15 [1] ) );
   FUNC_3( 2, VAR_16 [2], VAR_0 );
   FUNC_3( 3, VAR_16 [3], VAR_0 );

   FUNC_2( 2, FUNC_0( VAR_15 [2] ) );
   FUNC_3( 4, VAR_16 [4], VAR_0 );
   FUNC_3( 5, VAR_16 [5], VAR_0 );
   FUNC_3( 6, VAR_16 [6], VAR_0 );

   VAR_15 += 3;
   VAR_16 += 7;
  }


  FUNC_2( 0, VAR_1 );
  FUNC_3( 0, VAR_16 [0], VAR_0 );
  FUNC_3( 1, VAR_16 [1], VAR_0 );

  FUNC_2( 1, VAR_1 );
  FUNC_3( 2, VAR_16 [2], VAR_0 );
  FUNC_3( 3, VAR_16 [3], VAR_0 );

  FUNC_2( 2, VAR_1 );
  FUNC_3( 4, VAR_16 [4], VAR_0 );
  FUNC_3( 5, VAR_16 [5], VAR_0 );
  FUNC_3( 6, VAR_16 [6], VAR_0 );

  VAR_7 = (VAR_7 + 1) % VAR_2;
  VAR_5 += VAR_6;
  VAR_10 = (char*) VAR_10 + VAR_11;
 }
}
