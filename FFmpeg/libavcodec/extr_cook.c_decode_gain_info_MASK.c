
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(GetBitContext *VAR_0, int *VAR_1)
{
    int VAR_2, VAR_3;

    VAR_3 = FUNC_3(VAR_0, 0, FUNC_2(VAR_0));

    VAR_2 = 0;
    while (VAR_3--) {
        int VAR_4 = FUNC_0(VAR_0, 3);
        int VAR_5 = FUNC_1(VAR_0) ? FUNC_0(VAR_0, 4) - 7 : -1;

        while (VAR_2 <= VAR_4)
            VAR_1[VAR_2++] = VAR_5;
    }
    while (VAR_2 <= 8)
        VAR_1[VAR_2++] = 0;
}
