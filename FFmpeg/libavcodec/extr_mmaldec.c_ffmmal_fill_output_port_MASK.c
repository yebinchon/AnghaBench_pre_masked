
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* priv_data; } ;
struct TYPE_11__ {TYPE_3__* decoder; TYPE_2__* pool_out; } ;
struct TYPE_10__ {int * output; } ;
struct TYPE_9__ {TYPE_1__* pool; } ;
struct TYPE_8__ {int queue; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_BUFFER_HEADER_T ;
typedef TYPE_4__ MMALDecodeContext ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2)
{
    MMALDecodeContext *VAR_3 = VAR_2->priv_data;
    MMAL_BUFFER_HEADER_T *VAR_4;
    MMAL_STATUS_T VAR_5;

    if (!VAR_3->pool_out)
        return VAR_0;

    while ((VAR_4 = FUNC_3(VAR_3->pool_out->pool->queue))) {
        if ((VAR_5 = FUNC_2(VAR_3->decoder->output[0], VAR_4))) {
            FUNC_1(VAR_4);
            FUNC_0(VAR_2, VAR_1, "MMAL error %d when sending output buffer.\n", (int)VAR_5);
            return VAR_0;
        }
    }

    return 0;
}
