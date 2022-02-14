
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int w128_t ;
struct TYPE_3__ {int * state; } ;
typedef TYPE_1__ sfmt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *,int *) ;

void FUNC_1(sfmt_t * VAR_2) {
    int VAR_3;
    w128_t *VAR_4, *VAR_5;

    VAR_4 = &VAR_2->state[VAR_0 - 2];
    VAR_5 = &VAR_2->state[VAR_0 - 1];
    for (VAR_3 = 0; VAR_3 < VAR_0 - VAR_1; VAR_3++) {
 FUNC_0(&VAR_2->state[VAR_3], &VAR_2->state[VAR_3],
       &VAR_2->state[VAR_3 + VAR_1], VAR_4, VAR_5);
 VAR_4 = VAR_5;
 VAR_5 = &VAR_2->state[VAR_3];
    }
    for (; VAR_3 < VAR_0; VAR_3++) {
 FUNC_0(&VAR_2->state[VAR_3], &VAR_2->state[VAR_3],
       &VAR_2->state[VAR_3 + VAR_1 - VAR_0], VAR_4, VAR_5);
 VAR_4 = VAR_5;
 VAR_5 = &VAR_2->state[VAR_3];
    }
}
