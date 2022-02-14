
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int CMDCOLR; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int u8 ;
struct TYPE_5__ {int SPCTL; int PRISA; } ;


 int FUNC_0 (char*,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static u8 FUNC_1(vdp1cmd_struct *VAR_1) {
    u8 VAR_2 = VAR_0->SPCTL;
    u8 VAR_3;
    u8 *VAR_4 = (u8 *)&VAR_0->PRISA;

    if ((VAR_2 & 0x20) && (VAR_1->CMDCOLR & 0x8000)) {

        return VAR_0->PRISA & 0x07;
    }
    else {
        u8 VAR_5 = VAR_2 & 0x0F;
        switch(VAR_5) {
            case 0:
                VAR_3 = ((VAR_1->CMDCOLR & 0x8000) |
                                   (~VAR_1->CMDCOLR & 0x4000)) >> 14;
                return VAR_4[VAR_3 ^ 1] & 0x07;
                break;
            case 1:
                VAR_3 = ((VAR_1->CMDCOLR & 0xC000) |
                                   (~VAR_1->CMDCOLR & 0x2000)) >> 13;
                return VAR_4[VAR_3 ^ 1] & 0x07;
                break;
            case 3:
                VAR_3 = ((VAR_1->CMDCOLR & 0x4000) |
                                   (~VAR_1->CMDCOLR & 0x2000)) >> 13;
                return VAR_4[VAR_3 ^ 1] & 0x07;
                break;
            case 4:
                VAR_3 = ((VAR_1->CMDCOLR & 0x4000) |
                                   (~VAR_1->CMDCOLR & 0x2000)) >> 13;
                return VAR_4[VAR_3 ^ 1] & 0x07;
                break;
            case 5:
                VAR_3 = ((VAR_1->CMDCOLR & 0x6000) |
                                   (~VAR_1->CMDCOLR & 0x1000)) >> 12;
                return VAR_4[VAR_3 ^ 1] & 0x07;
                break;
            case 6:
                VAR_3 = ((VAR_1->CMDCOLR & 0x6000) |
                                   (~VAR_1->CMDCOLR & 0x1000)) >> 12;
                return VAR_4[VAR_3 ^ 1] & 0x07;
                break;
            case 7:
                VAR_3 = ((VAR_1->CMDCOLR & 0x6000) |
                                   (~VAR_1->CMDCOLR & 0x1000)) >> 12;
                return VAR_4[VAR_3 ^ 1] & 0x07;
                break;
            default:
                FUNC_0("sprite type %d not implemented\n", VAR_5);
                return 0x07;
                break;
        }
    }
}
