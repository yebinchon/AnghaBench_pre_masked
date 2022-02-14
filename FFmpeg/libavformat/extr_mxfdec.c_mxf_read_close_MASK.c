
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* offsets; struct TYPE_10__* fake_index; struct TYPE_10__* ptses; struct TYPE_10__* segments; } ;
struct TYPE_9__ {int nb_streams; TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int metadata_sets_count; int nb_index_tables; TYPE_5__* index_tables; TYPE_5__* local_tags; TYPE_5__* aesc; TYPE_5__* metadata_sets; TYPE_5__* partitions; TYPE_5__* essence_container_data_refs; TYPE_5__* packages_refs; } ;
struct TYPE_7__ {int * priv_data; } ;
typedef TYPE_2__ MXFContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_5__**) ;
 int FUNC_1 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    MXFContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    FUNC_0(&VAR_1->packages_refs);
    FUNC_0(&VAR_1->essence_container_data_refs);

    for (VAR_2 = 0; VAR_2 < VAR_0->nb_streams; VAR_2++)
        VAR_0->streams[VAR_2]->priv_data = ((void*)0);

    for (VAR_2 = 0; VAR_2 < VAR_1->metadata_sets_count; VAR_2++) {
        FUNC_1(VAR_1->metadata_sets + VAR_2, 1);
    }
    FUNC_0(&VAR_1->partitions);
    FUNC_0(&VAR_1->metadata_sets);
    FUNC_0(&VAR_1->aesc);
    FUNC_0(&VAR_1->local_tags);

    if (VAR_1->index_tables) {
        for (VAR_2 = 0; VAR_2 < VAR_1->nb_index_tables; VAR_2++) {
            FUNC_0(&VAR_1->index_tables[VAR_2].segments);
            FUNC_0(&VAR_1->index_tables[VAR_2].ptses);
            FUNC_0(&VAR_1->index_tables[VAR_2].fake_index);
            FUNC_0(&VAR_1->index_tables[VAR_2].offsets);
        }
    }
    FUNC_0(&VAR_1->index_tables);

    return 0;
}
