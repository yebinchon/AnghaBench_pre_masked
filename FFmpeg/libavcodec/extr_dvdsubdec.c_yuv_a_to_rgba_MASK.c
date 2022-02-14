
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int,int) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_2(const uint8_t *VAR_2, const uint8_t *VAR_3, uint32_t *VAR_4, int VAR_5)
{
    const uint8_t *VAR_6 = VAR_1 + VAR_0;
    uint8_t VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14, VAR_15, VAR_16;

    for (VAR_10 = VAR_5; VAR_10 > 0; VAR_10--) {
        VAR_11 = *VAR_2++;
        VAR_13 = *VAR_2++;
        VAR_12 = *VAR_2++;
        FUNC_0(VAR_12, VAR_13);
        FUNC_1(VAR_7, VAR_8, VAR_9, VAR_11);
        *VAR_4++ = ((unsigned)*VAR_3++ << 24) | (VAR_7 << 16) | (VAR_8 << 8) | VAR_9;
    }
}
