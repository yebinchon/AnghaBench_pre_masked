
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ FT_Pos ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
  FUNC_1( FT_Pos VAR_0,
                    FT_Pos VAR_1,
                    FT_Pos VAR_2,
                    FT_Pos VAR_3,
                    FT_Pos* VAR_4,
                    FT_Pos* VAR_5 )
  {





    if ( VAR_1 > *VAR_5 || VAR_2 > *VAR_5 )
      *VAR_5 += FUNC_0( VAR_0 - *VAR_5, VAR_1 - *VAR_5, VAR_2 - *VAR_5, VAR_3 - *VAR_5 );


    if ( VAR_1 < *VAR_4 || VAR_2 < *VAR_4 )
      *VAR_4 -= FUNC_0( *VAR_4 - VAR_0, *VAR_4 - VAR_1, *VAR_4 - VAR_2, *VAR_4 - VAR_3 );
  }
