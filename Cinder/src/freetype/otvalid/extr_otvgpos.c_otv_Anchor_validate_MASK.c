
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void
  FUNC_8( FT_Bytes VAR_4,
                       OTV_Validator VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_4;
    FT_UInt VAR_7;


    FUNC_2( "Anchor");

    FUNC_1( 6 );
    VAR_7 = FUNC_0( VAR_6 );

    FUNC_6(( " (format %d)\n", VAR_7 ));

    VAR_6 += 4;

    switch ( VAR_7 )
    {
    case 1:
      break;

    case 2:
      FUNC_1( 2 );
      break;

    case 3:
      {
        FT_UInt VAR_8;

        FUNC_4( VAR_2 );
        FUNC_4( VAR_3 );


        FUNC_1( 4 );
        FUNC_3( VAR_2 );
        FUNC_3( VAR_3 );

        VAR_8 = 6 + 4;

        FUNC_5( VAR_2 );
        if ( VAR_2 )
          FUNC_7( VAR_4 + VAR_2, VAR_5 );

        FUNC_5( VAR_3 );
        if ( VAR_3 )
          FUNC_7( VAR_4 + VAR_3, VAR_5 );
      }
      break;

    default:
      VAR_0;
    }

    VAR_1;
  }
