
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int VTContext ;
struct TYPE_7__ {TYPE_2__* priv_data; TYPE_1__* internal; } ;
struct TYPE_6__ {int is_avc; } ;
struct TYPE_5__ {int * hwaccel_priv_data; } ;
typedef TYPE_2__ H264Context ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int *,int const*,int ) ;

int FUNC_1(AVCodecContext *VAR_0,
                                     const uint8_t *VAR_1,
                                     uint32_t VAR_2)
{
    VTContext *VAR_3 = VAR_0->internal->hwaccel_priv_data;
    H264Context *VAR_4 = VAR_0->priv_data;

    if (VAR_4->is_avc == 1) {
        return FUNC_0(VAR_3, VAR_1, VAR_2);
    }

    return 0;
}
