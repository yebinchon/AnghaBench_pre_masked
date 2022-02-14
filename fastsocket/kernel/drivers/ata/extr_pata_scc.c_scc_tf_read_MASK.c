
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {int flags; int ctl; void* hob_lbah; void* hob_lbam; void* hob_lbal; void* hob_nsect; void* hob_feature; void* device; void* lbah; void* lbam; void* lbal; void* nsect; void* feature; int command; } ;
struct ata_ioports {int ctl_addr; int lbah_addr; int lbam_addr; int lbal_addr; int nsect_addr; int error_addr; int device_addr; } ;
struct ata_port {int last_ctl; struct ata_ioports ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ata_port*) ;

__attribute__((used)) static void FUNC_3 (struct ata_port *VAR_2, struct ata_taskfile *VAR_3)
{
 struct ata_ioports *VAR_4 = &VAR_2->ioaddr;

 VAR_3->command = FUNC_2(VAR_2);
 VAR_3->feature = FUNC_0(VAR_4->error_addr);
 VAR_3->nsect = FUNC_0(VAR_4->nsect_addr);
 VAR_3->lbal = FUNC_0(VAR_4->lbal_addr);
 VAR_3->lbam = FUNC_0(VAR_4->lbam_addr);
 VAR_3->lbah = FUNC_0(VAR_4->lbah_addr);
 VAR_3->device = FUNC_0(VAR_4->device_addr);

 if (VAR_3->flags & VAR_1) {
  FUNC_1(VAR_4->ctl_addr, VAR_3->ctl | VAR_0);
  VAR_3->hob_feature = FUNC_0(VAR_4->error_addr);
  VAR_3->hob_nsect = FUNC_0(VAR_4->nsect_addr);
  VAR_3->hob_lbal = FUNC_0(VAR_4->lbal_addr);
  VAR_3->hob_lbam = FUNC_0(VAR_4->lbam_addr);
  VAR_3->hob_lbah = FUNC_0(VAR_4->lbah_addr);
  FUNC_1(VAR_4->ctl_addr, VAR_3->ctl);
  VAR_2->last_ctl = VAR_3->ctl;
 }
}
