
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ codec; scalar_t__* profiles; } ;
typedef TYPE_1__ dxva_mode ;
struct TYPE_6__ {scalar_t__ codec_id; int hwaccel_flags; scalar_t__ profile; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(AVCodecContext *VAR_2, const dxva_mode *VAR_3)
{
    if (VAR_3->codec != VAR_2->codec_id)
            return 0;

    if (VAR_3->profiles && !(VAR_2->hwaccel_flags & VAR_0)) {
        int VAR_4, VAR_5 = 0;
        for (VAR_4 = 0; VAR_3->profiles[VAR_4] != VAR_1; VAR_4++) {
            if (VAR_2->profile == VAR_3->profiles[VAR_4]) {
                VAR_5 = 1;
                break;
            }
        }
        if (!VAR_5)
            return 0;
    }

    return 1;
}
