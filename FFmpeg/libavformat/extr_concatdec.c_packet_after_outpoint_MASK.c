
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ dts; size_t stream_index; } ;
struct TYPE_11__ {TYPE_3__* cur_file; TYPE_2__* avf; } ;
struct TYPE_10__ {scalar_t__ outpoint; } ;
struct TYPE_9__ {TYPE_1__** streams; } ;
struct TYPE_8__ {int time_base; } ;
typedef TYPE_4__ ConcatContext ;
typedef TYPE_5__ AVPacket ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(ConcatContext *VAR_2, AVPacket *VAR_3)
{
    if (VAR_2->cur_file->outpoint != VAR_0 && VAR_3->dts != VAR_0) {
        return FUNC_0(VAR_3->dts, VAR_2->avf->streams[VAR_3->stream_index]->time_base,
                             VAR_2->cur_file->outpoint, VAR_1) >= 0;
    }
    return 0;
}
