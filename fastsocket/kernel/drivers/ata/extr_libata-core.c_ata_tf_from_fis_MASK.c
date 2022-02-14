
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_taskfile {int hob_nsect; int nsect; int hob_lbah; int hob_lbam; int hob_lbal; int device; int lbah; int lbam; int lbal; int feature; int command; } ;



void FUNC_0(const u8 *VAR_0, struct ata_taskfile *VAR_1)
{
 VAR_1->command = VAR_0[2];
 VAR_1->feature = VAR_0[3];

 VAR_1->lbal = VAR_0[4];
 VAR_1->lbam = VAR_0[5];
 VAR_1->lbah = VAR_0[6];
 VAR_1->device = VAR_0[7];

 VAR_1->hob_lbal = VAR_0[8];
 VAR_1->hob_lbam = VAR_0[9];
 VAR_1->hob_lbah = VAR_0[10];

 VAR_1->nsect = VAR_0[12];
 VAR_1->hob_nsect = VAR_0[13];
}
