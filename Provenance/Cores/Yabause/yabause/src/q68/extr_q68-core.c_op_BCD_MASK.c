
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int SR; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int const,int ,int,int*) ;
 int FUNC_1 (TYPE_1__*,int const,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_2(Q68State *VAR_11, uint32_t VAR_12)
{
    VAR_2;
    VAR_3;
    const int VAR_13 = VAR_12 & 0x4000;
    const int VAR_14 = VAR_12 & 0x0008;

    const uint16_t VAR_15 =
        (VAR_14 ? VAR_1 : VAR_0) << 3 | VAR_10;
    const uint16_t VAR_16 =
        (VAR_14 ? VAR_1 : VAR_0) << 3 | VAR_9;
    int VAR_17;
    uint8_t VAR_18 = FUNC_0(VAR_11, VAR_15, VAR_4, 0, &VAR_17);
    uint8_t VAR_19 = FUNC_0(VAR_11, VAR_16, VAR_4, 1, &VAR_17);

    int VAR_20;
    int VAR_21 = (VAR_11->SR >> VAR_7) & 1;
    VAR_11->SR &= ~(VAR_6 | VAR_5);
    if (VAR_13) {
        VAR_20 = (VAR_19 & 0x0F) + (VAR_18 & 0x0F) + VAR_21;
        if (VAR_20 >= 10) {


            VAR_20 += 6;
        }
        VAR_20 += (VAR_19 & 0xF0) + (VAR_18 & 0xF0);
        if (VAR_20 >= 10<<4) {
            VAR_20 -= 10<<4;
            VAR_11->SR |= VAR_6 | VAR_5;
        }
    } else {

        int VAR_22 = (VAR_19 & 0x0F) - (VAR_18 & 0x0F) - VAR_21;
        int VAR_23 = 0;
        if (VAR_22 < 0) {
            VAR_22 += 10;
            VAR_23 = 1<<4;
        }
        int VAR_24 = (VAR_19 & 0xF0) - (VAR_18 & 0xF0) - VAR_23;
        if (VAR_24 < 0) {
            VAR_24 += 10<<4;
            VAR_11->SR |= VAR_6 | VAR_5;
        }
        VAR_20 = VAR_24 + VAR_22;
        if (VAR_20 < 0) {
            VAR_11->SR |= VAR_6 | VAR_5;
        }
    }
    VAR_20 &= 0xFF;
    if (VAR_20 != 0) {
        VAR_11->SR &= ~VAR_8;
    }

    FUNC_1(VAR_11, VAR_16, VAR_4, VAR_20);
    return VAR_14 ? 18 : 6;
}
