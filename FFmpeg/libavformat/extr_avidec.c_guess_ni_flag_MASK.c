
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {int nb_streams; int pb; TYPE_2__** streams; } ;
struct TYPE_7__ {int nb_index_entries; TYPE_1__* index_entries; } ;
struct TYPE_6__ {scalar_t__ pos; int size; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (unsigned int*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2)
{
    int VAR_3;
    int64_t VAR_4 = 0;
    int64_t VAR_5 = VAR_0;
    int64_t VAR_6 = FUNC_4(VAR_2->pb);

    for (VAR_3 = 0; VAR_3 < VAR_2->nb_streams; VAR_3++) {
        AVStream *VAR_7 = VAR_2->streams[VAR_3];
        int VAR_8 = VAR_7->nb_index_entries;
        unsigned int VAR_9;

        if (VAR_8 <= 0)
            continue;

        if (VAR_8 >= 2) {
            int64_t VAR_10 = VAR_7->index_entries[0].pos;
            unsigned VAR_11[2];
            FUNC_3(VAR_2->pb, VAR_10, VAR_1);
            VAR_11[0] = FUNC_0(VAR_2->pb);
            VAR_11[1] = FUNC_0(VAR_2->pb);
            FUNC_1(VAR_2->pb);
            VAR_9 = FUNC_2(VAR_2->pb);
            if (FUNC_6(VAR_11) == VAR_3 && VAR_10 + VAR_9 > VAR_7->index_entries[1].pos)
                VAR_4 = VAR_0;
            if (FUNC_6(VAR_11) == VAR_3 && VAR_9 == VAR_7->index_entries[0].size + 8)
                VAR_4 = VAR_0;
        }

        if (VAR_7->index_entries[0].pos > VAR_4)
            VAR_4 = VAR_7->index_entries[0].pos;
        if (VAR_7->index_entries[VAR_8 - 1].pos < VAR_5)
            VAR_5 = VAR_7->index_entries[VAR_8 - 1].pos;
    }
    FUNC_3(VAR_2->pb, VAR_6, VAR_1);

    if (VAR_4 > VAR_5)
        return 1;

    return FUNC_5(VAR_2);
}
