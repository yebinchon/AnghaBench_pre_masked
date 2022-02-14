
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int numCB; int* utility; int error; int* utility_inc; } ;
typedef TYPE_1__ elbg_data ;



__attribute__((used)) static void FUNC_0(elbg_data *VAR_0)
{
    int VAR_1;
    int64_t VAR_2=0;

    for (VAR_1=0; VAR_1 < VAR_0->numCB; VAR_1++) {
        if (VAR_0->numCB*VAR_0->utility[VAR_1] > VAR_0->error)
            VAR_2 += VAR_0->utility[VAR_1];
        VAR_0->utility_inc[VAR_1] = VAR_2;
    }
}
