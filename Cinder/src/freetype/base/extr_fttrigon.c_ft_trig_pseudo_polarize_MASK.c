
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ FT_Vector ;
typedef int FT_Int ;
typedef int FT_Fixed ;
typedef int FT_Angle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void
  FUNC_1( FT_Vector* VAR_4 )
  {
    FT_Angle VAR_5;
    FT_Int VAR_6;
    FT_Fixed VAR_7, VAR_8, VAR_9, VAR_10;
    const FT_Angle *VAR_11;


    VAR_7 = VAR_4->x;
    VAR_8 = VAR_4->y;


    if ( VAR_8 > VAR_7 )
    {
      if ( VAR_8 > -VAR_7 )
      {
        VAR_5 = VAR_1;
        VAR_9 = VAR_8;
        VAR_8 = -VAR_7;
        VAR_7 = VAR_9;
      }
      else
      {
        VAR_5 = VAR_8 > 0 ? VAR_0 : -VAR_0;
        VAR_7 = -VAR_7;
        VAR_8 = -VAR_8;
      }
    }
    else
    {
      if ( VAR_8 < -VAR_7 )
      {
        VAR_5 = -VAR_1;
        VAR_9 = -VAR_8;
        VAR_8 = VAR_7;
        VAR_7 = VAR_9;
      }
      else
      {
        VAR_5 = 0;
      }
    }

    VAR_11 = VAR_3;


    for ( VAR_6 = 1, VAR_10 = 1; VAR_6 < VAR_2; VAR_10 <<= 1, VAR_6++ )
    {
      if ( VAR_8 > 0 )
      {
        VAR_9 = VAR_7 + ( ( VAR_8 + VAR_10 ) >> VAR_6 );
        VAR_8 = VAR_8 - ( ( VAR_7 + VAR_10 ) >> VAR_6 );
        VAR_7 = VAR_9;
        VAR_5 += *VAR_11++;
      }
      else
      {
        VAR_9 = VAR_7 - ( ( VAR_8 + VAR_10 ) >> VAR_6 );
        VAR_8 = VAR_8 + ( ( VAR_7 + VAR_10 ) >> VAR_6 );
        VAR_7 = VAR_9;
        VAR_5 -= *VAR_11++;
      }
    }



    if ( VAR_5 >= 0 )
      VAR_5 = FUNC_0( VAR_5, 16 );
    else
      VAR_5 = -FUNC_0( -VAR_5, 16 );

    VAR_4->x = VAR_7;
    VAR_4->y = VAR_5;
  }
