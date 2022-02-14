
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* utility_inc; int numCB; int * cells; int rand_state; } ;
typedef TYPE_1__ elbg_data ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(elbg_data *VAR_1)
{
    int VAR_2=0;

    uint64_t VAR_3;

    if (VAR_1->utility_inc[VAR_1->numCB-1] < VAR_0) {
        VAR_3 = FUNC_1(VAR_1->rand_state) % (unsigned int)VAR_1->utility_inc[VAR_1->numCB-1] + 1;
    } else {
        VAR_3 = FUNC_1(VAR_1->rand_state);
        VAR_3 = (FUNC_1(VAR_1->rand_state) + (VAR_3<<32)) % VAR_1->utility_inc[VAR_1->numCB-1] + 1;
    }

    while (VAR_1->utility_inc[VAR_2] < VAR_3) {
        VAR_2++;
    }

    FUNC_0(VAR_1->cells[VAR_2]);

    return VAR_2;
}
