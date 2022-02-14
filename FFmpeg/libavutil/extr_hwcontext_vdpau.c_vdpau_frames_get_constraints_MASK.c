
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int* nb_pix_fmts; } ;
typedef TYPE_2__ VDPAUDeviceContext ;
struct TYPE_13__ {void* frames_sw_format; } ;
struct TYPE_12__ {TYPE_1__* internal; } ;
struct TYPE_11__ {void** valid_hw_formats; void** valid_sw_formats; } ;
struct TYPE_9__ {TYPE_2__* priv; } ;
typedef TYPE_3__ AVHWFramesConstraints ;
typedef TYPE_4__ AVHWDeviceContext ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 void* FUNC_2 (int,int) ;
 TYPE_5__* VAR_3 ;

__attribute__((used)) static int FUNC_3(AVHWDeviceContext *VAR_4,
                                        const void *VAR_5,
                                        AVHWFramesConstraints *VAR_6)
{
    VDPAUDeviceContext *VAR_7 = VAR_4->internal->priv;
    int VAR_8 = 0;
    int VAR_9;

    VAR_6->valid_sw_formats = FUNC_2(FUNC_1(VAR_3) + 1,
                                                    sizeof(*VAR_6->valid_sw_formats));
    if (!VAR_6->valid_sw_formats)
        return FUNC_0(VAR_2);

    for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_3); VAR_9++) {
        if (VAR_7->nb_pix_fmts[VAR_9] > 1)
            VAR_6->valid_sw_formats[VAR_8++] = VAR_3[VAR_9].frames_sw_format;
    }
    VAR_6->valid_sw_formats[VAR_8] = VAR_0;

    VAR_6->valid_hw_formats = FUNC_2(2, sizeof(*VAR_6->valid_hw_formats));
    if (!VAR_6->valid_hw_formats)
        return FUNC_0(VAR_2);

    VAR_6->valid_hw_formats[0] = VAR_1;
    VAR_6->valid_hw_formats[1] = VAR_0;

    return 0;
}
