
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
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void
  FUNC_4( FT_Bytes VAR_3,
                           OTV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_3;
    FT_UInt VAR_6;


    VAR_1;

    FUNC_1( 4 );

    VAR_6 = FUNC_0( VAR_5 );

    FUNC_2(( " (format = %d)\n", VAR_6 ));

    switch ( VAR_6 )
    {
    case 1:

      break;

    case 2:

      break;

    case 3:
      VAR_5 += 2;

      FUNC_1( 2 );


      FUNC_3( VAR_3 + FUNC_0( VAR_5 ), VAR_4 );
      break;

    default:
      VAR_0;
    }

    VAR_2;
  }
