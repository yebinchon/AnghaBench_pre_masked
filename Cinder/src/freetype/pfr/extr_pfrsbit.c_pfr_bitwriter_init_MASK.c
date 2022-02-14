
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int buffer; int pitch; int width; int rows; } ;
struct TYPE_5__ {int line; int pitch; int width; int rows; int total; } ;
typedef TYPE_1__* PFR_BitWriter ;
typedef int FT_Int ;
typedef int FT_Bool ;
typedef TYPE_2__ FT_Bitmap ;



__attribute__((used)) static void
  FUNC_0( PFR_BitWriter VAR_0,
                      FT_Bitmap* VAR_1,
                      FT_Bool VAR_2 )
  {
    VAR_0->line = VAR_1->buffer;
    VAR_0->pitch = VAR_1->pitch;
    VAR_0->width = VAR_1->width;
    VAR_0->rows = VAR_1->rows;
    VAR_0->total = VAR_0->width * VAR_0->rows;

    if ( !VAR_2 )
    {
      VAR_0->line += VAR_0->pitch * (FT_Int)( VAR_1->rows - 1 );
      VAR_0->pitch = -VAR_0->pitch;
    }
  }
