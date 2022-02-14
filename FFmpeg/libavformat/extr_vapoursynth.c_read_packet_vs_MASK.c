
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int vserr ;
typedef int uint8_t ;
struct vsframe_ref_data {void* vss_state; int const* frame; TYPE_5__* vsapi; } ;
typedef int ptrdiff_t ;
struct TYPE_32__ {scalar_t__ numFrames; TYPE_4__* format; } ;
typedef TYPE_7__ VSVideoInfo ;
typedef int VSMap ;
typedef int VSFrameRef ;
struct TYPE_33__ {scalar_t__ current_frame; int* c_order; scalar_t__ is_cfr; TYPE_5__* vsapi; int * vss_state; int outnode; } ;
typedef TYPE_8__ VSContext ;
struct TYPE_34__ {TYPE_2__* codecpar; } ;
struct TYPE_31__ {int size; void* data; } ;
struct TYPE_30__ {scalar_t__ (* getFrameWidth ) (int const*,int ) ;int (* getFrameHeight ) (int const*,int ) ;int (* getStride ) (int const*,int) ;scalar_t__ (* getReadPtr ) (int const*,int) ;int * (* getFramePropsRO ) (int const*) ;int * (* getFrame ) (scalar_t__,int ,char*,int) ;TYPE_7__* (* getVideoInfo ) (int ) ;} ;
struct TYPE_29__ {int numPlanes; } ;
struct TYPE_28__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_27__ {scalar_t__ width; int height; int color_space; int format; } ;
struct TYPE_26__ {int size; int data; } ;
struct TYPE_25__ {TYPE_9__** streams; TYPE_8__* priv_data; } ;
struct TYPE_24__ {scalar_t__ width; int height; int colorspace; int color_primaries; int color_trc; int* linesize; TYPE_6__** buf; void** data; int format; TYPE_3__ sample_aspect_ratio; int color_range; } ;
struct TYPE_23__ {scalar_t__ pts; int flags; TYPE_1__* buf; int size; int data; } ;
struct TYPE_22__ {int log2_chroma_h; } ;
typedef TYPE_9__ AVStream ;
typedef TYPE_10__ AVPixFmtDescriptor ;
typedef TYPE_11__ AVPacket ;
typedef TYPE_12__ AVFrame ;
typedef TYPE_13__ AVFormatContext ;
typedef int AVBufferRef ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int *,int,int ,struct vsframe_ref_data*,int ) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 TYPE_12__* FUNC_6 () ;
 int FUNC_7 (TYPE_12__**) ;
 int FUNC_8 (struct vsframe_ref_data*) ;
 int FUNC_9 (TYPE_13__*,int ,char*,char*) ;
 struct vsframe_ref_data* FUNC_10 (int) ;
 TYPE_10__* FUNC_11 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (TYPE_13__*,int const*,char*,int) ;
 TYPE_7__* FUNC_13 (int ) ;
 int * FUNC_14 (scalar_t__,int ,char*,int) ;
 int * FUNC_15 (int const*) ;
 scalar_t__ FUNC_16 (int const*,int ) ;
 int FUNC_17 (int const*,int ) ;
 scalar_t__ FUNC_18 (int const*,int) ;
 int FUNC_19 (int const*,int) ;

