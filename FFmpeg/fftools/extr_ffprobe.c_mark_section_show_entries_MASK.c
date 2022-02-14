
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {int show_all_entries; size_t* children_ids; int entries_to_show; } ;
typedef size_t SectionID ;
typedef int AVDictionary ;


 int FUNC_0 (int *,int *,int ) ;
 struct section* VAR_0 ;

__attribute__((used)) static inline void FUNC_1(SectionID VAR_1,
                                             int VAR_2, AVDictionary *VAR_3)
{
    struct section *VAR_4 = &VAR_0[VAR_1];

    VAR_4->show_all_entries = VAR_2;
    if (VAR_2) {
        SectionID *VAR_5;
        for (VAR_5 = VAR_4->children_ids; *VAR_5 != -1; VAR_5++)
            FUNC_1(*VAR_5, VAR_2, VAR_3);
    } else {
        FUNC_0(&VAR_4->entries_to_show, VAR_3, 0);
    }
}
