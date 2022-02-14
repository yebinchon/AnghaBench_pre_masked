
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lookup_count; int extra1; } ;
typedef TYPE_1__* OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
  FUNC_7( FT_Bytes VAR_9,
                           OTV_Validator VAR_10 )
  {
    FT_Bytes VAR_11 = VAR_9;
    FT_UInt VAR_12;


    FUNC_2( "ContextPos" );

    FUNC_1( 2 );
    VAR_12 = FUNC_0( VAR_11 );

    FUNC_6(( " (format %d)\n", VAR_12 ));

    switch ( VAR_12 )
    {
    case 1:




      VAR_10->extra1 = VAR_10->lookup_count;
      FUNC_4( VAR_0, VAR_8, VAR_7 );
      FUNC_5( VAR_9, VAR_10 );
      break;

    case 2:




      FUNC_4( VAR_1, VAR_6, VAR_5 );
      FUNC_5( VAR_9, VAR_10 );
      break;

    case 3:
      FUNC_3( VAR_2 );
      FUNC_5( VAR_9, VAR_10 );
      break;

    default:
      VAR_3;
    }

    VAR_4;
  }
