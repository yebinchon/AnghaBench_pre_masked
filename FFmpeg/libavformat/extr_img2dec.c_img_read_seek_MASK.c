
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {int img_number; scalar_t__ img_last; scalar_t__ img_first; scalar_t__ pts; int loop; scalar_t__ ts_from_file; } ;
typedef TYPE_2__ VideoDemuxData ;
struct TYPE_10__ {TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_9__ {TYPE_1__* index_entries; } ;
struct TYPE_7__ {int pos; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, int VAR_1, int64_t VAR_2, int VAR_3)
{
    VideoDemuxData *VAR_4 = VAR_0->priv_data;
    AVStream *VAR_5 = VAR_0->streams[0];

    if (VAR_4->ts_from_file) {
        int VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3);
        if(VAR_6 < 0)
            return -1;
        VAR_4->img_number = VAR_5->index_entries[VAR_6].pos;
        return 0;
    }

    if (VAR_2 < 0 || !VAR_4->loop && VAR_2 > VAR_4->img_last - VAR_4->img_first)
        return -1;
    VAR_4->img_number = VAR_2%(VAR_4->img_last - VAR_4->img_first + 1) + VAR_4->img_first;
    VAR_4->pts = VAR_2;
    return 0;
}
