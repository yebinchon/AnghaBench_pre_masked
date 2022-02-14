
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef unsigned int uint32_t ;
typedef int int32_t ;
struct TYPE_7__ {int sign; scalar_t__ exp; scalar_t__ mant; } ;
typedef TYPE_1__ SoftFloat_IEEE754 ;


 TYPE_1__ VAR_0 ;
 TYPE_1__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static SoftFloat_IEEE754 FUNC_2(SoftFloat_IEEE754 VAR_1, SoftFloat_IEEE754 VAR_2) {
    uint64_t VAR_3;
    uint64_t VAR_4;
    int VAR_5;
    unsigned char VAR_6;
    unsigned int VAR_7;
    int32_t VAR_8;
    uint32_t VAR_9 = 0;
    int VAR_10 = 48;

    VAR_8 = VAR_1.sign ^ VAR_2.sign;


    VAR_3 = (uint64_t)VAR_1.mant * (uint64_t)VAR_2.mant;
    VAR_4 = (uint64_t)0x1 << 47;

    if (!VAR_3)
        return VAR_0;


    while (!(VAR_3 & VAR_4) && VAR_4) {
        VAR_10--;
        VAR_4 >>= 1;
    }


    VAR_5 = VAR_10 - 24;
    if (VAR_5 > 0) {
        VAR_6 = (unsigned char)(((unsigned int)VAR_3 >> (VAR_5 - 1)) & 0x3 );
        if ((VAR_6 == 0x3) || ((VAR_6 == 0x1) && ((unsigned int)VAR_3 & ((0x1UL << (VAR_5 - 1)) - 1)))) {

            VAR_3 += (uint64_t)0x1 << VAR_5;
        }
    }

    if (VAR_5 >= 0) {
        VAR_7 = (unsigned int)(VAR_3 >> VAR_5);
    } else {
        VAR_7 = (unsigned int)(VAR_3 <<-VAR_5);
    }


    if (VAR_7 & 0x01000000ul) {
        VAR_10++;
        VAR_7 >>= 1;
    }

    if (!VAR_8) {
        VAR_9 = 0x80000000U;
    }

    VAR_9 |= ((unsigned)FUNC_1(VAR_1.exp + VAR_2.exp + VAR_10 - 47, -126, 127) << 23) & 0x7F800000;
    VAR_9 |= VAR_7;
    return FUNC_0(VAR_9);
}
