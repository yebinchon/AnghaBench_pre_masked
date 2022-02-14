
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * sizeBuff; int * buff; } ;
typedef TYPE_1__ black_TWorker ;
struct TYPE_12__ {int buffer; int rows; int width; } ;
struct TYPE_11__ {scalar_t__ n_points; int n_contours; scalar_t__* contours; TYPE_2__* points; } ;
struct TYPE_13__ {TYPE_5__ target; TYPE_4__ outline; } ;
struct TYPE_10__ {int flags; TYPE_5__* target; scalar_t__ source; } ;
struct TYPE_9__ {int x; int y; } ;
typedef int Long ;
typedef TYPE_2__ FT_Vector ;
typedef TYPE_3__ FT_Raster_Params ;
typedef int FT_Raster ;
typedef TYPE_4__ FT_Outline ;
typedef TYPE_5__ FT_Bitmap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 TYPE_6__ VAR_8 ;

__attribute__((used)) static int
  FUNC_2( FT_Raster VAR_9,
                   const FT_Raster_Params* VAR_10 )
  {
    const FT_Outline* VAR_11 = (const FT_Outline*)VAR_10->source;
    const FT_Bitmap* VAR_12 = VAR_10->target;

    black_TWorker VAR_13[1];

    Long VAR_14[VAR_0];


    if ( !VAR_9 )
      return FUNC_0( VAR_4 );

    if ( !VAR_11 )
      return FUNC_0( VAR_3 );


    if ( VAR_11->n_points == 0 || VAR_11->n_contours <= 0 )
      return VAR_6;

    if ( !VAR_11->contours || !VAR_11->points )
      return FUNC_0( VAR_3 );

    if ( VAR_11->n_points !=
           VAR_11->contours[VAR_11->n_contours - 1] + 1 )
      return FUNC_0( VAR_3 );


    if ( VAR_10->flags & VAR_2 )
      return FUNC_0( VAR_7 );

    if ( VAR_10->flags & VAR_1 )
      return FUNC_0( VAR_7 );

    if ( !VAR_12 )
      return FUNC_0( VAR_3 );


    if ( !VAR_12->width || !VAR_12->rows )
      return VAR_6;

    if ( !VAR_12->buffer )
      return FUNC_0( VAR_3 );


    {
      FT_Vector* VAR_15 = VAR_11->points;
      FT_Vector* VAR_16 = VAR_15 + VAR_11->n_points;


      for ( ; VAR_15 < VAR_16; VAR_15++ )
      {
        if ( VAR_15->x < -0x1000000L || VAR_15->x > 0x1000000L ||
             VAR_15->y < -0x1000000L || VAR_15->y > 0x1000000L )
         return FUNC_0( VAR_3 );
      }
    }

    VAR_8.outline = *VAR_11;
    VAR_8.target = *VAR_12;

    VAR_13->buff = VAR_14;
    VAR_13->sizeBuff = (&VAR_14)[1];

    return FUNC_1( VAR_5 );
  }
