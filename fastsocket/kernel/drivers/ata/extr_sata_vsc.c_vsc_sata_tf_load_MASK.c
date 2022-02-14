
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ata_taskfile {unsigned int flags; int ctl; int feature; int nsect; int lbal; int lbam; int lbah; int device; scalar_t__ hob_lbah; scalar_t__ hob_lbam; scalar_t__ hob_lbal; scalar_t__ hob_nsect; scalar_t__ hob_feature; } ;
struct ata_ioports {int device_addr; int lbah_addr; int lbam_addr; int lbal_addr; int nsect_addr; int feature_addr; } ;
struct ata_port {int last_ctl; struct ata_ioports ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_4, const struct ata_taskfile *VAR_5)
{
 struct ata_ioports *VAR_6 = &VAR_4->ioaddr;
 unsigned int VAR_7 = VAR_5->flags & VAR_2;







 if ((VAR_5->ctl & VAR_0) != (VAR_4->last_ctl & VAR_0)) {
  VAR_4->last_ctl = VAR_5->ctl;
  FUNC_1(VAR_4, VAR_5->ctl & VAR_0);
 }
 if (VAR_7 && (VAR_5->flags & VAR_3)) {
  FUNC_3(VAR_5->feature | (((u16)VAR_5->hob_feature) << 8),
         VAR_6->feature_addr);
  FUNC_3(VAR_5->nsect | (((u16)VAR_5->hob_nsect) << 8),
         VAR_6->nsect_addr);
  FUNC_3(VAR_5->lbal | (((u16)VAR_5->hob_lbal) << 8),
         VAR_6->lbal_addr);
  FUNC_3(VAR_5->lbam | (((u16)VAR_5->hob_lbam) << 8),
         VAR_6->lbam_addr);
  FUNC_3(VAR_5->lbah | (((u16)VAR_5->hob_lbah) << 8),
         VAR_6->lbah_addr);
 } else if (VAR_7) {
  FUNC_3(VAR_5->feature, VAR_6->feature_addr);
  FUNC_3(VAR_5->nsect, VAR_6->nsect_addr);
  FUNC_3(VAR_5->lbal, VAR_6->lbal_addr);
  FUNC_3(VAR_5->lbam, VAR_6->lbam_addr);
  FUNC_3(VAR_5->lbah, VAR_6->lbah_addr);
 }

 if (VAR_5->flags & VAR_1)
  FUNC_2(VAR_5->device, VAR_6->device_addr);

 FUNC_0(VAR_4);
}
