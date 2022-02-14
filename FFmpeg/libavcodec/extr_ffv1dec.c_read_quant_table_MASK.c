
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int state ;
typedef int int16_t ;
typedef int RangeCoder ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int FUNC_2(RangeCoder *VAR_2, int16_t *VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6 = 0;
    uint8_t VAR_7[VAR_1];

    FUNC_1(VAR_7, 128, sizeof(VAR_7));

    for (VAR_5 = 0; VAR_6 < 128; VAR_5++) {
        unsigned VAR_8 = FUNC_0(VAR_2, VAR_7, 0) + 1U;

        if (VAR_8 > 128 - VAR_6 || !VAR_8)
            return VAR_0;

        while (VAR_8--) {
            VAR_3[VAR_6] = VAR_4 * VAR_5;
            VAR_6++;
        }
    }

    for (VAR_6 = 1; VAR_6 < 128; VAR_6++)
        VAR_3[256 - VAR_6] = -VAR_3[VAR_6];
    VAR_3[128] = -VAR_3[127];

    return 2 * VAR_5 - 1;
}
