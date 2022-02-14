
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_9__ {int pb; TYPE_2__** streams; } ;
struct TYPE_8__ {scalar_t__ start_time; int nb_index_entries; TYPE_1__* index_entries; } ;
struct TYPE_7__ {int pos; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, int VAR_4, int64_t VAR_5, int VAR_6) {
    int64_t VAR_7 = 0;
    uint64_t VAR_8;
    uint64_t VAR_9 = 100 * 1024 * 1024;
    AVStream *VAR_10 = VAR_3->streams[0];
    int64_t VAR_11 = VAR_3->streams[VAR_4]->start_time;
    int64_t VAR_12;
    int VAR_13;
    if (VAR_5 < VAR_11) VAR_5 = VAR_11;
    VAR_13 = FUNC_2(VAR_10, VAR_5 - VAR_11,
                                    VAR_0 | VAR_1);
    if (VAR_13 < 0)
        return -1;
    VAR_8 = VAR_10->index_entries[VAR_13].pos;
    if (VAR_13 < VAR_10->nb_index_entries - 2)
        VAR_9 = VAR_10->index_entries[VAR_13 + 2].pos - VAR_8;
    VAR_9 = FUNC_1(VAR_9, 200 * 1024);
    VAR_7 = FUNC_3(VAR_3->pb, VAR_8, VAR_2);
    if (VAR_7 < 0)
        return VAR_7;
    VAR_12 = FUNC_4(VAR_3, VAR_9, -1, VAR_5);
    if (FUNC_0(VAR_12 - VAR_5) > 4)
        return -1;
    return 0;
}
