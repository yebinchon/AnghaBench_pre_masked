
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int state ;
typedef scalar_t__ int16_t ;
typedef int RangeCoder ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int *,int,int ) ;

__attribute__((used)) static void FUNC_2(RangeCoder *VAR_1, int16_t *VAR_2)
{
    int VAR_3 = 0;
    int VAR_4;
    uint8_t VAR_5[VAR_0];
    FUNC_0(VAR_5, 128, sizeof(VAR_5));

    for (VAR_4 = 1; VAR_4 < 128; VAR_4++)
        if (VAR_2[VAR_4] != VAR_2[VAR_4 - 1]) {
            FUNC_1(VAR_1, VAR_5, VAR_4 - VAR_3 - 1, 0);
            VAR_3 = VAR_4;
        }
    FUNC_1(VAR_1, VAR_5, VAR_4 - VAR_3 - 1, 0);
}
