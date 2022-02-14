
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GXV_Validator ;
typedef scalar_t__ FT_UShort ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_8 ;

__attribute__((used)) static void
  FUNC_4( FT_UShort VAR_9,
                              FT_UShort VAR_10,
                              GXV_Validator VAR_11 )
  {
    if ( VAR_10 != 0 && ( VAR_9 & VAR_5 ) )
      FUNC_3( VAR_10, VAR_11 );

    if ( VAR_9 & VAR_7 )
    {
      FT_UShort VAR_12;
      char VAR_13;


      VAR_12 = (FT_UShort)( VAR_9 & VAR_3 );
      if ( VAR_12 == 0 )
      {
        FUNC_1(( "  found zero offset to property\n" ));
        VAR_1;
      }

      VAR_13 = (char)( VAR_12 >> 8 );
      if ( VAR_13 & 0x08 )
      {



        VAR_13 = (char)( ( VAR_13 & 0x07 ) + 1 );


        if ( VAR_10 <= VAR_13 )
        {
          FUNC_1(( "  found non-positive glyph complement\n" ));
          VAR_0;
        }
      }
      else
      {

        FUNC_2( (FT_UShort)( VAR_10 + VAR_13 ), VAR_11 );
      }
    }
    else
    {
      if ( VAR_9 & VAR_3 )
        FUNC_1(( "glyph %d cannot have complementary bracketing\n",
                    VAR_10 ));
    }


    if ( VAR_9 & VAR_2 )
    {
      if ( FUNC_0( VAR_8 ) == 0x00010000UL )
      {
        FUNC_1(( "  found older version (1.0) in new version table\n" ));
        VAR_0;
      }
    }

    if ( VAR_9 & VAR_6 )
    {
      FUNC_1(( "  found non-zero bits in reserved bits\n" ));
      VAR_0;
    }

    if ( ( VAR_9 & VAR_4 ) > 11 )
    {

      if ( FUNC_0( VAR_8 ) == 0x00010000UL ||
           FUNC_0( VAR_8 ) == 0x00020000UL )
      {
        FUNC_1(( "  found too old version in directionality class\n" ));
        VAR_0;
      }
    }
  }
