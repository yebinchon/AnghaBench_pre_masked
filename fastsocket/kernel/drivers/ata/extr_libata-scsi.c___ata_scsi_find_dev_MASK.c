
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int channel; int id; scalar_t__ lun; } ;
struct ata_port {int dummy; } ;
struct ata_device {int dummy; } ;


 struct ata_device* FUNC_0 (struct ata_port*,int) ;
 int FUNC_1 (struct ata_port*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct ata_device *FUNC_3(struct ata_port *VAR_0,
           const struct scsi_device *VAR_1)
{
 int VAR_2;


 if (!FUNC_1(VAR_0)) {
  if (FUNC_2(VAR_1->channel || VAR_1->lun))
   return ((void*)0);
  VAR_2 = VAR_1->id;
 } else {
  if (FUNC_2(VAR_1->id || VAR_1->lun))
   return ((void*)0);
  VAR_2 = VAR_1->channel;
 }

 return FUNC_0(VAR_0, VAR_2);
}
