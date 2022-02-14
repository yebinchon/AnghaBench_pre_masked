
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int md_ntsc_t ;
typedef int md_ntsc_out_t ;
struct TYPE_2__ {int pitch; int * data; } ;
typedef int MD_NTSC_IN_T ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const*,int ,int ,int ,int ) ;
 int FUNC_2 (int,int const*,int ) ;
 int FUNC_3 (int,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

void FUNC_4( md_ntsc_t const* VAR_2, MD_NTSC_IN_T const* VAR_3, unsigned char* VAR_4,
                   int VAR_5, int VAR_6)
{
  int const VAR_7 = VAR_5 / VAR_1 - 1;


  MD_NTSC_IN_T VAR_8 = VAR_3[0];

  FUNC_1( VAR_2, VAR_8,
        FUNC_0( VAR_3[*VAR_4++] ),
        FUNC_0( VAR_3[*VAR_4++] ),
        FUNC_0( VAR_3[*VAR_4++] ) );

  md_ntsc_out_t* restrict VAR_9 = (md_ntsc_out_t*)(&VAR_0.data[(VAR_6 * VAR_0.pitch)]);

  int VAR_10;

  for ( VAR_10 = VAR_7; VAR_10; --VAR_10 )
  {

    FUNC_2( 0, VAR_2, FUNC_0( VAR_3[*VAR_4++] ) );
    FUNC_3( 0, *VAR_9++ );
    FUNC_3( 1, *VAR_9++ );

    FUNC_2( 1, VAR_2, FUNC_0( VAR_3[*VAR_4++] ) );
    FUNC_3( 2, *VAR_9++ );
    FUNC_3( 3, *VAR_9++ );

    FUNC_2( 2, VAR_2, FUNC_0( VAR_3[*VAR_4++] ) );
    FUNC_3( 4, *VAR_9++ );
    FUNC_3( 5, *VAR_9++ );

    FUNC_2( 3, VAR_2, FUNC_0( VAR_3[*VAR_4++] ) );
    FUNC_3( 6, *VAR_9++ );
    FUNC_3( 7, *VAR_9++ );
  }


  FUNC_2( 0, VAR_2, FUNC_0( VAR_3[*VAR_4++] ) );
  FUNC_3( 0, *VAR_9++ );
  FUNC_3( 1, *VAR_9++ );

  FUNC_2( 1, VAR_2, VAR_8 );
  FUNC_3( 2, *VAR_9++ );
  FUNC_3( 3, *VAR_9++ );

  FUNC_2( 2, VAR_2, VAR_8 );
  FUNC_3( 4, *VAR_9++ );
  FUNC_3( 5, *VAR_9++ );

  FUNC_2( 3, VAR_2, VAR_8 );
  FUNC_3( 6, *VAR_9++ );
  FUNC_3( 7, *VAR_9++ );
}
