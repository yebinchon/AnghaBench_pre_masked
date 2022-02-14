
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct representation {int n_fragments; int * fragments; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct representation *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->n_fragments; VAR_1++) {
        FUNC_1(&VAR_0->fragments[VAR_1]);
    }
    FUNC_0(&VAR_0->fragments);
    VAR_0->n_fragments = 0;
}
