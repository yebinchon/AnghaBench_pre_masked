
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union av_intfloat32 {unsigned int i; } ;
typedef int uint16_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static union av_intfloat32 FUNC_0(uint16_t VAR_3)
{
    unsigned int VAR_4 = (unsigned int) (VAR_3 >> 15);
    unsigned int VAR_5 = (unsigned int) (VAR_3 & ((1 << 10) - 1));
    unsigned int VAR_6 = (unsigned int) (VAR_3 & VAR_1);
    union av_intfloat32 VAR_7;

    if (VAR_6 == VAR_1) {



        VAR_6 = VAR_0;
        if (VAR_5)
            VAR_5 = (1 << 23) - 1;
    } else if (VAR_6 == 0x0) {

        if (VAR_5) {
            VAR_5 <<= 1;
            VAR_6 = VAR_2;

            while ((VAR_5 & (1 << 10))) {


                VAR_5 <<= 1;
                VAR_6 -= (1 << 23);
            }

            VAR_5 &= ((1 << 10) - 1);

            VAR_5 <<= 13;
        }
    } else {

        VAR_5 <<= 13;

        VAR_6 = (VAR_6 << 13) + VAR_2;
    }

    VAR_7.i = (VAR_4 << 31) | VAR_6 | VAR_5;

    return VAR_7;
}
