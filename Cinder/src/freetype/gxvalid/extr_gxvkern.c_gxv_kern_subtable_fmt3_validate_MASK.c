
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ subtable_length; TYPE_1__* face; } ;
struct TYPE_5__ {scalar_t__ num_glyphs; } ;
typedef TYPE_2__* GXV_Validator ;
typedef scalar_t__ FT_UShort ;
typedef scalar_t__ FT_ULong ;
typedef scalar_t__ FT_Bytes ;
typedef scalar_t__ FT_Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,TYPE_2__*) ;

__attribute__((used)) static void
  FUNC_7( FT_Bytes VAR_5,
                                   FT_Bytes VAR_6,
                                   GXV_Validator VAR_7 )
  {
    FT_Bytes VAR_8 = VAR_5 + VAR_4;
    FT_UShort VAR_9;
    FT_Byte VAR_10;
    FT_Byte VAR_11;
    FT_Byte VAR_12;
    FT_Byte VAR_13;


    FUNC_3( "kern subtable format 3" );

    FUNC_2( 2 + 1 + 1 + 1 + 1 );
    VAR_9 = FUNC_1( VAR_8 );
    VAR_10 = FUNC_0( VAR_8 );
    VAR_11 = FUNC_0( VAR_8 );
    VAR_12 = FUNC_0( VAR_8 );
    VAR_13 = FUNC_0( VAR_8 );

    if ( VAR_7->face->num_glyphs != VAR_9 )
    {
      FUNC_5(( "maxGID=%d, but glyphCount=%d\n",
                  VAR_7->face->num_glyphs, VAR_9 ));
      FUNC_4( VAR_1 );
    }

    if ( VAR_13 != 0 )
      FUNC_5(( "kern subtable fmt3 has nonzero value"
                  " (%d) in unused flag\n", VAR_13 ));



    FUNC_2( 2 * VAR_10 );
    VAR_8 += 2 * VAR_10;




    {
      FT_Byte VAR_14, VAR_15;


      FUNC_2( VAR_9 );
      FUNC_6( VAR_8, VAR_8 + VAR_9, &VAR_14, &VAR_15, VAR_7 );
      VAR_8 += VAR_7->subtable_length;

      if ( VAR_11 < VAR_15 )
        VAR_0;
    }




    {
      FT_Byte VAR_16, VAR_17;


      FUNC_2( VAR_9 );
      FUNC_6( VAR_8, VAR_8 + VAR_9, &VAR_16, &VAR_17, VAR_7 );
      VAR_8 += VAR_7->subtable_length;

      if ( VAR_12 < VAR_17 )
        VAR_0;
    }




    {
      FT_UShort VAR_18, VAR_19;


      for ( VAR_18 = 0; VAR_18 < VAR_11; VAR_18++ )
      {
        for ( VAR_19 = 0; VAR_19 < VAR_12; VAR_19++ )
        {
          FUNC_2( 1 );
          if ( VAR_10 < FUNC_0( VAR_8 ) )
            VAR_2;
        }
      }
    }

    VAR_7->subtable_length = (FT_ULong)( VAR_8 - VAR_5 );

    VAR_3;
  }
