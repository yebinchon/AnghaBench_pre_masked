
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef TYPE_2__* png_row_infop ;
typedef scalar_t__ png_byte ;
struct TYPE_37__ {int color_type; scalar_t__ rowbytes; scalar_t__ bit_depth; scalar_t__ channels; int width; scalar_t__ pixel_depth; } ;
struct TYPE_36__ {int flags; int transformations; scalar_t__ num_trans; int rgb_to_gray_status; int mode; int color_type; scalar_t__ num_palette_max; scalar_t__ user_transform_depth; scalar_t__ user_transform_channels; int * row_buf; int (* read_user_transform_fn ) (TYPE_1__*,TYPE_2__*,int *) ;scalar_t__ filler; int shift; int quantize_index; int palette_lookup; int trans_color; int trans_alpha; int palette; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,int *,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,int *,int ,int ,scalar_t__) ;
 int FUNC_10 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_15 (TYPE_2__*,int *,int ,int) ;
 int FUNC_16 (TYPE_2__*,int *) ;
 int FUNC_17 (TYPE_2__*,int *) ;
 int FUNC_18 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_19 (TYPE_2__*,int *) ;
 int FUNC_20 (TYPE_2__*,int *,int ) ;
 int FUNC_21 (TYPE_2__*,int *) ;
 int FUNC_22 (TYPE_2__*,int *) ;
 int FUNC_23 (TYPE_2__*,int *,int *) ;
 int FUNC_24 (TYPE_1__*,char*) ;
 int FUNC_25 (TYPE_1__*,char*) ;
 int FUNC_26 (TYPE_1__*,TYPE_2__*,int *) ;

void
FUNC_27(png_structrp VAR_31, png_row_infop VAR_32)
{
   FUNC_1(1, "in png_do_read_transformations");

   if (VAR_31->row_buf == ((void*)0))
   {




      FUNC_24(VAR_31, "NULL row buffer");
   }







   if ((VAR_31->flags & VAR_13) != 0 &&
       (VAR_31->flags & VAR_14) == 0)
   {




      FUNC_24(VAR_31, "Uninitialized row");
   }
}
