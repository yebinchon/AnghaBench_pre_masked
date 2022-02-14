
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int flags; } ;
struct TYPE_18__ {TYPE_2__* context; TYPE_1__ buf; } ;
typedef TYPE_3__ V4L2Buffer ;
struct TYPE_19__ {int key_frame; int decode_error_flags; int sample_aspect_ratio; int width; int height; int pkt_dts; int pts; int color_trc; int color_range; int colorspace; int color_primaries; } ;
struct TYPE_17__ {int name; int sample_aspect_ratio; int width; int height; } ;
typedef TYPE_4__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ,char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

int FUNC_9(AVFrame *VAR_5, V4L2Buffer *VAR_6)
{
    int VAR_7;

    FUNC_0(VAR_5);


    VAR_7 = FUNC_3(VAR_5, VAR_6);
    if (VAR_7)
        return VAR_7;


    VAR_5->key_frame = !!(VAR_6->buf.flags & VAR_4);
    VAR_5->color_primaries = FUNC_4(VAR_6);
    VAR_5->colorspace = FUNC_6(VAR_6);
    VAR_5->color_range = FUNC_5(VAR_6);
    VAR_5->color_trc = FUNC_7(VAR_6);
    VAR_5->pts = FUNC_8(VAR_6);
    VAR_5->pkt_dts = VAR_1;


    VAR_5->height = VAR_6->context->height;
    VAR_5->width = VAR_6->context->width;
    VAR_5->sample_aspect_ratio = VAR_6->context->sample_aspect_ratio;


    if (VAR_6->buf.flags & VAR_3) {
        FUNC_1(FUNC_2(VAR_6), VAR_0, "%s: driver decode error\n", VAR_6->context->name);
        VAR_5->decode_error_flags |= VAR_2;
    }

    return 0;
}
