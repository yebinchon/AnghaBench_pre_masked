
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ide_device {int hob_feature; int error; int hob_nsector; int nsector; int hob_sector; int sector; int hob_lcyl; int lcyl; int hob_hcyl; int hcyl; int select; int status; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static uint32_t FUNC_1(struct ide_device *VAR_2, uint16_t VAR_3) {
    int VAR_4 = 0xff, VAR_5 = 0;

    VAR_3 &= 7;



    switch(VAR_3) {
    case 0: break;
    case 1: VAR_4 = VAR_5 ? VAR_2->hob_feature : VAR_2->error; break;
    case 2: VAR_4 = VAR_5 ? VAR_2->hob_nsector : VAR_2->nsector & 0xff; break;
    case 3: VAR_4 = VAR_5 ? VAR_2->hob_sector : VAR_2->sector; break;
    case 4: VAR_4 = VAR_5 ? VAR_2->hob_lcyl : VAR_2->lcyl; break;
    case 5: VAR_4 = VAR_5 ? VAR_2->hob_hcyl : VAR_2->hcyl; break;
    case 6: VAR_4 = VAR_2->select; break;
    default:
    case 7: VAR_4 = VAR_2->status; break;
    }

    if (VAR_0)
        FUNC_0(VAR_1, "ide: get: addr: %04x, ret: %02x\n", VAR_3, VAR_4);

    return VAR_4;
}
