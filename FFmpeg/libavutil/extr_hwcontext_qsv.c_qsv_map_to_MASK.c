
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ VASurfaceID ;
struct TYPE_16__ {int ** data; int height; int width; int hw_frames_ctx; } ;
struct TYPE_15__ {TYPE_3__* hwctx; } ;
struct TYPE_14__ {int nb_surfaces; TYPE_2__* surfaces; } ;
struct TYPE_12__ {scalar_t__ MemId; } ;
struct TYPE_13__ {TYPE_1__ Data; } ;
typedef int IDirect3DSurface9 ;
typedef TYPE_3__ AVQSVFramesContext ;
typedef TYPE_4__ AVHWFramesContext ;
typedef TYPE_5__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (int ,TYPE_5__*,TYPE_5__ const*,int *,int *) ;

__attribute__((used)) static int FUNC_3(AVHWFramesContext *VAR_2,
                      AVFrame *VAR_3, const AVFrame *VAR_4, int VAR_5)
{
    AVQSVFramesContext *VAR_6 = VAR_2->hwctx;
    int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_6->nb_surfaces; VAR_7++) {
    }
    if (VAR_7 >= VAR_6->nb_surfaces) {
        FUNC_1(VAR_2, VAR_0, "Trying to map from a surface which "
               "is not in the mapped frames context.\n");
        return FUNC_0(VAR_1);
    }

    VAR_8 = FUNC_2(VAR_3->hw_frames_ctx,
                                VAR_3, VAR_4, ((void*)0), ((void*)0));
    if (VAR_8)
        return VAR_8;

    VAR_3->width = VAR_4->width;
    VAR_3->height = VAR_4->height;
    VAR_3->data[3] = (uint8_t*)&VAR_6->surfaces[VAR_7];

    return 0;
}
