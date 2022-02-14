
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct segment {struct segment* url; struct segment* key; } ;


 int FUNC_0 (struct segment**) ;

__attribute__((used)) static void FUNC_1(struct segment **VAR_0, int VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        FUNC_0(&VAR_0[VAR_2]->key);
        FUNC_0(&VAR_0[VAR_2]->url);
        FUNC_0(&VAR_0[VAR_2]);
    }
}
