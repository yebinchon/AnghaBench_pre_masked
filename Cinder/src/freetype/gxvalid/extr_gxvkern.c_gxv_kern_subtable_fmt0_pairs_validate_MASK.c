
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GXV_Validator ;
typedef scalar_t__ FT_UShort ;
typedef int FT_Short ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static void
  FUNC_6( FT_Bytes VAR_2,
                                         FT_Bytes VAR_3,
                                         FT_UShort VAR_4,
                                         GXV_Validator VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_2;
    FT_UShort VAR_7;

    FT_UShort VAR_8 = 0;
    FT_UShort VAR_9 = 0;

    FUNC_2( VAR_3 );


    FUNC_3( "kern format 0 pairs" );

    for ( VAR_7 = 0; VAR_7 < VAR_4; VAR_7++ )
    {
      FT_UShort VAR_10;
      FT_UShort VAR_11;






      VAR_10 = FUNC_1( VAR_6 );
      FUNC_5( VAR_10, VAR_5 );


      VAR_11 = FUNC_1( VAR_6 );
      FUNC_5( VAR_11, VAR_5 );


      FUNC_4(( "left gid = %u, right gid = %u\n", VAR_10, VAR_11 ));
      if ( VAR_10 == VAR_8 )
      {
        if ( VAR_9 < VAR_11 )
          VAR_9 = VAR_11;
        else
          VAR_0;
      }
      else if ( VAR_8 < VAR_10 )
      {
        VAR_8 = VAR_10;
        VAR_9 = VAR_11;
      }
      else
        VAR_0;





      VAR_6 += 2;

    }

    VAR_1;
  }
