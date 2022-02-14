
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
struct TYPE_13__ {scalar_t__ pixel_depth; scalar_t__ rowbytes; int width; int channels; int bit_depth; int color_type; } ;
typedef TYPE_2__ png_row_info ;
struct TYPE_12__ {scalar_t__ pixel_depth; int transformations; scalar_t__ transformed_pixel_depth; scalar_t__ maximum_pixel_depth; scalar_t__ interlaced; int pass; int height; int * row_buf; scalar_t__ prev_row; int channels; int bit_depth; int color_type; int iwidth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int *,int,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int *,scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(png_structrp VAR_3)
{

   png_row_info VAR_4;

   VAR_4.width = VAR_3->iwidth;
   VAR_4.color_type = VAR_3->color_type;
   VAR_4.bit_depth = VAR_3->bit_depth;
   VAR_4.channels = VAR_3->channels;
   VAR_4.pixel_depth = VAR_3->pixel_depth;
   VAR_4.rowbytes = FUNC_0(VAR_4.pixel_depth, VAR_4.width);

   if (VAR_3->row_buf[0] > VAR_1)
   {
      if (VAR_3->row_buf[0] < VAR_0)
         FUNC_6(VAR_3, &VAR_4, VAR_3->row_buf + 1,
            VAR_3->prev_row + 1, VAR_3->row_buf[0]);
      else
         FUNC_4(VAR_3, "bad adaptive filter value");
   }






   FUNC_1(VAR_3->prev_row, VAR_3->row_buf, VAR_4.rowbytes + 1);







   if (VAR_3->transformed_pixel_depth == 0)
   {
      VAR_3->transformed_pixel_depth = VAR_4.pixel_depth;
      if (VAR_4.pixel_depth > VAR_3->maximum_pixel_depth)
         FUNC_4(VAR_3, "progressive row overflow");
   }

   else if (VAR_3->transformed_pixel_depth != VAR_4.pixel_depth)
      FUNC_4(VAR_3, "internal progressive row size calculation error");
   {
      FUNC_5(VAR_3, VAR_3->row_buf + 1);
      FUNC_7(VAR_3);
   }
}
