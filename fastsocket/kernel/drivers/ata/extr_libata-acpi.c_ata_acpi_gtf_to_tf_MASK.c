
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {int flags; int command; int device; int lbah; int lbam; int lbal; int nsect; int feature; int protocol; } ;
struct ata_device {int dummy; } ;
struct ata_acpi_gtf {int * tf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_device*,struct ata_taskfile*) ;

__attribute__((used)) static void FUNC_1(struct ata_device *VAR_3,
          const struct ata_acpi_gtf *VAR_4,
          struct ata_taskfile *VAR_5)
{
 FUNC_0(VAR_3, VAR_5);

 VAR_5->flags |= VAR_2 | VAR_1;
 VAR_5->protocol = VAR_0;
 VAR_5->feature = VAR_4->tf[0];
 VAR_5->nsect = VAR_4->tf[1];
 VAR_5->lbal = VAR_4->tf[2];
 VAR_5->lbam = VAR_4->tf[3];
 VAR_5->lbah = VAR_4->tf[4];
 VAR_5->device = VAR_4->tf[5];
 VAR_5->command = VAR_4->tf[6];
}
