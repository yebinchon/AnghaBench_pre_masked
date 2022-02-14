
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(GetBitContext *VAR_0, int *VAR_1, int *VAR_2,
                         int *VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6 = 0;

    for (VAR_5 = 2; VAR_5 >= 0; VAR_5--) {
        if (!VAR_2[VAR_5]) {
            VAR_1[VAR_5] = 0;
            continue;
        }
        if ((!VAR_5 && !VAR_6) || FUNC_1(VAR_0)) {
            if (VAR_3[VAR_5] > 0) {
                int VAR_7 = VAR_4[VAR_5];
                VAR_1[VAR_5] = FUNC_0(VAR_0, VAR_3[VAR_5]);
                if (VAR_1[VAR_5] >= VAR_7)
                    VAR_1[VAR_5]++;
            } else {
                VAR_1[VAR_5] = !VAR_4[VAR_5];
            }
            VAR_6 = 1;
        } else {
            VAR_1[VAR_5] = VAR_4[VAR_5];
        }
    }
}
