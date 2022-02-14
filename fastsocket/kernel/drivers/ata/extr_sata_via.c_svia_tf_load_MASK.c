
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {scalar_t__ ctl; int flags; } ;
struct ata_port {scalar_t__ last_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*,struct ata_taskfile const*) ;

__attribute__((used)) static void FUNC_1(struct ata_port *VAR_1, const struct ata_taskfile *VAR_2)
{
 struct ata_taskfile VAR_3;

 if (VAR_2->ctl != VAR_1->last_ctl) {
  VAR_3 = *VAR_2;
  VAR_3.flags |= VAR_0;
  VAR_2 = &VAR_3;
 }
 FUNC_0(VAR_1, VAR_2);
}
