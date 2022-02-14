
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ start; int num_points; scalar_t__ movable; int * tags; TYPE_1__* points; } ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ FT_Vector ;
typedef TYPE_2__* FT_StrokeBorder ;
typedef int FT_Error ;
typedef int FT_Byte ;
typedef scalar_t__ FT_Bool ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static FT_Error
  FUNC_3( FT_StrokeBorder VAR_2,
                           FT_Vector* VAR_3,
                           FT_Bool VAR_4 )
  {
    FT_Error VAR_5 = VAR_0;


    FUNC_0( VAR_2->start >= 0 );

    if ( VAR_2->movable )
    {

      VAR_2->points[VAR_2->num_points - 1] = *VAR_3;
    }
    else
    {

      if ( VAR_2->num_points > 0 &&
           FUNC_1( VAR_2->points[VAR_2->num_points - 1].x - VAR_3->x ) &&
           FUNC_1( VAR_2->points[VAR_2->num_points - 1].y - VAR_3->y ) )
        return VAR_5;


      VAR_5 = FUNC_2( VAR_2, 1 );
      if ( !VAR_5 )
      {
        FT_Vector* VAR_6 = VAR_2->points + VAR_2->num_points;
        FT_Byte* VAR_7 = VAR_2->tags + VAR_2->num_points;


        VAR_6[0] = *VAR_3;
        VAR_7[0] = VAR_1;

        VAR_2->num_points += 1;
      }
    }
    VAR_2->movable = VAR_4;
    return VAR_5;
  }
