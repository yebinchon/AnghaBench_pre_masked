
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ide_device {int bus_status; int hob_feature; int feature; int hob_nsector; int nsector; int hob_sector; int sector; int hob_lcyl; int lcyl; int hob_hcyl; int hcyl; int select; int bus_unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct ide_device*) ;
 int FUNC_2 (struct ide_device*,int) ;
 int FUNC_3 (struct ide_device*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct ide_device *VAR_4, uint16_t VAR_5, uint8_t VAR_6){
    if (VAR_2)
        FUNC_0(VAR_3, "ide: put: addr: %04x, byte: %02x\n", VAR_5, VAR_6);

    VAR_5 &= 7;


    if (VAR_5 != 7 && VAR_4->bus_status & (VAR_0|VAR_1))
        return;

    switch(VAR_5) {
    case 0: break;
    case 1:
        FUNC_1(VAR_4);
        VAR_4->hob_feature = VAR_4->feature;
        VAR_4->feature = VAR_6;
        break;
    case 2:
        FUNC_1(VAR_4);
        VAR_4->hob_nsector = VAR_4->nsector;
        VAR_4->nsector = VAR_6;
        break;
    case 3:
        FUNC_1(VAR_4);
        VAR_4->hob_sector = VAR_4->sector;
        VAR_4->sector = VAR_6;
        break;
    case 4:
        FUNC_1(VAR_4);
        VAR_4->hob_lcyl = VAR_4->lcyl;
        VAR_4->lcyl = VAR_6;
        break;
    case 5:
        FUNC_1(VAR_4);
        VAR_4->hob_hcyl = VAR_4->hcyl;
        VAR_4->hcyl = VAR_6;
        break;
    case 6:

        VAR_4->select = (VAR_6 & ~0x10) | 0xa0;
        VAR_4->bus_unit = (VAR_6>>4)&1;
        break;
    default:
    case 7:
        if (VAR_2) FUNC_0(VAR_3, "\tIDE: CMD=%02x\n", VAR_6);

        FUNC_3(VAR_4);






        FUNC_2(VAR_4, VAR_6);

        break;
    }
}
