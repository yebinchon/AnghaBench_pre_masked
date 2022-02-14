
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {scalar_t__ audio_pkt_cnt; } ;
typedef TYPE_1__ RMDemuxContext ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,int ,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, int VAR_1,
                        int64_t VAR_2, int VAR_3)
{
    RMDemuxContext *VAR_4 = VAR_0->priv_data;

    if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3) < 0)
        return -1;
    VAR_4->audio_pkt_cnt = 0;
    return 0;
}
