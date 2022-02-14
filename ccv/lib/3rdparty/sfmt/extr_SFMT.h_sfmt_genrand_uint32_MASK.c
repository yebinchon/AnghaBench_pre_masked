
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ idx; TYPE_1__* state; } ;
typedef TYPE_2__ sfmt_t ;
struct TYPE_5__ {int * u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) inline static uint32_t FUNC_1(sfmt_t * VAR_1) {
    uint32_t VAR_2;
    uint32_t * VAR_3 = &VAR_1->state[0].u[0];

    if (VAR_1->idx >= VAR_0) {
 FUNC_0(VAR_1);
 VAR_1->idx = 0;
    }
    VAR_2 = VAR_3[VAR_1->idx++];
    return VAR_2;
}
