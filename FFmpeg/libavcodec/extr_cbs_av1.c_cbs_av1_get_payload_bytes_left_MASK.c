
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static size_t FUNC_2(GetBitContext *VAR_0)
{
    GetBitContext VAR_1 = *VAR_0;
    size_t VAR_2 = 0;
    for (int VAR_3 = 0; FUNC_1(&VAR_1) >= 8; VAR_3++) {
        if (FUNC_0(&VAR_1, 8))
            VAR_2 = VAR_3;
    }
    return VAR_2;
}
