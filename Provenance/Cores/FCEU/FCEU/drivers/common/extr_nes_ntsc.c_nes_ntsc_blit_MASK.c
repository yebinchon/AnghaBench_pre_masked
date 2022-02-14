
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nes_ntsc_t ;
typedef int nes_ntsc_out_t ;
typedef int NES_NTSC_IN_T ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const*,int,int ,int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_4( nes_ntsc_t const* VAR_5, NES_NTSC_IN_T const* VAR_6, long VAR_7,
  int VAR_8, int VAR_9, int VAR_10, int VAR_11, void* VAR_12, long VAR_13 )
{
 int VAR_14 = (VAR_10 - 1) / VAR_3;

 for ( ; VAR_11; --VAR_11 )
 {
  NES_NTSC_IN_T const* VAR_15 = VAR_6;
  FUNC_1( VAR_5, VAR_8, VAR_1, VAR_1, FUNC_0( *VAR_15 ) );
  nes_ntsc_out_t* restrict VAR_16 = (nes_ntsc_out_t*) VAR_12;
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
   VAR_16 += VAR_4;
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
  VAR_12 = (char*) VAR_12 + VAR_13;

  VAR_8 = (VAR_8 + 1) % VAR_2;
  VAR_6 += VAR_7;
 }
}
