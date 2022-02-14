
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_9__ {TYPE_1__* index_entries; } ;
struct TYPE_8__ {int current_sample; } ;
struct TYPE_7__ {int pos; } ;
typedef TYPE_2__ FilmDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    FilmDemuxContext *VAR_5 = VAR_1->priv_data;
    AVStream *VAR_6 = VAR_1->streams[VAR_2];
    int64_t VAR_7;
    int VAR_8 = FUNC_0(VAR_6, VAR_3, VAR_4);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_7 = FUNC_1(VAR_1->pb, VAR_6->index_entries[VAR_8].pos, VAR_0);
    if (VAR_7 < 0)
        return VAR_7;

    VAR_5->current_sample = VAR_8;

    return 0;
}
