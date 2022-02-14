
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t stream_index; } ;
struct playlist {TYPE_3__ pkt; TYPE_2__* ctx; scalar_t__ is_id3_timestamped; } ;
struct TYPE_5__ {TYPE_1__** streams; } ;
struct TYPE_4__ {int time_base; } ;
typedef int AVRational ;


 int VAR_0 ;

__attribute__((used)) static AVRational FUNC_0(struct playlist *VAR_1)
{
    if (VAR_1->is_id3_timestamped)
        return VAR_0;

    return VAR_1->ctx->streams[VAR_1->pkt.stream_index]->time_base;
}
