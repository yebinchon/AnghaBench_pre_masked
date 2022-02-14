
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ channel_layout; scalar_t__ layout_tag; } ;
typedef TYPE_1__ MovChannelLayout ;
typedef int AVIOContext ;


 int FUNC_0 (int *,scalar_t__) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(AVIOContext *VAR_1, int64_t VAR_2)
{
    const MovChannelLayout *VAR_3;
    uint32_t VAR_4 = 0;

    for (VAR_3 = VAR_0; VAR_3->channel_layout; VAR_3++)
        if (VAR_2 == VAR_3->channel_layout) {
            VAR_4 = VAR_3->layout_tag;
            break;
        }

    if (VAR_4) {
        FUNC_0(VAR_1, VAR_4);
        FUNC_0(VAR_1, 0);
    } else {
        FUNC_0(VAR_1, 0x10000);
        FUNC_0(VAR_1, VAR_2);
    }
    FUNC_0(VAR_1, 0);
}
