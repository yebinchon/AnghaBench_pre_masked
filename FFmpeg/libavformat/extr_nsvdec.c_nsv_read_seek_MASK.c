
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int pb; TYPE_4__** streams; TYPE_3__* priv_data; } ;
struct TYPE_11__ {TYPE_1__* index_entries; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int state; } ;
struct TYPE_9__ {int frame_offset; } ;
struct TYPE_8__ {int timestamp; int pos; } ;
typedef TYPE_2__ NSVStream ;
typedef TYPE_3__ NSVContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2, int VAR_3, int64_t VAR_4, int VAR_5)
{
    NSVContext *VAR_6 = VAR_2->priv_data;
    AVStream *VAR_7 = VAR_2->streams[VAR_3];
    NSVStream *VAR_8 = VAR_7->priv_data;
    int VAR_9;

    VAR_9 = FUNC_0(VAR_7, VAR_4, VAR_5);
    if(VAR_9 < 0)
        return -1;

    if (FUNC_1(VAR_2->pb, VAR_7->index_entries[VAR_9].pos, VAR_1) < 0)
        return -1;

    VAR_8->frame_offset = VAR_7->index_entries[VAR_9].timestamp;
    VAR_6->state = VAR_0;
    return 0;
}
