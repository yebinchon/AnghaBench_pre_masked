
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int w128_t ;
typedef int uint32_t ;
struct TYPE_4__ {int idx; } ;
typedef TYPE_1__ sfmt_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

void FUNC_2(sfmt_t * VAR_1, uint32_t *VAR_2, int VAR_3) {
    FUNC_0(VAR_1->idx == VAR_0);
    FUNC_0(VAR_3 % 4 == 0);
    FUNC_0(VAR_3 >= VAR_0);

    FUNC_1(VAR_1, (w128_t *)VAR_2, VAR_3 / 4);
    VAR_1->idx = VAR_0;
}
