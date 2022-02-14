
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

int FUNC_1(uint32_t *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    uint32_t VAR_6 = 0;

    for (VAR_4 = 32; VAR_4 > 0; VAR_4--) {
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            if (VAR_2[VAR_5] == VAR_4)
                VAR_1[VAR_5] = VAR_6++;
        }
        if (VAR_6 & 1) {
            FUNC_0(((void*)0), VAR_0, "Error generating huffman table\n");
            return -1;
        }
        VAR_6 >>= 1;
    }
    return 0;
}
