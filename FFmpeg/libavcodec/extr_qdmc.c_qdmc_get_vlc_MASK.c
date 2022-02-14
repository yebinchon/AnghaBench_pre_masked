
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; int table; } ;
typedef TYPE_1__ VLC ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int* VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(GetBitContext *VAR_2, VLC *VAR_3, int VAR_4)
{
    int VAR_5;

    if (FUNC_2(VAR_2) < 1)
        return VAR_0;
    VAR_5 = FUNC_4(VAR_2, VAR_3->table, VAR_3->bits, 1);
    if (VAR_5 < 0)
        return VAR_0;
    if (VAR_5)
        VAR_5 = VAR_5 - 1;
    else
        VAR_5 = FUNC_1(VAR_2, FUNC_1(VAR_2, 3) + 1);

    if (VAR_4) {
        if (VAR_5 >= FUNC_0(VAR_1))
            return VAR_0;

        VAR_5 = VAR_1[VAR_5] + FUNC_3(VAR_2, VAR_5 >> 2);
    }

    return VAR_5;
}
