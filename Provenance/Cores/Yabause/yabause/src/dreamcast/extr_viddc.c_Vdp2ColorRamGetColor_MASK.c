
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int ColorMode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static uint16 FUNC_3(u32 VAR_2) {
    u16 VAR_3;

    switch(VAR_1.ColorMode) {
        case 0:
        case 1:
        {
            VAR_2 <<= 1;
            VAR_3 = FUNC_2(VAR_0, VAR_2 & 0xFFF);
            return FUNC_0(VAR_3) | 0x8000;
        }
        case 2:
        {
            u16 VAR_4;
            VAR_2 <<= 2;
            VAR_2 &= 0xFFF;
            VAR_3 = FUNC_2(VAR_0, VAR_2);
            VAR_4 = FUNC_2(VAR_0, VAR_2+2);
            return FUNC_1(VAR_3, VAR_4) | 0x8000;
        }
        default:
            break;
    }

    return 0;
}
