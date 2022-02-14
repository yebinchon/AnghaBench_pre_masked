
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dw128_t ;
struct TYPE_3__ {int * status; } ;
typedef TYPE_1__ dsfmt_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *) ;

void FUNC_1(dsfmt_t *VAR_2) {
    int VAR_3;
    dw128_t VAR_4;

    VAR_4 = VAR_2->status[VAR_0];
    FUNC_0(&VAR_2->status[0], &VAR_2->status[0],
   &VAR_2->status[VAR_1], &VAR_4);
    for (VAR_3 = 1; VAR_3 < VAR_0 - VAR_1; VAR_3++) {
 FUNC_0(&VAR_2->status[VAR_3], &VAR_2->status[VAR_3],
       &VAR_2->status[VAR_3 + VAR_1], &VAR_4);
    }
    for (; VAR_3 < VAR_0; VAR_3++) {
 FUNC_0(&VAR_2->status[VAR_3], &VAR_2->status[VAR_3],
       &VAR_2->status[VAR_3 + VAR_1 - VAR_0], &VAR_4);
    }
    VAR_2->status[VAR_0] = VAR_4;
}
