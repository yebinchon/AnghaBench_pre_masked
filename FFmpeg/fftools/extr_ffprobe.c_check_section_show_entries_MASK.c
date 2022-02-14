
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {int* children_ids; scalar_t__ entries_to_show; scalar_t__ show_all_entries; } ;


 struct section* VAR_0 ;

__attribute__((used)) static inline int FUNC_0(int VAR_1)
{
    int *VAR_2;
    struct section *VAR_3 = &VAR_0[VAR_1];
    if (VAR_0[VAR_1].show_all_entries || VAR_0[VAR_1].entries_to_show)
        return 1;
    for (VAR_2 = VAR_3->children_ids; *VAR_2 != -1; VAR_2++)
        if (FUNC_0(*VAR_2))
            return 1;
    return 0;
}
