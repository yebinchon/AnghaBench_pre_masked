
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* x; void* y; } ;
typedef TYPE_1__ svq1_pmv ;
struct TYPE_6__ {int table; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int,int) ;
 scalar_t__ FUNC_2 (void*,void*,void*) ;
 void* FUNC_3 (scalar_t__,int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_2, svq1_pmv *VAR_3,
                                     svq1_pmv **VAR_4)
{
    int VAR_5;
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {

        VAR_5 = FUNC_1(VAR_2, VAR_1.table, 7, 2);
        if (VAR_5 < 0)
            return VAR_0;
        else if (VAR_5) {
            if (FUNC_0(VAR_2))
                VAR_5 = -VAR_5;
        }


        if (VAR_6 == 1)
            VAR_3->y = FUNC_3(VAR_5 + FUNC_2(VAR_4[0]->y, VAR_4[1]->y, VAR_4[2]->y), 6);
        else
            VAR_3->x = FUNC_3(VAR_5 + FUNC_2(VAR_4[0]->x, VAR_4[1]->x, VAR_4[2]->x), 6);
    }

    return 0;
}
