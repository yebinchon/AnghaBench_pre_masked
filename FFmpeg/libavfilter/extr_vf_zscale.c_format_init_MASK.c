
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int depth; int matrix_coefficients; int color_primaries; int transfer_characteristics; int pixel_range; int chroma_location; int color_family; int pixel_type; int subsample_h; int subsample_w; int height; int width; } ;
typedef TYPE_2__ zimg_image_format ;
struct TYPE_11__ {int chroma_location; int color_range; int color_trc; int color_primaries; int colorspace; int height; int width; } ;
struct TYPE_10__ {int flags; TYPE_1__* comp; int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(zimg_image_format *VAR_9, AVFrame *VAR_10, const AVPixFmtDescriptor *VAR_11,
                        int VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
    VAR_9->width = VAR_10->width;
    VAR_9->height = VAR_10->height;
    VAR_9->subsample_w = VAR_11->log2_chroma_w;
    VAR_9->subsample_h = VAR_11->log2_chroma_h;
    VAR_9->depth = VAR_11->comp[0].depth;
    VAR_9->pixel_type = (VAR_11->flags & VAR_0) ? VAR_6 : VAR_11->comp[0].depth > 8 ? VAR_7 : VAR_5;
    VAR_9->color_family = (VAR_11->flags & VAR_1) ? VAR_2 : VAR_3;
    VAR_9->matrix_coefficients = (VAR_11->flags & VAR_1) ? VAR_4 : VAR_12 == -1 ? FUNC_1(VAR_10->colorspace) : VAR_12;
    VAR_9->color_primaries = VAR_13 == -1 ? FUNC_2(VAR_10->color_primaries) : VAR_13;
    VAR_9->transfer_characteristics = VAR_14 == - 1 ? FUNC_4(VAR_10->color_trc) : VAR_14;
    VAR_9->pixel_range = (VAR_11->flags & VAR_1) ? VAR_8 : VAR_15 == -1 ? FUNC_3(VAR_10->color_range) : VAR_15;
    VAR_9->chroma_location = VAR_16 == -1 ? FUNC_0(VAR_10->chroma_location) : VAR_16;
}
