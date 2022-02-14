
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
struct TYPE_11__ {int nb_param_buffers; int nb_slices; int * slice_buffers; int * param_buffers; } ;
typedef TYPE_3__ VAAPIDecodePicture ;
struct TYPE_12__ {TYPE_2__* hwctx; } ;
typedef TYPE_4__ VAAPIDecodeContext ;
struct TYPE_13__ {TYPE_1__* internal; } ;
struct TYPE_10__ {int display; } ;
struct TYPE_9__ {TYPE_4__* hwaccel_priv_data; } ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_2,
                                            VAAPIDecodePicture *VAR_3)
{
    VAAPIDecodeContext *VAR_4 = VAR_2->internal->hwaccel_priv_data;
    VAStatus VAR_5;
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_3->nb_param_buffers; VAR_6++) {
        VAR_5 = FUNC_1(VAR_4->hwctx->display,
                              VAR_3->param_buffers[VAR_6]);
        if (VAR_5 != VAR_1) {
            FUNC_0(VAR_2, VAR_0, "Failed to destroy "
                   "parameter buffer %#x: %d (%s).\n",
                   VAR_3->param_buffers[VAR_6], VAR_5, FUNC_2(VAR_5));
        }
    }

    for (VAR_6 = 0; VAR_6 < 2 * VAR_3->nb_slices; VAR_6++) {
        VAR_5 = FUNC_1(VAR_4->hwctx->display,
                              VAR_3->slice_buffers[VAR_6]);
        if (VAR_5 != VAR_1) {
            FUNC_0(VAR_2, VAR_0, "Failed to destroy slice "
                   "slice buffer %#x: %d (%s).\n",
                   VAR_3->slice_buffers[VAR_6], VAR_5, FUNC_2(VAR_5));
        }
    }
}
