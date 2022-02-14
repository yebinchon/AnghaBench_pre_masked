
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int GetBitContext ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_2(uint8_t* VAR_0, int VAR_1, int VAR_2, int VAR_3,
                           GetBitContext *VAR_4)
{
    int VAR_5, VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        if (!FUNC_0(VAR_4))
            FUNC_1(VAR_0, 0, VAR_1);
        else
            for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
                VAR_0[VAR_5] = FUNC_0(VAR_4);
        VAR_0 += VAR_3;
    }
}
