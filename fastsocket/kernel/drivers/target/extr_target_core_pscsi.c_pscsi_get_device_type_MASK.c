
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_device {int dummy; } ;
struct scsi_device {int type; } ;
struct pscsi_dev_virt {struct scsi_device* pdv_sd; } ;


 struct pscsi_dev_virt* FUNC_0 (struct se_device*) ;

__attribute__((used)) static u32 FUNC_1(struct se_device *VAR_0)
{
 struct pscsi_dev_virt *VAR_1 = FUNC_0(VAR_0);
 struct scsi_device *VAR_2 = VAR_1->pdv_sd;

 return VAR_2->type;
}
