
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int packet_count; int ts_per_packet; scalar_t__ video_stream; int f; } ;
typedef TYPE_1__ ModPlugContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, int VAR_1, int64_t VAR_2, int VAR_3)
{
    ModPlugContext *VAR_4 = VAR_0->priv_data;
    FUNC_0(VAR_4->f, (int)VAR_2);
    if (VAR_4->video_stream)
        VAR_4->packet_count = VAR_2 / VAR_4->ts_per_packet;
    return 0;
}
