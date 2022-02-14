
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int pos; int timestamp; int min_distance; int size; int flags; } ;
struct TYPE_6__ {int nb_index_entries; size_t const index_entries_allocated_size; TYPE_2__* index_entries; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVIndexEntry ;


 size_t const FUNC_0 (size_t const,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int*,size_t const) ;

__attribute__((used)) static int64_t FUNC_2(AVStream *VAR_1, int64_t VAR_2, int64_t VAR_3,
                               int VAR_4, int VAR_5, int VAR_6)
{
    AVIndexEntry *VAR_7, *VAR_8;
    int64_t VAR_9 = -1;
    const size_t VAR_10 = (VAR_1->nb_index_entries + 1) * sizeof(AVIndexEntry);



    const size_t VAR_11 =
        VAR_10 > VAR_1->index_entries_allocated_size ?
        FUNC_0(VAR_10, 2 * VAR_1->index_entries_allocated_size) :
        VAR_10;

    if((unsigned)VAR_1->nb_index_entries + 1 >= VAR_0 / sizeof(AVIndexEntry))
        return -1;

    VAR_7 = FUNC_1(VAR_1->index_entries,
                              &VAR_1->index_entries_allocated_size,
                              VAR_11);
    if(!VAR_7)
        return -1;

    VAR_1->index_entries= VAR_7;

    VAR_9= VAR_1->nb_index_entries++;
    VAR_8= &VAR_7[VAR_9];

    VAR_8->pos = VAR_2;
    VAR_8->timestamp = VAR_3;
    VAR_8->min_distance= VAR_5;
    VAR_8->size= VAR_4;
    VAR_8->flags = VAR_6;
    return VAR_9;
}
