
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__** streams; } ;
struct TYPE_7__ {size_t stream_index; int duration; int dts; int pts; } ;
struct TYPE_6__ {int time_base; } ;
typedef int AVRational ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,char const*,char*,char*,char*,char*,char*,char*,size_t) ;

__attribute__((used)) static void FUNC_3(const AVFormatContext *VAR_0, const AVPacket *VAR_1, const char *VAR_2)
{
    AVRational *VAR_3 = &VAR_0->streams[VAR_1->stream_index]->time_base;

    FUNC_2("%s: pts:%s pts_time:%s dts:%s dts_time:%s duration:%s duration_time:%s stream_index:%d\n",
           VAR_2,
           FUNC_0(VAR_1->pts), FUNC_1(VAR_1->pts, VAR_3),
           FUNC_0(VAR_1->dts), FUNC_1(VAR_1->dts, VAR_3),
           FUNC_0(VAR_1->duration), FUNC_1(VAR_1->duration, VAR_3),
           VAR_1->stream_index);
}
