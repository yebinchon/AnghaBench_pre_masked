
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int index_entries_allocated_size; int nb_index_entries; int index_entries; } ;
typedef TYPE_1__ AVStream ;


 int FUNC_0 (int *,int *,int *,int ,int ,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(AVStream *VAR_0, int64_t VAR_1, int64_t VAR_2,
                       int VAR_3, int VAR_4, int VAR_5)
{
    VAR_2 = FUNC_1(VAR_0, VAR_2);
    return FUNC_0(&VAR_0->index_entries, &VAR_0->nb_index_entries,
                              &VAR_0->index_entries_allocated_size, VAR_1,
                              VAR_2, VAR_3, VAR_4, VAR_5);
}
