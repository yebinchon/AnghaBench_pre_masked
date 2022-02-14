
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_19__ {int nb_objects; int nb_layers; TYPE_5__* layers; TYPE_1__* objects; } ;
struct TYPE_18__ {int nb_planes; TYPE_2__* planes; } ;
struct TYPE_17__ {int hw_frames_ctx; int height; int width; int * linesize; int ** data; } ;
struct TYPE_16__ {int nb_regions; int * length; void** address; } ;
struct TYPE_15__ {size_t object_index; int offset; int pitch; } ;
struct TYPE_14__ {int size; int fd; } ;
typedef TYPE_3__ DRMMapping ;
typedef int AVHWFramesContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVDRMLayerDescriptor ;
typedef TYPE_6__ AVDRMFrameDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int ,char*,int ,int ) ;
 TYPE_3__* FUNC_4 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,TYPE_4__*,TYPE_4__ const*,int *,TYPE_3__*) ;
 void* FUNC_6 (int *,int ,int,int ,int ,int ) ;
 int FUNC_7 (void*,int ) ;

__attribute__((used)) static int FUNC_8(AVHWFramesContext *VAR_11,
                         AVFrame *VAR_12, const AVFrame *VAR_13, int VAR_14)
{
    const AVDRMFrameDescriptor *VAR_15 = (AVDRMFrameDescriptor*)VAR_13->data[0];
    DRMMapping *VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21;
    void *VAR_22;

    VAR_16 = FUNC_4(sizeof(*VAR_16));
    if (!VAR_16)
        return FUNC_0(VAR_4);

    VAR_21 = 0;
    if (VAR_14 & VAR_1)
        VAR_21 |= VAR_7;
    if (VAR_14 & VAR_2)
        VAR_21 |= VAR_8;

    FUNC_1(VAR_15->nb_objects <= VAR_0);
    for (VAR_18 = 0; VAR_18 < VAR_15->nb_objects; VAR_18++) {
        VAR_22 = FUNC_6(((void*)0), VAR_15->objects[VAR_18].size, VAR_21, VAR_6,
                    VAR_15->objects[VAR_18].fd, 0);
        if (VAR_22 == VAR_5) {
            VAR_17 = FUNC_0(VAR_10);
            FUNC_3(VAR_11, VAR_3, "Failed to map DRM object %d to "
                   "memory: %d.\n", VAR_15->objects[VAR_18].fd, VAR_10);
            goto fail;
        }

        VAR_16->address[VAR_18] = VAR_22;
        VAR_16->length[VAR_18] = VAR_15->objects[VAR_18].size;
    }
    VAR_16->nb_regions = VAR_18;

    VAR_20 = 0;
    for (VAR_18 = 0; VAR_18 < VAR_15->nb_layers; VAR_18++) {
        const AVDRMLayerDescriptor *VAR_23 = &VAR_15->layers[VAR_18];
        for (VAR_19 = 0; VAR_19 < VAR_23->nb_planes; VAR_19++) {
            VAR_12->data[VAR_20] =
                (uint8_t*)VAR_16->address[VAR_23->planes[VAR_19].object_index] +
                                       VAR_23->planes[VAR_19].offset;
            VAR_12->linesize[VAR_20] = VAR_23->planes[VAR_19].pitch;
            ++VAR_20;
        }
    }
    FUNC_1(VAR_20 <= VAR_0);

    VAR_12->width = VAR_13->width;
    VAR_12->height = VAR_13->height;

    VAR_17 = FUNC_5(VAR_13->hw_frames_ctx, VAR_12, VAR_13,
                                &VAR_9, VAR_16);
    if (VAR_17 < 0)
        goto fail;

    return 0;

fail:
    for (VAR_18 = 0; VAR_18 < VAR_15->nb_objects; VAR_18++) {
        if (VAR_16->address[VAR_18])
            FUNC_7(VAR_16->address[VAR_18], VAR_16->length[VAR_18]);
    }
    FUNC_2(VAR_16);
    return VAR_17;
}
