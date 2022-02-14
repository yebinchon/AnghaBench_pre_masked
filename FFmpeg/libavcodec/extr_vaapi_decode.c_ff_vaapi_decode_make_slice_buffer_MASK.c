
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t VAStatus ;
struct TYPE_11__ {int nb_slices; int slices_allocated; int * slice_buffers; } ;
typedef TYPE_3__ VAAPIDecodePicture ;
struct TYPE_12__ {TYPE_2__* hwctx; int va_context; } ;
typedef TYPE_4__ VAAPIDecodeContext ;
struct TYPE_13__ {TYPE_1__* internal; } ;
struct TYPE_10__ {int display; } ;
struct TYPE_9__ {TYPE_4__* hwaccel_priv_data; } ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int ,char*,size_t,size_t,...) ;
 int * FUNC_3 (int *,int,int) ;
 size_t FUNC_4 (int ,int ,int ,size_t,int,void*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (size_t) ;

int FUNC_7(AVCodecContext *VAR_7,
                                      VAAPIDecodePicture *VAR_8,
                                      const void *VAR_9,
                                      size_t VAR_10,
                                      const void *VAR_11,
                                      size_t VAR_12)
{
    VAAPIDecodeContext *VAR_13 = VAR_7->internal->hwaccel_priv_data;
    VAStatus VAR_14;
    int VAR_15;

    FUNC_1(VAR_8->nb_slices <= VAR_8->slices_allocated);
    if (VAR_8->nb_slices == VAR_8->slices_allocated) {
        if (VAR_8->slices_allocated > 0)
            VAR_8->slices_allocated *= 2;
        else
            VAR_8->slices_allocated = 64;

        VAR_8->slice_buffers =
            FUNC_3(VAR_8->slice_buffers,
                             VAR_8->slices_allocated,
                             2 * sizeof(*VAR_8->slice_buffers));
        if (!VAR_8->slice_buffers)
            return FUNC_0(VAR_3);
    }
    FUNC_1(VAR_8->nb_slices + 1 <= VAR_8->slices_allocated);

    VAR_15 = 2 * VAR_8->nb_slices;

    VAR_14 = FUNC_4(VAR_13->hwctx->display, VAR_13->va_context,
                         VAR_5,
                         VAR_10, 1, (void*)VAR_9,
                         &VAR_8->slice_buffers[VAR_15]);
    if (VAR_14 != VAR_6) {
        FUNC_2(VAR_7, VAR_1, "Failed to create slice "
               "parameter buffer: %d (%s).\n", VAR_14, FUNC_6(VAR_14));
        return FUNC_0(VAR_2);
    }

    FUNC_2(VAR_7, VAR_0, "Slice %d param buffer (%zu bytes) "
           "is %#x.\n", VAR_8->nb_slices, VAR_10,
           VAR_8->slice_buffers[VAR_15]);

    VAR_14 = FUNC_4(VAR_13->hwctx->display, VAR_13->va_context,
                         VAR_4,
                         VAR_12, 1, (void*)VAR_11,
                         &VAR_8->slice_buffers[VAR_15 + 1]);
    if (VAR_14 != VAR_6) {
        FUNC_2(VAR_7, VAR_1, "Failed to create slice "
               "data buffer (size %zu): %d (%s).\n",
               VAR_12, VAR_14, FUNC_6(VAR_14));
        FUNC_5(VAR_13->hwctx->display,
                        VAR_8->slice_buffers[VAR_15]);
        return FUNC_0(VAR_2);
    }

    FUNC_2(VAR_7, VAR_0, "Slice %d data buffer (%zu bytes) "
           "is %#x.\n", VAR_8->nb_slices, VAR_12,
           VAR_8->slice_buffers[VAR_15 + 1]);

    ++VAR_8->nb_slices;
    return 0;
}
