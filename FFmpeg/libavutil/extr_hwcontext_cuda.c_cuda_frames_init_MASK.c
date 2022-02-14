
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ sw_format; TYPE_1__* internal; int height; int width; int pool; } ;
struct TYPE_8__ {int shift_height; int shift_width; } ;
struct TYPE_7__ {int pool_internal; TYPE_2__* priv; } ;
typedef TYPE_2__ CUDAFramesContext ;
typedef TYPE_3__ AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int,TYPE_3__*,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_6 (scalar_t__,int *,int *) ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static int FUNC_7(AVHWFramesContext *VAR_6)
{
    CUDAFramesContext *VAR_7 = VAR_6->internal->priv;
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_5); VAR_8++) {
        if (VAR_6->sw_format == VAR_5[VAR_8])
            break;
    }
    if (VAR_8 == FUNC_1(VAR_5)) {
        FUNC_5(VAR_6, VAR_0, "Pixel format '%s' is not supported\n",
               FUNC_3(VAR_6->sw_format));
        return FUNC_0(VAR_3);
    }

    FUNC_6(VAR_6->sw_format, &VAR_7->shift_width, &VAR_7->shift_height);

    if (!VAR_6->pool) {
        int VAR_9 = FUNC_4(VAR_6->sw_format, VAR_6->width, VAR_6->height, VAR_1);
        if (VAR_9 < 0)
            return VAR_9;

        VAR_6->internal->pool_internal = FUNC_2(VAR_9, VAR_6, VAR_4, ((void*)0));
        if (!VAR_6->internal->pool_internal)
            return FUNC_0(VAR_2);
    }

    return 0;
}
