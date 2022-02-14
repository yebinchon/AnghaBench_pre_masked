
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_taskfile {int command; int feature; int lbal; int lbam; int lbah; int device; int hob_lbal; int hob_lbam; int hob_lbah; int hob_feature; int nsect; int hob_nsect; int ctl; } ;



void FUNC_0(const struct ata_taskfile *VAR_0, u8 VAR_1, int VAR_2, u8 *VAR_3)
{
 VAR_3[0] = 0x27;
 VAR_3[1] = VAR_1 & 0xf;
 if (VAR_2)
  VAR_3[1] |= (1 << 7);

 VAR_3[2] = VAR_0->command;
 VAR_3[3] = VAR_0->feature;

 VAR_3[4] = VAR_0->lbal;
 VAR_3[5] = VAR_0->lbam;
 VAR_3[6] = VAR_0->lbah;
 VAR_3[7] = VAR_0->device;

 VAR_3[8] = VAR_0->hob_lbal;
 VAR_3[9] = VAR_0->hob_lbam;
 VAR_3[10] = VAR_0->hob_lbah;
 VAR_3[11] = VAR_0->hob_feature;

 VAR_3[12] = VAR_0->nsect;
 VAR_3[13] = VAR_0->hob_nsect;
 VAR_3[14] = 0;
 VAR_3[15] = VAR_0->ctl;

 VAR_3[16] = 0;
 VAR_3[17] = 0;
 VAR_3[18] = 0;
 VAR_3[19] = 0;
}
