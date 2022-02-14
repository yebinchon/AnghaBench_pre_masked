
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int ,int) ;

__attribute__((used)) static void
  FUNC_6( FT_Bytes VAR_1,
                              OTV_Validator VAR_2 )
  {
    FT_Bytes VAR_3 = VAR_1;
    FT_UInt VAR_4;


    FUNC_3( "MarkGlyphSets" );

    VAR_3 += 2;

    FUNC_2( 2 );
    VAR_4 = FUNC_1( VAR_3 );

    FUNC_4(( " (MarkGlyphSetCount = %d)\n", VAR_4 ));

    FUNC_2( VAR_4 * 4 );

    for ( ; VAR_4 > 0; VAR_4-- )
      FUNC_5( VAR_1 + FUNC_0( VAR_3 ), VAR_2, -1 );

    VAR_0;
  }
