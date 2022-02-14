
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ VAStatus ;
typedef int VABufferID ;
struct TYPE_9__ {scalar_t__ nb_param_buffers; int * param_buffers; } ;
typedef TYPE_2__ VAAPIEncodePicture ;
struct TYPE_10__ {int va_context; TYPE_1__* hwctx; } ;
typedef TYPE_3__ VAAPIEncodeContext ;
struct TYPE_11__ {TYPE_3__* priv_data; } ;
struct TYPE_8__ {int display; } ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_4__*,int ,char*,int,scalar_t__,...) ;
 int * FUNC_2 (int *,int,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int,size_t,int,char*,int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_5,
                                          VAAPIEncodePicture *VAR_6,
                                          int VAR_7, char *VAR_8, size_t VAR_9)
{
    VAAPIEncodeContext *VAR_10 = VAR_5->priv_data;
    VAStatus VAR_11;
    VABufferID *VAR_12;
    VABufferID VAR_13;

    VAR_12 = FUNC_2(VAR_6->param_buffers, sizeof(*VAR_12), VAR_6->nb_param_buffers + 1);
    if (!VAR_12)
        return FUNC_0(VAR_3);
    VAR_6->param_buffers = VAR_12;

    VAR_11 = FUNC_3(VAR_10->hwctx->display, VAR_10->va_context,
                         VAR_7, VAR_9, 1, VAR_8, &VAR_13);
    if (VAR_11 != VAR_4) {
        FUNC_1(VAR_5, VAR_1, "Failed to create parameter buffer "
               "(type %d): %d (%s).\n", VAR_7, VAR_11, FUNC_4(VAR_11));
        return FUNC_0(VAR_2);
    }
    VAR_6->param_buffers[VAR_6->nb_param_buffers++] = VAR_13;

    FUNC_1(VAR_5, VAR_0, "Param buffer (%d) is %#x.\n",
           VAR_7, VAR_13);
    return 0;
}
