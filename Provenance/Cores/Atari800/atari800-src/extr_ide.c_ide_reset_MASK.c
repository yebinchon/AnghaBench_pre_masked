
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_device {int feature; int error; int nsector; int sector; int lcyl; int hcyl; int select; int status; scalar_t__ media_changed; int (* end_transfer_func ) (struct ide_device*) ;scalar_t__ is_cdrom; scalar_t__ lba48; scalar_t__ hob_hcyl; scalar_t__ hob_lcyl; scalar_t__ hob_nsector; scalar_t__ hob_sector; scalar_t__ hob_feature; scalar_t__ mult_sectors; scalar_t__ is_cf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ide_device*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct ide_device *VAR_5) {
    if (VAR_0) FUNC_0(VAR_4, "ide: reset\n");

    if (VAR_5->is_cf) VAR_5->mult_sectors = 0;
    else VAR_5->mult_sectors = VAR_1;


    VAR_5->feature = VAR_5->error = VAR_5->nsector = VAR_5->sector = VAR_5->lcyl = VAR_5->hcyl = 0;


    VAR_5->hob_feature = VAR_5->hob_sector = VAR_5->hob_nsector =
    VAR_5->hob_lcyl = VAR_5->hob_hcyl = VAR_5->lba48 = 0;

    VAR_5->select = 0xa0;
    VAR_5->status = VAR_2 | VAR_3;



    VAR_5->select &= 0xf0;
    VAR_5->nsector = VAR_5->sector = 1;
    if (VAR_5->is_cdrom) {
        VAR_5->lcyl = 0x14;
        VAR_5->hcyl = 0xeb;
    } else {
        VAR_5->lcyl = VAR_5->hcyl = 0;
    }

    VAR_5->end_transfer_func = FUNC_1;
    FUNC_1(VAR_5);
    VAR_5->media_changed = 0;
}
