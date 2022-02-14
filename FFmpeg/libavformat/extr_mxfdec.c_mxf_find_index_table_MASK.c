
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_index_tables; TYPE_1__* index_tables; } ;
struct TYPE_5__ {int index_sid; } ;
typedef TYPE_1__ MXFIndexTable ;
typedef TYPE_2__ MXFContext ;



__attribute__((used)) static MXFIndexTable *FUNC_0(MXFContext *VAR_0, int VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->nb_index_tables; VAR_2++)
        if (VAR_0->index_tables[VAR_2].index_sid == VAR_1)
            return &VAR_0->index_tables[VAR_2];
    return ((void*)0);
}
