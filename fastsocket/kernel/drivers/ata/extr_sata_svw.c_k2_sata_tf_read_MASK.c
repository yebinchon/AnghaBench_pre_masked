
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ata_taskfile {int feature; int nsect; int lbal; int lbam; int lbah; int flags; int hob_feature; int hob_nsect; int hob_lbal; int hob_lbam; int hob_lbah; void* device; int command; } ;
struct ata_ioports {int lbah_addr; int lbam_addr; int lbal_addr; int nsect_addr; int error_addr; int device_addr; } ;
struct ata_port {struct ata_ioports ioaddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_1, struct ata_taskfile *VAR_2)
{
 struct ata_ioports *VAR_3 = &VAR_1->ioaddr;
 u16 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_2->command = FUNC_0(VAR_1);
 VAR_2->device = FUNC_1(VAR_3->device_addr);
 VAR_8 = FUNC_1(VAR_3->error_addr);
 VAR_4 = FUNC_1(VAR_3->nsect_addr);
 VAR_5 = FUNC_1(VAR_3->lbal_addr);
 VAR_6 = FUNC_1(VAR_3->lbam_addr);
 VAR_7 = FUNC_1(VAR_3->lbah_addr);

 VAR_2->feature = VAR_8;
 VAR_2->nsect = VAR_4;
 VAR_2->lbal = VAR_5;
 VAR_2->lbam = VAR_6;
 VAR_2->lbah = VAR_7;

 if (VAR_2->flags & VAR_0) {
  VAR_2->hob_feature = VAR_8 >> 8;
  VAR_2->hob_nsect = VAR_4 >> 8;
  VAR_2->hob_lbal = VAR_5 >> 8;
  VAR_2->hob_lbam = VAR_6 >> 8;
  VAR_2->hob_lbah = VAR_7 >> 8;
 }
}
