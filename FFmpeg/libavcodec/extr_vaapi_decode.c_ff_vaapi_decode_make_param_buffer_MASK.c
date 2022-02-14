
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ VAStatus ;
typedef int VABufferID ;
struct TYPE_11__ {scalar_t__ nb_param_buffers; int * param_buffers; } ;
typedef TYPE_3__ VAAPIDecodePicture ;
struct TYPE_12__ {int va_context; TYPE_1__* hwctx; } ;
typedef TYPE_4__ VAAPIDecodeContext ;
struct TYPE_13__ {TYPE_2__* internal; } ;
struct TYPE_10__ {TYPE_4__* hwaccel_priv_data; } ;
struct TYPE_9__ {int display; } ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int ,char*,int,size_t,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int,size_t,int,void*,int *) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(AVCodecContext *VAR_5,
                                      VAAPIDecodePicture *VAR_6,
                                      int VAR_7,
                                      const void *VAR_8,
                                      size_t VAR_9)
{
    VAAPIDecodeContext *VAR_10 = VAR_5->internal->hwaccel_priv_data;
    VAStatus VAR_11;
    VABufferID VAR_12;

    FUNC_1(VAR_6->nb_param_buffers + 1 <= VAR_3);

    VAR_11 = FUNC_3(VAR_10->hwctx->display, VAR_10->va_context,
                         VAR_7, VAR_9, 1, (void*)VAR_8, &VAR_12);
    if (VAR_11 != VAR_4) {
        FUNC_2(VAR_5, VAR_1, "Failed to create parameter "
               "buffer (type %d): %d (%s).\n",
               VAR_7, VAR_11, FUNC_4(VAR_11));
        return FUNC_0(VAR_2);
    }

    VAR_6->param_buffers[VAR_6->nb_param_buffers++] = VAR_12;

    FUNC_2(VAR_5, VAR_0, "Param buffer (type %d, %zu bytes) "
           "is %#x.\n", VAR_7, VAR_9, VAR_12);
    return 0;
}
