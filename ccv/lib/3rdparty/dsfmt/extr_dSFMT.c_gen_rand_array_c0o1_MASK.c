
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* dw128_t ;
struct TYPE_3__ {void** status; } ;
typedef TYPE_1__ dsfmt_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**,void**,void**,void**) ;

__attribute__((used)) inline static void FUNC_2(dsfmt_t *VAR_2, dw128_t *VAR_3,
           int VAR_4) {
    int VAR_5, VAR_6;
    dw128_t VAR_7;

    VAR_7 = VAR_2->status[VAR_0];
    FUNC_1(&VAR_3[0], &VAR_2->status[0], &VAR_2->status[VAR_1],
   &VAR_7);
    for (VAR_5 = 1; VAR_5 < VAR_0 - VAR_1; VAR_5++) {
 FUNC_1(&VAR_3[VAR_5], &VAR_2->status[VAR_5],
       &VAR_2->status[VAR_5 + VAR_1], &VAR_7);
    }
    for (; VAR_5 < VAR_0; VAR_5++) {
 FUNC_1(&VAR_3[VAR_5], &VAR_2->status[VAR_5],
       &VAR_3[VAR_5 + VAR_1 - VAR_0], &VAR_7);
    }
    for (; VAR_5 < VAR_4 - VAR_0; VAR_5++) {
 FUNC_1(&VAR_3[VAR_5], &VAR_3[VAR_5 - VAR_0],
       &VAR_3[VAR_5 + VAR_1 - VAR_0], &VAR_7);
 FUNC_0(&VAR_3[VAR_5 - VAR_0]);
    }
    for (VAR_6 = 0; VAR_6 < 2 * VAR_0 - VAR_4; VAR_6++) {
 VAR_2->status[VAR_6] = VAR_3[VAR_6 + VAR_4 - VAR_0];
    }
    for (; VAR_5 < VAR_4; VAR_5++, VAR_6++) {
 FUNC_1(&VAR_3[VAR_5], &VAR_3[VAR_5 - VAR_0],
       &VAR_3[VAR_5 + VAR_1 - VAR_0], &VAR_7);
 VAR_2->status[VAR_6] = VAR_3[VAR_5];
 FUNC_0(&VAR_3[VAR_5 - VAR_0]);
    }
    for (VAR_5 = VAR_4 - VAR_0; VAR_5 < VAR_4; VAR_5++) {
 FUNC_0(&VAR_3[VAR_5]);
    }
    VAR_2->status[VAR_0] = VAR_7;
}
