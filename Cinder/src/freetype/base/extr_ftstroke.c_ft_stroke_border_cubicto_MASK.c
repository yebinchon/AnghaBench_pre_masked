
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ start; int num_points; int movable; int * tags; int * points; } ;
typedef int FT_Vector ;
typedef TYPE_1__* FT_StrokeBorder ;
typedef int FT_Error ;
typedef int FT_Byte ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static FT_Error
  FUNC_2( FT_StrokeBorder VAR_3,
                            FT_Vector* VAR_4,
                            FT_Vector* VAR_5,
                            FT_Vector* VAR_6 )
  {
    FT_Error VAR_7;


    FUNC_0( VAR_3->start >= 0 );

    VAR_7 = FUNC_1( VAR_3, 3 );
    if ( !VAR_7 )
    {
      FT_Vector* VAR_8 = VAR_3->points + VAR_3->num_points;
      FT_Byte* VAR_9 = VAR_3->tags + VAR_3->num_points;


      VAR_8[0] = *VAR_4;
      VAR_8[1] = *VAR_5;
      VAR_8[2] = *VAR_6;

      VAR_9[0] = VAR_1;
      VAR_9[1] = VAR_1;
      VAR_9[2] = VAR_2;

      VAR_3->num_points += 3;
    }

    VAR_3->movable = VAR_0;

    return VAR_7;
  }
