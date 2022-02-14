
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ata_taskfile {unsigned int flags; scalar_t__ ctl; int feature; int nsect; int lbal; int lbam; int lbah; scalar_t__ device; scalar_t__ hob_lbah; scalar_t__ hob_lbam; scalar_t__ hob_lbal; scalar_t__ hob_nsect; scalar_t__ hob_feature; } ;
struct ata_ioports {int device_addr; int lbah_addr; int lbam_addr; int lbal_addr; int nsect_addr; int feature_addr; int ctl_addr; } ;
struct ata_port {scalar_t__ last_ctl; struct ata_ioports ioaddr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_3, const struct ata_taskfile *VAR_4)
{
 struct ata_ioports *VAR_5 = &VAR_3->ioaddr;
 unsigned int VAR_6 = VAR_4->flags & VAR_1;

 if (VAR_4->ctl != VAR_3->last_ctl) {
  FUNC_1(VAR_4->ctl, VAR_5->ctl_addr);
  VAR_3->last_ctl = VAR_4->ctl;
  FUNC_0(VAR_3);
 }
 if (VAR_6 && (VAR_4->flags & VAR_2)) {
  FUNC_2(VAR_4->feature | (((u16)VAR_4->hob_feature) << 8),
         VAR_5->feature_addr);
  FUNC_2(VAR_4->nsect | (((u16)VAR_4->hob_nsect) << 8),
         VAR_5->nsect_addr);
  FUNC_2(VAR_4->lbal | (((u16)VAR_4->hob_lbal) << 8),
         VAR_5->lbal_addr);
  FUNC_2(VAR_4->lbam | (((u16)VAR_4->hob_lbam) << 8),
         VAR_5->lbam_addr);
  FUNC_2(VAR_4->lbah | (((u16)VAR_4->hob_lbah) << 8),
         VAR_5->lbah_addr);
 } else if (VAR_6) {
  FUNC_2(VAR_4->feature, VAR_5->feature_addr);
  FUNC_2(VAR_4->nsect, VAR_5->nsect_addr);
  FUNC_2(VAR_4->lbal, VAR_5->lbal_addr);
  FUNC_2(VAR_4->lbam, VAR_5->lbam_addr);
  FUNC_2(VAR_4->lbah, VAR_5->lbah_addr);
 }

 if (VAR_4->flags & VAR_0)
  FUNC_1(VAR_4->device, VAR_5->device_addr);

 FUNC_0(VAR_3);
}
