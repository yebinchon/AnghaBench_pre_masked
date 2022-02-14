
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int duration; int dts; } ;
struct TYPE_12__ {size_t nb_index_entries; TYPE_1__* index_entries; } ;
struct TYPE_11__ {size_t currentframe; size_t totalframes; int frame_size; int last_frame_size; } ;
struct TYPE_10__ {int size; int timestamp; } ;
typedef TYPE_2__ TTAContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_4__*,int) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    TTAContext *VAR_5 = VAR_3->priv_data;
    AVStream *VAR_6 = VAR_3->streams[0];
    int VAR_7, VAR_8;


    if (VAR_5->currentframe >= VAR_5->totalframes)
        return VAR_0;

    if (VAR_6->nb_index_entries < VAR_5->totalframes) {
        FUNC_1(VAR_3, VAR_2, "Index entry disappeared\n");
        return VAR_1;
    }

    VAR_7 = VAR_6->index_entries[VAR_5->currentframe].size;

    VAR_8 = FUNC_0(VAR_3->pb, VAR_4, VAR_7);
    VAR_4->dts = VAR_6->index_entries[VAR_5->currentframe++].timestamp;
    VAR_4->duration = VAR_5->currentframe == VAR_5->totalframes ? VAR_5->last_frame_size :
                                                        VAR_5->frame_size;
    return VAR_8;
}
