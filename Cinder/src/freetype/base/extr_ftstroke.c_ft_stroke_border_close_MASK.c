
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start; unsigned int num_points; int movable; int * tags; int * points; } ;
typedef int FT_Vector ;
typedef unsigned int FT_UInt ;
typedef TYPE_1__* FT_StrokeBorder ;
typedef int FT_Byte ;
typedef scalar_t__ FT_Bool ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
  FUNC_1( FT_StrokeBorder VAR_3,
                          FT_Bool VAR_4 )
  {
    FT_UInt VAR_5 = (FT_UInt)VAR_3->start;
    FT_UInt VAR_6 = VAR_3->num_points;


    FUNC_0( VAR_3->start >= 0 );


    if ( VAR_6 <= VAR_5 + 1U )
      VAR_3->num_points = VAR_5;
    else
    {


      VAR_3->num_points = --VAR_6;
      VAR_3->points[VAR_5] = VAR_3->points[VAR_6];

      if ( VAR_4 )
      {

        {
          FT_Vector* VAR_7 = VAR_3->points + VAR_5 + 1;
          FT_Vector* VAR_8 = VAR_3->points + VAR_6 - 1;


          for ( ; VAR_7 < VAR_8; VAR_7++, VAR_8-- )
          {
            FT_Vector VAR_9;


            VAR_9 = *VAR_7;
            *VAR_7 = *VAR_8;
            *VAR_8 = VAR_9;
          }
        }


        {
          FT_Byte* VAR_10 = VAR_3->tags + VAR_5 + 1;
          FT_Byte* VAR_11 = VAR_3->tags + VAR_6 - 1;


          for ( ; VAR_10 < VAR_11; VAR_10++, VAR_11-- )
          {
            FT_Byte VAR_12;


            VAR_12 = *VAR_10;
            *VAR_10 = *VAR_11;
            *VAR_11 = VAR_12;
          }
        }
      }

      VAR_3->tags[VAR_5 ] |= VAR_1;
      VAR_3->tags[VAR_6 - 1] |= VAR_2;
    }

    VAR_3->start = -1;
    VAR_3->movable = VAR_0;
  }
