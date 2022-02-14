
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int nb_index_entries; TYPE_1__* index_entries; } ;
struct TYPE_4__ {int pos; } ;
typedef TYPE_2__ AVStream ;



__attribute__((used)) static void FUNC_0(int64_t VAR_0, AVStream *VAR_1)
{

    int VAR_2;
    for(VAR_2=0; VAR_2<VAR_1->nb_index_entries; VAR_2++) {
        VAR_1->index_entries[VAR_2].pos += VAR_0;
    }
}
