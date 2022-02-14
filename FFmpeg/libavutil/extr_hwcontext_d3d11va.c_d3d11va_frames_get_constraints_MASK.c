
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {void* pix_fmt; int d3d_format; } ;
struct TYPE_10__ {int device; } ;
struct TYPE_9__ {TYPE_3__* hwctx; } ;
struct TYPE_8__ {void** valid_hw_formats; void** valid_sw_formats; } ;
typedef int HRESULT ;
typedef TYPE_1__ AVHWFramesConstraints ;
typedef TYPE_2__ AVHWDeviceContext ;
typedef TYPE_3__ AVD3D11VADeviceContext ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int,int) ;
 TYPE_4__* VAR_4 ;

__attribute__((used)) static int FUNC_5(AVHWDeviceContext *VAR_5,
                                          const void *VAR_6,
                                          AVHWFramesConstraints *VAR_7)
{
    AVD3D11VADeviceContext *VAR_8 = VAR_5->hwctx;
    int VAR_9 = 0;
    HRESULT VAR_10;
    int VAR_11;

    VAR_7->valid_sw_formats = FUNC_4(FUNC_1(VAR_4) + 1,
                                                    sizeof(*VAR_7->valid_sw_formats));
    if (!VAR_7->valid_sw_formats)
        return FUNC_0(VAR_3);

    for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_4); VAR_11++) {
        UINT VAR_12 = 0;
        VAR_10 = FUNC_2(VAR_8->device, VAR_4[VAR_11].d3d_format, &VAR_12);
        if (FUNC_3(VAR_10) && (VAR_12 & VAR_2))
            VAR_7->valid_sw_formats[VAR_9++] = VAR_4[VAR_11].pix_fmt;
    }
    VAR_7->valid_sw_formats[VAR_9] = VAR_1;

    VAR_7->valid_hw_formats = FUNC_4(2, sizeof(*VAR_7->valid_hw_formats));
    if (!VAR_7->valid_hw_formats)
        return FUNC_0(VAR_3);

    VAR_7->valid_hw_formats[0] = VAR_0;
    VAR_7->valid_hw_formats[1] = VAR_1;

    return 0;
}
