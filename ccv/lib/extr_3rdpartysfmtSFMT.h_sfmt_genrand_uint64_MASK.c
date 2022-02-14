
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int idx; TYPE_1__* state; } ;
typedef TYPE_2__ sfmt_t ;
struct TYPE_5__ {int* u; int* u64; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) inline static uint64_t FUNC_2(sfmt_t * VAR_1) {




    uint64_t VAR_2;

    uint64_t * VAR_3 = &VAR_1->state[0].u64[0];
    FUNC_0(VAR_1->idx % 2 == 0);

    if (VAR_1->idx >= VAR_0) {
 FUNC_1(VAR_1);
 VAR_1->idx = 0;
    }






    VAR_2 = VAR_3[VAR_1->idx / 2];
    VAR_1->idx += 2;
    return VAR_2;

}
