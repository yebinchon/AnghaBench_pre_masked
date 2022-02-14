
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static uint32_t FUNC_1(AVIOContext *VAR_0)
{
    uint8_t VAR_1, VAR_2;
    int VAR_3;
    uint32_t VAR_4;

    VAR_1 = FUNC_0(VAR_0);

    VAR_4 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_2 = FUNC_0(VAR_0);
        VAR_4 <<= 8;
        VAR_4 |= VAR_2;
    }

    return VAR_4;
}
