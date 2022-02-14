
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int queue_depth; int tagged_supported; } ;
struct domain_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct domain_device*) ;
 int FUNC_1 (struct scsi_device*,int ) ;
 int FUNC_2 (struct scsi_device*,int) ;
 int FUNC_3 (struct scsi_device*,int) ;
 struct domain_device* FUNC_4 (struct scsi_device*) ;

int FUNC_5(struct scsi_device *VAR_1, int VAR_2)
{
 struct domain_device *VAR_3 = FUNC_4(VAR_1);

 if (FUNC_0(VAR_3))
  return -VAR_0;

 if (!VAR_1->tagged_supported)
  return 0;

 FUNC_2(VAR_1, 1);

 FUNC_3(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_1->queue_depth);

 return VAR_2;
}
