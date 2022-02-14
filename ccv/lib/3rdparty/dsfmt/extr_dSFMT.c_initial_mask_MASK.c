
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {TYPE_1__* status; } ;
typedef TYPE_2__ dsfmt_t ;
struct TYPE_4__ {int* u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(dsfmt_t *VAR_3) {
    int VAR_4;
    uint64_t *VAR_5;

    VAR_5 = &VAR_3->status[0].u[0];
    for (VAR_4 = 0; VAR_4 < VAR_2 * 2; VAR_4++) {
        VAR_5[VAR_4] = (VAR_5[VAR_4] & VAR_1) | VAR_0;
    }
}
