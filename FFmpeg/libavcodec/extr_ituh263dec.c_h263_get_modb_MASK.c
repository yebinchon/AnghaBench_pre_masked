
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(GetBitContext *VAR_0, int VAR_1, int *VAR_2)
{
    int VAR_3, VAR_4 = 1;

    if (VAR_1 < 3) {
        VAR_3 = FUNC_1(VAR_0);
        if (VAR_1 == 2 && VAR_3)
            VAR_4 = !FUNC_1(VAR_0);
    } else {
        VAR_4 = FUNC_2(VAR_0, 0, 4) + 1;
        VAR_3 = VAR_4 & 1;
        VAR_4 = !!(VAR_4 & 2);
    }
    if(VAR_3)
        *VAR_2 = FUNC_0(VAR_0, 6);
    return VAR_4;
}