__attribute__((used)) static int FUNC_20(AVFormatContext *VAR_9, AVPacket *VAR_10)
{
    VSContext *VAR_11 = VAR_9->priv_data;
    AVStream *VAR_12 = VAR_9->streams[0];
    AVFrame *VAR_13 = ((void*)0);
    char VAR_14[80];
    const VSFrameRef *VAR_15;
    const VSVideoInfo *VAR_16 = VAR_11->vsapi->getVideoInfo(VAR_11->outnode);
    const VSMap *VAR_17;
    const AVPixFmtDescriptor *VAR_18;
    AVBufferRef *VAR_19 = ((void*)0);
    struct vsframe_ref_data *VAR_20;
    int VAR_21 = 0;
    int VAR_22;

    if (VAR_11->current_frame >= VAR_16->numFrames)
        return VAR_1;

    VAR_20 = FUNC_10(sizeof(*VAR_20));
    if (!VAR_20) {
        VAR_21 = FUNC_0(VAR_6);
        goto end;
    }


    VAR_19 = FUNC_3(((void*)0), 0, VAR_8, VAR_20, VAR_3);
    if (!VAR_19) {
        VAR_21 = FUNC_0(VAR_6);
        FUNC_8(VAR_20);
        goto end;
    }

    VAR_15 = VAR_11->vsapi->getFrame(VAR_11->current_frame, VAR_11->outnode, VAR_14, sizeof(VAR_14));
    if (!VAR_15) {
        FUNC_9(VAR_9, VAR_4, "Error getting frame: %s\n", VAR_14);
        VAR_21 = VAR_2;
        goto end;
    }

    VAR_20->vsapi = VAR_11->vsapi;
    VAR_20->frame = VAR_15;

    VAR_20->vss_state = FUNC_4(VAR_11->vss_state);
    if (!VAR_20->vss_state) {
        VAR_21 = FUNC_0(VAR_6);
        goto end;
    }

    VAR_17 = VAR_11->vsapi->getFramePropsRO(VAR_15);

    VAR_13 = FUNC_6();
    if (!VAR_13) {
        VAR_21 = FUNC_0(VAR_6);
        goto end;
    }

    VAR_13->format = VAR_12->codecpar->format;
    VAR_13->width = VAR_12->codecpar->width;
    VAR_13->height = VAR_12->codecpar->height;
    VAR_13->colorspace = VAR_12->codecpar->color_space;


    VAR_13->colorspace = FUNC_12(VAR_9, VAR_17, "_Matrix", VAR_13->colorspace);
    VAR_13->color_primaries = FUNC_12(VAR_9, VAR_17, "_Primaries", VAR_13->color_primaries);
    VAR_13->color_trc = FUNC_12(VAR_9, VAR_17, "_Transfer", VAR_13->color_trc);

    if (FUNC_12(VAR_9, VAR_17, "_ColorRange", 1) == 0)
        VAR_13->color_range = VAR_0;

    VAR_13->sample_aspect_ratio.num = FUNC_12(VAR_9, VAR_17, "_SARNum", 0);
    VAR_13->sample_aspect_ratio.den = FUNC_12(VAR_9, VAR_17, "_SARDen", 1);

    FUNC_2(VAR_11->vsapi->getFrameWidth(VAR_15, 0) == VAR_13->width);
    FUNC_2(VAR_11->vsapi->getFrameHeight(VAR_15, 0) == VAR_13->height);

    VAR_18 = FUNC_11(VAR_13->format);

    for (VAR_22 = 0; VAR_22 < VAR_16->format->numPlanes; VAR_22++) {
        int VAR_23 = VAR_11->c_order[VAR_22];
        ptrdiff_t VAR_24 = VAR_13->height;

        VAR_13->data[VAR_22] = (void *)VAR_11->vsapi->getReadPtr(VAR_15, VAR_23);
        VAR_13->linesize[VAR_22] = VAR_11->vsapi->getStride(VAR_15, VAR_23);

        VAR_13->buf[VAR_22] = FUNC_4(VAR_19);
        if (!VAR_13->buf[VAR_22]) {
            VAR_21 = FUNC_0(VAR_6);
            goto end;
        }





        if (VAR_22 == 1 || VAR_22 == 2)
            VAR_24 = FUNC_1(VAR_24, VAR_18->log2_chroma_h);
        VAR_13->buf[VAR_22]->data = VAR_13->data[VAR_22];
        VAR_13->buf[VAR_22]->size = VAR_13->linesize[VAR_22] * VAR_24;
    }

    VAR_10->buf = FUNC_3((uint8_t*)VAR_13, sizeof(*VAR_13),
                                VAR_7, ((void*)0), 0);
    if (!VAR_10->buf) {
        VAR_21 = FUNC_0(VAR_6);
        goto end;
    }

    VAR_13 = ((void*)0);

    VAR_10->data = VAR_10->buf->data;
    VAR_10->size = VAR_10->buf->size;
    VAR_10->flags |= VAR_5;

    if (VAR_11->is_cfr)
        VAR_10->pts = VAR_11->current_frame;

    VAR_11->current_frame++;

end:
    FUNC_7(&VAR_13);
    FUNC_5(&VAR_19);
    return VAR_21;
}
