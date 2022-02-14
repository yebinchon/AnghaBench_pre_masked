
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int pb; TYPE_2__** streams; } ;
struct TYPE_9__ {TYPE_1__* index_entries; } ;
struct TYPE_8__ {int timestamp; int pos; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    AVStream *VAR_5 = VAR_1->streams[VAR_2];
    int VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4);

    if(VAR_6 < 0) return -1;
    if (FUNC_1(VAR_1->pb, VAR_5->index_entries[VAR_6].pos, VAR_0) < 0)
        return -1;
    FUNC_2(VAR_1, VAR_5, VAR_5->index_entries[VAR_6].timestamp);
    return 0;
}
