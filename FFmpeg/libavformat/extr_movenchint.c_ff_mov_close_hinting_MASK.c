
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pb; } ;
struct TYPE_6__ {int sample_queue; int par; TYPE_2__* rtp_ctx; } ;
typedef TYPE_1__ MOVTrack ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *) ;

void FUNC_5(MOVTrack *VAR_0)
{
    AVFormatContext *VAR_1 = VAR_0->rtp_ctx;

    FUNC_1(&VAR_0->par);
    FUNC_4(&VAR_0->sample_queue);
    if (!VAR_1)
        return;
    if (VAR_1->pb) {
        FUNC_0(VAR_1);
        FUNC_3(&VAR_1->pb);
    }
    FUNC_2(VAR_1);
}
