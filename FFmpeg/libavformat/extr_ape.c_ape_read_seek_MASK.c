
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int currentframe; } ;
struct TYPE_9__ {int pb; TYPE_4__* priv_data; TYPE_2__** streams; } ;
struct TYPE_8__ {TYPE_1__* index_entries; } ;
struct TYPE_7__ {int pos; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ APEContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    AVStream *VAR_5 = VAR_1->streams[VAR_2];
    APEContext *VAR_6 = VAR_1->priv_data;
    int VAR_7 = FUNC_0(VAR_5, VAR_3, VAR_4);

    if (VAR_7 < 0)
        return -1;

    if (FUNC_1(VAR_1->pb, VAR_5->index_entries[VAR_7].pos, VAR_0) < 0)
        return -1;
    VAR_6->currentframe = VAR_7;
    return 0;
}
