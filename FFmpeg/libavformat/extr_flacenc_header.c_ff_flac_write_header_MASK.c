
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int) ;

int FUNC_1(AVIOContext *VAR_2, uint8_t *VAR_3,
                         int VAR_4, int VAR_5)
{
    uint8_t VAR_6[8] = {
        0x66, 0x4C, 0x61, 0x43, 0x00, 0x00, 0x00, 0x22
    };

    VAR_6[4] = VAR_5 ? 0x80 : 0x00;

    if (VAR_4 < VAR_1)
        return VAR_0;


    FUNC_0(VAR_2, VAR_6, 8);


    FUNC_0(VAR_2, VAR_3, VAR_1);

    return 0;
}
