
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct ata_port {int dummy; } ;
struct ata_device {int dummy; } ;


 struct ata_device* FUNC_0 (struct ata_port*,struct scsi_device const*) ;
 int FUNC_1 (struct ata_device*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct ata_device *
FUNC_3(struct ata_port *VAR_0, const struct scsi_device *VAR_1)
{
 struct ata_device *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (FUNC_2(!VAR_2 || !FUNC_1(VAR_2)))
  return ((void*)0);

 return VAR_2;
}
