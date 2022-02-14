
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int md_ntsc_t ;
typedef int md_ntsc_out_t ;
typedef int MD_NTSC_IN_T ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const*,int ,int ,int ,int ) ;
 int FUNC_2 (int,int const*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_5( md_ntsc_t const* VAR_2, MD_NTSC_IN_T const* VAR_3, unsigned char* VAR_4,
                   int VAR_5, int VAR_6)
{
  int const VAR_7 = VAR_5 / VAR_0 - 1;


  MD_NTSC_IN_T VAR_8 = VAR_3[0];

  FUNC_1( VAR_2, VAR_8,
        FUNC_0( VAR_3[*VAR_4++] ),
        FUNC_0( VAR_3[*VAR_4++] ),
        FUNC_0( VAR_3[*VAR_4++] ) );




  VAR_5 = FUNC_3(VAR_5) >> 2;
  int VAR_9 = ((VAR_5 << 5) * (VAR_6 >> 2)) + ((VAR_6 & 3) * 8);
  md_ntsc_out_t* __restrict__ VAR_10 = (md_ntsc_out_t*)(VAR_1 + VAR_9);

  int VAR_11;

  for ( VAR_11 = VAR_7; VAR_11; --VAR_11 )
  {

    FUNC_2( 0, VAR_2, FUNC_0( VAR_3[*VAR_4++] ) );
    FUNC_4( 0, *VAR_10++ );
    FUNC_4( 1, *VAR_10++ );

    FUNC_2( 1, VAR_2, FUNC_0( VAR_3[*VAR_4++] ) );
    FUNC_4( 2, *VAR_10++ );
    FUNC_4( 3, *VAR_10++ );

    VAR_10 += 12;

    FUNC_2( 2, VAR_2, FUNC_0( VAR_3[*VAR_4++] ) );
    FUNC_4( 4, *VAR_10++ );
    FUNC_4( 5, *VAR_10++ );

    FUNC_2( 3, VAR_2, FUNC_0( VAR_3[*VAR_4++] ) );
    FUNC_4( 6, *VAR_10++ );
    FUNC_4( 7, *VAR_10++ );

    VAR_10 += 12;
}


  FUNC_2( 0, VAR_2, FUNC_0( VAR_3[*VAR_4++] ) );
  FUNC_4( 0, *VAR_10++ );
  FUNC_4( 1, *VAR_10++ );

  FUNC_2( 1, VAR_2, VAR_8 );
  FUNC_4( 2, *VAR_10++ );
  FUNC_4( 3, *VAR_10++ );

  VAR_10 += 12;

  FUNC_2( 2, VAR_2, VAR_8 );
  FUNC_4( 4, *VAR_10++ );
  FUNC_4( 5, *VAR_10++ );

  FUNC_2( 3, VAR_2, VAR_8 );
  FUNC_4( 6, *VAR_10++ );
  FUNC_4( 7, *VAR_10++ );
}
