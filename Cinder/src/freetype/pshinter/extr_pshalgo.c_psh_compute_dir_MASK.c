
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_Pos ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
  FUNC_1( FT_Pos VAR_5,
                   FT_Pos VAR_6 )
  {
    FT_Pos VAR_7, VAR_8;
    int VAR_9 = VAR_2;


    VAR_7 = FUNC_0( VAR_5 );
    VAR_8 = FUNC_0( VAR_6 );

    if ( VAR_8 * 12 < VAR_7 )
    {

      VAR_9 = ( VAR_5 >= 0 ) ? VAR_3 : VAR_1;
    }
    else if ( VAR_7 * 12 < VAR_8 )
    {

      VAR_9 = ( VAR_6 >= 0 ) ? VAR_4 : VAR_0;
    }

    return VAR_9;
  }
