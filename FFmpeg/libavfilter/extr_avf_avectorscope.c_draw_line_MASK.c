
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AudioVectorScopeContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(AudioVectorScopeContext *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = FUNC_0(VAR_3-VAR_1), VAR_6 = VAR_1 < VAR_3 ? 1 : -1;
    int VAR_7 = FUNC_0(VAR_4-VAR_2), VAR_8 = VAR_2 < VAR_4 ? 1 : -1;
    int VAR_9 = (VAR_5>VAR_7 ? VAR_5 : -VAR_7) / 2, VAR_10;

    for (;;) {
        FUNC_1(VAR_0, VAR_1, VAR_2);

        if (VAR_1 == VAR_3 && VAR_2 == VAR_4)
            break;

        VAR_10 = VAR_9;

        if (VAR_10 >-VAR_5) {
            VAR_9 -= VAR_7;
            VAR_1 += VAR_6;
        }

        if (VAR_10 < VAR_7) {
            VAR_9 += VAR_5;
            VAR_2 += VAR_8;
        }
    }
}
