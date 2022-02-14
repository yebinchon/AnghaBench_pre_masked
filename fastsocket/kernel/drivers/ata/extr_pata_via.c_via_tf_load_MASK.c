
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_port {scalar_t__ cached_device; } ;
struct ata_taskfile {unsigned int flags; scalar_t__ ctl; scalar_t__ device; scalar_t__ hob_feature; scalar_t__ hob_nsect; scalar_t__ hob_lbal; scalar_t__ hob_lbam; scalar_t__ hob_lbah; scalar_t__ feature; scalar_t__ nsect; scalar_t__ lbal; scalar_t__ lbam; scalar_t__ lbah; } ;
struct ata_ioports {int lbah_addr; int lbam_addr; int lbal_addr; int nsect_addr; int feature_addr; int ctl_addr; int device_addr; } ;
struct ata_port {scalar_t__ last_ctl; struct via_port* private_data; struct ata_ioports ioaddr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_3, const struct ata_taskfile *VAR_4)
{
 struct ata_ioports *VAR_5 = &VAR_3->ioaddr;
 struct via_port *VAR_6 = VAR_3->private_data;
 unsigned int VAR_7 = VAR_4->flags & VAR_1;
 int VAR_8 = 0;

 if (VAR_4->ctl != VAR_3->last_ctl) {
  FUNC_3(VAR_4->ctl, VAR_5->ctl_addr);
  VAR_3->last_ctl = VAR_4->ctl;
  FUNC_2(VAR_3);
  VAR_8 = 1;
 }

 if (VAR_4->flags & VAR_0) {
  FUNC_3(VAR_4->device, VAR_5->device_addr);
  VAR_6->cached_device = VAR_4->device;
 } else if (VAR_8)
  FUNC_3(VAR_6->cached_device, VAR_5->device_addr);

 if (VAR_7 && (VAR_4->flags & VAR_2)) {
  FUNC_1(!VAR_5->ctl_addr);
  FUNC_3(VAR_4->hob_feature, VAR_5->feature_addr);
  FUNC_3(VAR_4->hob_nsect, VAR_5->nsect_addr);
  FUNC_3(VAR_4->hob_lbal, VAR_5->lbal_addr);
  FUNC_3(VAR_4->hob_lbam, VAR_5->lbam_addr);
  FUNC_3(VAR_4->hob_lbah, VAR_5->lbah_addr);
  FUNC_0("hob: feat 0x%X nsect 0x%X, lba 0x%X 0x%X 0x%X\n",
   VAR_4->hob_feature,
   VAR_4->hob_nsect,
   VAR_4->hob_lbal,
   VAR_4->hob_lbam,
   VAR_4->hob_lbah);
 }

 if (VAR_7) {
  FUNC_3(VAR_4->feature, VAR_5->feature_addr);
  FUNC_3(VAR_4->nsect, VAR_5->nsect_addr);
  FUNC_3(VAR_4->lbal, VAR_5->lbal_addr);
  FUNC_3(VAR_4->lbam, VAR_5->lbam_addr);
  FUNC_3(VAR_4->lbah, VAR_5->lbah_addr);
  FUNC_0("feat 0x%X nsect 0x%X lba 0x%X 0x%X 0x%X\n",
   VAR_4->feature,
   VAR_4->nsect,
   VAR_4->lbal,
   VAR_4->lbam,
   VAR_4->lbah);
 }

 FUNC_2(VAR_3);
}
