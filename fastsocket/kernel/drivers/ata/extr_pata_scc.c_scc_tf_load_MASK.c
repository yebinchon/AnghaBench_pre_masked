
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {unsigned int flags; scalar_t__ ctl; scalar_t__ hob_feature; scalar_t__ hob_nsect; scalar_t__ hob_lbal; scalar_t__ hob_lbam; scalar_t__ hob_lbah; scalar_t__ feature; scalar_t__ nsect; scalar_t__ lbal; scalar_t__ lbam; scalar_t__ lbah; scalar_t__ device; } ;
struct ata_ioports {int device_addr; int lbah_addr; int lbam_addr; int lbal_addr; int nsect_addr; int feature_addr; int ctl_addr; } ;
struct ata_port {scalar_t__ last_ctl; struct ata_ioports ioaddr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3 (struct ata_port *VAR_3, const struct ata_taskfile *VAR_4)
{
 struct ata_ioports *VAR_5 = &VAR_3->ioaddr;
 unsigned int VAR_6 = VAR_4->flags & VAR_1;

 if (VAR_4->ctl != VAR_3->last_ctl) {
  FUNC_2(VAR_5->ctl_addr, VAR_4->ctl);
  VAR_3->last_ctl = VAR_4->ctl;
  FUNC_1(VAR_3);
 }

 if (VAR_6 && (VAR_4->flags & VAR_2)) {
  FUNC_2(VAR_5->feature_addr, VAR_4->hob_feature);
  FUNC_2(VAR_5->nsect_addr, VAR_4->hob_nsect);
  FUNC_2(VAR_5->lbal_addr, VAR_4->hob_lbal);
  FUNC_2(VAR_5->lbam_addr, VAR_4->hob_lbam);
  FUNC_2(VAR_5->lbah_addr, VAR_4->hob_lbah);
  FUNC_0("hob: feat 0x%X nsect 0x%X, lba 0x%X 0x%X 0x%X\n",
   VAR_4->hob_feature,
   VAR_4->hob_nsect,
   VAR_4->hob_lbal,
   VAR_4->hob_lbam,
   VAR_4->hob_lbah);
 }

 if (VAR_6) {
  FUNC_2(VAR_5->feature_addr, VAR_4->feature);
  FUNC_2(VAR_5->nsect_addr, VAR_4->nsect);
  FUNC_2(VAR_5->lbal_addr, VAR_4->lbal);
  FUNC_2(VAR_5->lbam_addr, VAR_4->lbam);
  FUNC_2(VAR_5->lbah_addr, VAR_4->lbah);
  FUNC_0("feat 0x%X nsect 0x%X lba 0x%X 0x%X 0x%X\n",
   VAR_4->feature,
   VAR_4->nsect,
   VAR_4->lbal,
   VAR_4->lbam,
   VAR_4->lbah);
 }

 if (VAR_4->flags & VAR_0) {
  FUNC_2(VAR_5->device_addr, VAR_4->device);
  FUNC_0("device 0x%X\n", VAR_4->device);
 }

 FUNC_1(VAR_3);
}
