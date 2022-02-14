
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byTmpHash ;
typedef int PBYTE ;
typedef int BYTE ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;

BYTE FUNC_1 (PBYTE VAR_1)
{
    int VAR_2;
    BYTE VAR_3;
    BYTE VAR_4 = 0;


    VAR_3 = (BYTE)(FUNC_0(VAR_1, VAR_0,
            0xFFFFFFFFL) & 0x3F);

    for (VAR_2 = 0; VAR_2 < (sizeof(VAR_3) * 8); VAR_2++) {
        VAR_4 <<= 1;
        if (VAR_3 & 0x01)
            VAR_4 |= 1;
        VAR_3 >>= 1;
    }


    return (VAR_4 >> 2);
}
