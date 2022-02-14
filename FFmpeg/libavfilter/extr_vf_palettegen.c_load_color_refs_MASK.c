
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_node {int nb_entries; struct color_ref* entries; } ;
struct color_ref {int dummy; } ;


 int VAR_0 ;
 struct color_ref** FUNC_0 (int,int) ;

__attribute__((used)) static struct color_ref **FUNC_1(const struct hist_node *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = 0;
    struct color_ref **VAR_6 = FUNC_0(VAR_2, sizeof(*VAR_6));

    if (!VAR_6)
        return ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        const struct hist_node *VAR_7 = &VAR_1[VAR_4];

        for (VAR_3 = 0; VAR_3 < VAR_7->nb_entries; VAR_3++)
            VAR_6[VAR_5++] = &VAR_7->entries[VAR_3];
    }

    return VAR_6;
}
