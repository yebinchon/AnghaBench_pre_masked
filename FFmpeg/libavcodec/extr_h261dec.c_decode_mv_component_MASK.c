
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table; } ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int) ;
 TYPE_1__ VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_3, int VAR_4)
{
    int VAR_5 = FUNC_1(VAR_3, VAR_1.table, VAR_0, 2);


    if (VAR_5 < 0)
        return VAR_4;

    VAR_5 = VAR_2[VAR_5];

    if (VAR_5 && !FUNC_0(VAR_3))
        VAR_5 = -VAR_5;

    VAR_4 += VAR_5;
    if (VAR_4 <= -16)
        VAR_4 += 32;
    else if (VAR_4 >= 16)
        VAR_4 -= 32;

    return VAR_4;
}
