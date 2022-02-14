
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct hist_node {int nb_entries; struct color_ref* entries; } ;
struct color_ref {scalar_t__ color; int count; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct color_ref* FUNC_1 (void**,int*,int,int *) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct hist_node *VAR_1, uint32_t VAR_2)
{
    int VAR_3;
    const unsigned VAR_4 = FUNC_2(VAR_2);
    struct hist_node *VAR_5 = &VAR_1[VAR_4];
    struct color_ref *VAR_6;

    for (VAR_3 = 0; VAR_3 < VAR_5->nb_entries; VAR_3++) {
        VAR_6 = &VAR_5->entries[VAR_3];
        if (VAR_6->color == VAR_2) {
            VAR_6->count++;
            return 0;
        }
    }

    VAR_6 = FUNC_1((void**)&VAR_5->entries, &VAR_5->nb_entries,
                         sizeof(*VAR_5->entries), ((void*)0));
    if (!VAR_6)
        return FUNC_0(VAR_0);
    VAR_6->color = VAR_2;
    VAR_6->count = 1;
    return 1;
}
