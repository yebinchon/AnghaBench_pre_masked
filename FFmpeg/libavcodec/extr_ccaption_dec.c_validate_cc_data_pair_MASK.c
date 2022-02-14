
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_2)
{
    uint8_t VAR_3 = (*VAR_2 & 4) >>2;
    uint8_t VAR_4 = *VAR_2 & 3;

    if (!VAR_3)
        return VAR_0;


    if (VAR_4==0 || VAR_4==1) {
        if (!FUNC_0(VAR_2[2])) {
            return VAR_0;
        }
        if (!FUNC_0(VAR_2[1])) {
            VAR_2[1]=0x7F;
        }
    }


    if ((VAR_2[0] == 0xFA || VAR_2[0] == 0xFC || VAR_2[0] == 0xFD)
         && (VAR_2[1] & 0x7F) == 0 && (VAR_2[2] & 0x7F) == 0)
        return VAR_1;


    if (VAR_4 == 3 || VAR_4 == 2)
        return VAR_1;


    VAR_2[1] &= 0x7F;
    VAR_2[2] &= 0x7F;

    return 0;
}
