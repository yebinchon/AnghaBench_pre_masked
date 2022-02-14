
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int color_range; int color_matrix; int color_transfer; int color_prim; int fmt; int height; int width; } ;
struct TYPE_9__ {int flags; int combed; int duration; int start; } ;
struct TYPE_11__ {TYPE_3__ f; TYPE_2__ s; TYPE_1__* plane; } ;
typedef TYPE_4__ hb_buffer_t ;
struct TYPE_12__ {int interlaced_frame; int top_field_first; int color_range; int colorspace; int color_trc; int color_primaries; int format; int height; int width; int reordered_opaque; int pts; int * linesize; int * data; } ;
struct TYPE_8__ {int stride; int data; } ;
typedef TYPE_5__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(AVFrame *VAR_1, hb_buffer_t * VAR_2)
{
    VAR_1->data[0] = VAR_2->plane[0].data;
    VAR_1->data[1] = VAR_2->plane[1].data;
    VAR_1->data[2] = VAR_2->plane[2].data;
    VAR_1->linesize[0] = VAR_2->plane[0].stride;
    VAR_1->linesize[1] = VAR_2->plane[1].stride;
    VAR_1->linesize[2] = VAR_2->plane[2].stride;

    VAR_1->pts = VAR_2->s.start;
    VAR_1->reordered_opaque = VAR_2->s.duration;
    VAR_1->width = VAR_2->f.width;
    VAR_1->height = VAR_2->f.height;
    VAR_1->format = VAR_2->f.fmt;
    VAR_1->interlaced_frame = !!VAR_2->s.combed;
    VAR_1->top_field_first = !!(VAR_2->s.flags & VAR_0);

    VAR_1->format = VAR_2->f.fmt;
    VAR_1->color_primaries = FUNC_1(VAR_2->f.color_prim);
    VAR_1->color_trc = FUNC_2(VAR_2->f.color_transfer);
    VAR_1->colorspace = FUNC_0(VAR_2->f.color_matrix);
    VAR_1->color_range = VAR_2->f.color_range;
}
