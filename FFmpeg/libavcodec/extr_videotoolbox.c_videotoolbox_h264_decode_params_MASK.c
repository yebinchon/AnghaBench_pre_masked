
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int reconfig_needed; int * sps; } ;
typedef TYPE_4__ VTContext ;
struct TYPE_14__ {TYPE_5__* priv_data; TYPE_3__* internal; } ;
struct TYPE_10__ {TYPE_1__* sps; } ;
struct TYPE_13__ {TYPE_2__ ps; } ;
struct TYPE_11__ {TYPE_4__* hwaccel_priv_data; } ;
struct TYPE_9__ {int const* data; } ;
typedef TYPE_5__ H264Context ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int const*,int) ;
 scalar_t__ FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1,
                                           int VAR_2,
                                           const uint8_t *VAR_3,
                                           uint32_t VAR_4)
{
    VTContext *VAR_5 = VAR_1->internal->hwaccel_priv_data;
    H264Context *VAR_6 = VAR_1->priv_data;


    if (!VAR_5->sps[0])
        FUNC_2(VAR_5->sps, VAR_6->ps.sps->data + 1, 3);

    if (VAR_2 == VAR_0) {
        if (VAR_4 > 4 && FUNC_1(VAR_5->sps, VAR_3 + 1, 3) != 0) {
            VAR_5->reconfig_needed = 1;
            FUNC_2(VAR_5->sps, VAR_3 + 1, 3);
        }
    }


    return FUNC_0(VAR_1, VAR_3, VAR_4);
}
