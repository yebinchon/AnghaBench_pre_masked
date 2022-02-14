
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int extra1; scalar_t__ extra2; } ;
typedef TYPE_1__* OTV_Validator ;
typedef int FT_UInt ;
typedef scalar_t__ FT_Bytes ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_7( FT_Bytes VAR_3,
             OTV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_3;
    FT_UInt VAR_6, VAR_7, VAR_8;


    VAR_0;

    FUNC_1( 2 );

    VAR_6 = FUNC_0( VAR_5 );

    FUNC_5(( " (Count = %d)\n", VAR_6 ));

    FUNC_1( VAR_6 * VAR_4->extra1 * 2 );

    VAR_8 = VAR_6 * VAR_4->extra1 * 2 + 2;

    for ( ; VAR_6 > 0; VAR_6-- )
      for ( VAR_7 = VAR_4->extra1; VAR_7 > 0; VAR_7-- )
      {
        FUNC_3( VAR_2 );


        FUNC_2( VAR_2 );

        if ( VAR_4->extra2 )
        {
          FUNC_4( VAR_2 );
          if ( VAR_2 )
            FUNC_6( VAR_3 + VAR_2, VAR_4 );
        }
        else
          FUNC_6( VAR_3 + VAR_2, VAR_4 );
      }

    VAR_1;
  }
