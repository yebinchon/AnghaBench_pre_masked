
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* pix_fmt; } ;
struct TYPE_5__ {void** valid_hw_formats; void** valid_sw_formats; } ;
typedef TYPE_1__ AVHWFramesConstraints ;
typedef int AVHWDeviceContext ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int,int) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_3(AVHWDeviceContext *VAR_4,
                                      const void *VAR_5,
                                      AVHWFramesConstraints *VAR_6)
{
    int VAR_7;

    VAR_6->valid_sw_formats = FUNC_2(FUNC_1(VAR_3) + 1,
                                                    sizeof(*VAR_6->valid_sw_formats));
    if (!VAR_6->valid_sw_formats)
        return FUNC_0(VAR_2);

    for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_3); VAR_7++)
        VAR_6->valid_sw_formats[VAR_7] = VAR_3[VAR_7].pix_fmt;
    VAR_6->valid_sw_formats[FUNC_1(VAR_3)] = VAR_0;

    VAR_6->valid_hw_formats = FUNC_2(2, sizeof(*VAR_6->valid_hw_formats));
    if (!VAR_6->valid_hw_formats)
        return FUNC_0(VAR_2);

    VAR_6->valid_hw_formats[0] = VAR_1;
    VAR_6->valid_hw_formats[1] = VAR_0;

    return 0;
}
