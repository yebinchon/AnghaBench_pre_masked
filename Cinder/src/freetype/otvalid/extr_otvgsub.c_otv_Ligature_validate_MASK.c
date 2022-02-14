
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ glyph_count; } ;
typedef TYPE_1__* OTV_Validator ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Bytes ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
  FUNC_3( FT_Bytes VAR_3,
                         OTV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_3;
    FT_UInt VAR_6, VAR_7;


    VAR_1;

    FUNC_1( 4 );
    VAR_6 = FUNC_0( VAR_5 );
    if ( VAR_6 >= VAR_4->glyph_count )
      VAR_0;

    VAR_7 = FUNC_0( VAR_5 );

    FUNC_2(( " (CompCount = %d)\n", VAR_7 ));

    if ( VAR_7 == 0 )
      VAR_0;

    VAR_7--;

    FUNC_1( VAR_7 * 2 );



    VAR_2;
  }
