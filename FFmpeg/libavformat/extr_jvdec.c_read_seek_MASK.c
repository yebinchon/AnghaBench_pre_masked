
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_9__ {int nb_index_entries; TYPE_1__* index_entries; } ;
struct TYPE_8__ {int pts; int state; } ;
struct TYPE_7__ {int pos; } ;
typedef TYPE_2__ JVDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_5, int VAR_6,
                     int64_t VAR_7, int VAR_8)
{
    JVDemuxContext *VAR_9 = VAR_5->priv_data;
    AVStream *VAR_10 = VAR_5->streams[0];
    int VAR_11;

    if (VAR_8 & (VAR_0 | VAR_1))
        return FUNC_0(VAR_2);

    switch (VAR_6) {
    case 0:
        VAR_11 = FUNC_1(VAR_10, VAR_7, VAR_8);
        break;
    case 1:
        VAR_11 = VAR_7;
        break;
    default:
        return 0;
    }

    if (VAR_11 < 0 || VAR_11 >= VAR_10->nb_index_entries)
        return 0;
    if (FUNC_2(VAR_5->pb, VAR_10->index_entries[VAR_11].pos, VAR_4) < 0)
        return -1;

    VAR_9->state = VAR_3;
    VAR_9->pts = VAR_11;
    return 0;
}
