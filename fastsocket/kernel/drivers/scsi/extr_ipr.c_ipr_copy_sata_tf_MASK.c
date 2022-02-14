
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ioarcb_ata_regs {int ctl; int hob_lbah; int hob_lbam; int hob_lbal; int hob_nsect; int hob_feature; int command; int device; int lbah; int lbam; int lbal; int nsect; int feature; } ;
struct ata_taskfile {int ctl; int hob_lbah; int hob_lbam; int hob_lbal; int hob_nsect; int hob_feature; int command; int device; int lbah; int lbam; int lbal; int nsect; int feature; } ;



__attribute__((used)) static void FUNC_0(struct ipr_ioarcb_ata_regs *VAR_0,
        struct ata_taskfile *VAR_1)
{
 VAR_0->feature = VAR_1->feature;
 VAR_0->nsect = VAR_1->nsect;
 VAR_0->lbal = VAR_1->lbal;
 VAR_0->lbam = VAR_1->lbam;
 VAR_0->lbah = VAR_1->lbah;
 VAR_0->device = VAR_1->device;
 VAR_0->command = VAR_1->command;
 VAR_0->hob_feature = VAR_1->hob_feature;
 VAR_0->hob_nsect = VAR_1->hob_nsect;
 VAR_0->hob_lbal = VAR_1->hob_lbal;
 VAR_0->hob_lbam = VAR_1->hob_lbam;
 VAR_0->hob_lbah = VAR_1->hob_lbah;
 VAR_0->ctl = VAR_1->ctl;
}
