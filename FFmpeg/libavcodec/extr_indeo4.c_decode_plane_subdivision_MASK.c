
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(GetBitContext *VAR_0)
{
    int VAR_1;

    switch (FUNC_0(VAR_0, 2)) {
    case 3:
        return 1;
    case 2:
        for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
            if (FUNC_0(VAR_0, 2) != 3)
                return 0;
        return 4;
    default:
        return 0;
    }
}
