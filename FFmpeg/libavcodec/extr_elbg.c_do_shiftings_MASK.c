
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numCB; int* utility; int error; scalar_t__* utility_inc; } ;
typedef TYPE_1__ elbg_data ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int*) ;

__attribute__((used)) static void FUNC_4(elbg_data *VAR_0)
{
    int VAR_1[3];

    FUNC_0(VAR_0);

    for (VAR_1[0]=0; VAR_1[0] < VAR_0->numCB; VAR_1[0]++)
        if (VAR_0->numCB*VAR_0->utility[VAR_1[0]] < VAR_0->error) {
            if (VAR_0->utility_inc[VAR_0->numCB-1] == 0)
                return;

            VAR_1[1] = FUNC_2(VAR_0);
            VAR_1[2] = FUNC_1(VAR_0, VAR_1[0]);

            if (VAR_1[1] != VAR_1[0] && VAR_1[1] != VAR_1[2])
                FUNC_3(VAR_0, VAR_1);
        }
}
