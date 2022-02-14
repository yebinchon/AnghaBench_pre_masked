
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int framenum; int **** lpc_coeff; int gb; } ;
typedef TYPE_1__ DCALbrDecoder ;


 int FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(DCALbrDecoder *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = VAR_0->framenum & 1;
    int VAR_6, VAR_7, VAR_8, VAR_9[16];


    for (VAR_7 = VAR_3; VAR_7 < VAR_4; VAR_7++) {
        int VAR_10 = 8 * (1 + (VAR_7 < 2));
        for (VAR_8 = VAR_1; VAR_8 <= VAR_2; VAR_8++) {
            if (FUNC_1(&VAR_0->gb, 4 * VAR_10))
                return 0;
            for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
                VAR_9[VAR_6] = FUNC_2(&VAR_0->gb, 4);
            for (VAR_6 = 0; VAR_6 < VAR_10 / 8; VAR_6++)
                FUNC_0(VAR_0->lpc_coeff[VAR_5][VAR_8][VAR_7][VAR_6], &VAR_9[VAR_6 * 8]);
        }
    }

    return 0;
}
