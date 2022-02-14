
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {int nb_index_entries; TYPE_1__* index_entries; } ;
struct TYPE_10__ {scalar_t__ is_simple_index; } ;
struct TYPE_9__ {TYPE_6__** streams; int pb; TYPE_3__* priv_data; } ;
struct TYPE_8__ {int pos; } ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2, int VAR_3,
                         int64_t VAR_4, int VAR_5)
{
    ASFContext *VAR_6 = VAR_2->priv_data;
    int VAR_7, VAR_8;

    if (VAR_2->streams[VAR_3]->nb_index_entries && VAR_6->is_simple_index) {
        VAR_7 = FUNC_0(VAR_2->streams[VAR_3], VAR_4, VAR_5);
        if (VAR_7 < 0 || VAR_7 >= VAR_2->streams[VAR_3]->nb_index_entries)
            return VAR_0;
        FUNC_1(VAR_2->pb, VAR_2->streams[VAR_3]->index_entries[VAR_7].pos, VAR_1);
    } else {
        if ((VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5)) < 0)
            return VAR_8;
    }

    FUNC_3(VAR_2);

    return 0;
}
