
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Int ;
typedef int FT_Bytes ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void
  FUNC_8( FT_Bytes VAR_4,
                             OTV_Validator VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_4;
    FT_UInt VAR_7, VAR_8, VAR_9, VAR_10;

    FUNC_4( VAR_3 );
    FUNC_4( VAR_0 );
    FUNC_4( VAR_2 );


    FUNC_2( "MathVariants" );

    FUNC_1( 10 );

    VAR_6 += 2;
    FUNC_3( VAR_3 );
    FUNC_3( VAR_0 );
    VAR_7 = FUNC_0( VAR_6 );
    VAR_8 = FUNC_0( VAR_6 );

    FUNC_1( 2 * VAR_7 + 2 * VAR_8 );
    VAR_10 = 10 + 2 * VAR_7 + 2 * VAR_8;

    FUNC_5( VAR_3 );
    if ( VAR_3 )
      FUNC_6( VAR_4 + VAR_3, VAR_5, (FT_Int)VAR_7 );

    FUNC_5( VAR_0 );
    if ( VAR_0 )
      FUNC_6( VAR_4 + VAR_0, VAR_5, (FT_Int)VAR_8 );

    for ( VAR_9 = 0; VAR_9 < VAR_7; VAR_9++ )
    {
      FUNC_3( VAR_2 );
      FUNC_5( VAR_2 );
      FUNC_7( VAR_4 + VAR_2, VAR_5 );
    }

    for ( VAR_9 = 0; VAR_9 < VAR_8; VAR_9++ )
    {
      FUNC_3( VAR_2 );
      FUNC_5( VAR_2 );
      FUNC_7( VAR_4 + VAR_2, VAR_5 );
    }

    VAR_1;
  }
