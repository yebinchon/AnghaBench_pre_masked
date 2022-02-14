
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_device {int select; int hcyl; int lcyl; int sector; int hob_sector; int hob_lcyl; int hob_hcyl; int heads; int sectors; int lba48; } ;
typedef int int64_t ;



__attribute__((used)) static void FUNC_0(struct ide_device *VAR_0, int64_t VAR_1) {
    unsigned int VAR_2, VAR_3;

    if (VAR_0->select & 0x40) {
        if (!VAR_0->lba48) {
            VAR_0->select = (VAR_0->select & 0xf0) | (VAR_1 >> 24);
            VAR_0->hcyl = VAR_1 >> 16 ;
            VAR_0->lcyl = VAR_1 >> 8 ;
            VAR_0->sector = VAR_1 ;
        } else {
            VAR_0->sector = VAR_1 ;
            VAR_0->lcyl = VAR_1 >> 8;
            VAR_0->hcyl = VAR_1 >> 16;
            VAR_0->hob_sector = VAR_1 >> 24;
            VAR_0->hob_lcyl = VAR_1 >> 32;
            VAR_0->hob_hcyl = VAR_1 >> 40;
        }
    } else {
        VAR_2 = VAR_1 / (VAR_0->heads * VAR_0->sectors);
        VAR_3 = VAR_1 % (VAR_0->heads * VAR_0->sectors);

        VAR_0->hcyl = VAR_2 >> 8;
        VAR_0->lcyl = VAR_2 ;
        VAR_0->select = (VAR_0->select & 0xf0) | ((VAR_3 / VAR_0->sectors) & 0x0f);
        VAR_0->sector = (VAR_3 % VAR_0->sectors) + 1;
    }
}
