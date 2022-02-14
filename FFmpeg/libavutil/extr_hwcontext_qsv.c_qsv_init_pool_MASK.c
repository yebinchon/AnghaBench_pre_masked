
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mfxFrameSurface1 ;
struct TYPE_13__ {int initial_pool_size; TYPE_1__* internal; TYPE_3__* hwctx; } ;
struct TYPE_12__ {int frame_type; int nb_surfaces; int * surfaces; } ;
struct TYPE_11__ {int * surfaces_internal; } ;
struct TYPE_10__ {int pool_internal; TYPE_2__* priv; } ;
typedef TYPE_2__ QSVFramesContext ;
typedef TYPE_3__ AVQSVFramesContext ;
typedef TYPE_4__ AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,TYPE_4__*,int ,int *) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(AVHWFramesContext *VAR_5, uint32_t VAR_6)
{
    QSVFramesContext *VAR_7 = VAR_5->internal->priv;
    AVQSVFramesContext *VAR_8 = VAR_5->hwctx;

    int VAR_9, VAR_10 = 0;

    if (VAR_5->initial_pool_size <= 0) {
        FUNC_2(VAR_5, VAR_0, "QSV requires a fixed frame pool size\n");
        return FUNC_0(VAR_1);
    }

    VAR_7->surfaces_internal = FUNC_3(VAR_5->initial_pool_size,
                                            sizeof(*VAR_7->surfaces_internal));
    if (!VAR_7->surfaces_internal)
        return FUNC_0(VAR_2);

    for (VAR_9 = 0; VAR_9 < VAR_5->initial_pool_size; VAR_9++) {
        VAR_10 = FUNC_5(VAR_5, &VAR_7->surfaces_internal[VAR_9]);
        if (VAR_10 < 0)
            return VAR_10;
    }

    if (!(VAR_8->frame_type & VAR_3)) {
        VAR_10 = FUNC_4(VAR_5);
        if (VAR_10 < 0)
            return VAR_10;
    }

    VAR_5->internal->pool_internal = FUNC_1(sizeof(mfxFrameSurface1),
                                                        VAR_5, VAR_4, ((void*)0));
    if (!VAR_5->internal->pool_internal)
        return FUNC_0(VAR_2);

    VAR_8->surfaces = VAR_7->surfaces_internal;
    VAR_8->nb_surfaces = VAR_5->initial_pool_size;

    return 0;
}
