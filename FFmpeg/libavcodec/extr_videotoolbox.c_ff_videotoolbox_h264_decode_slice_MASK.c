
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int is_avc; } ;
typedef TYPE_1__ H264Context ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_2__*,int const*,int ) ;

int FUNC_1(AVCodecContext *VAR_0,
                                      const uint8_t *VAR_1,
                                      uint32_t VAR_2)
{
    H264Context *VAR_3 = VAR_0->priv_data;

    if (VAR_3->is_avc == 1)
        return 0;

    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
