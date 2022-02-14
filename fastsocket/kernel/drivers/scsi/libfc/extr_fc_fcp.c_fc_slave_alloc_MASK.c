
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ tagged_supported; } ;
struct fc_rport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fc_rport*) ;
 int FUNC_1 (struct scsi_device*,int ) ;
 int FUNC_2 (struct scsi_device*,int ,int ) ;
 int FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_device*) ;
 struct fc_rport* FUNC_5 (int ) ;

int FUNC_6(struct scsi_device *VAR_2)
{
 struct fc_rport *VAR_3 = FUNC_5(FUNC_4(VAR_2));

 if (!VAR_3 || FUNC_0(VAR_3))
  return -VAR_0;

 if (VAR_2->tagged_supported)
  FUNC_1(VAR_2, VAR_1);
 else
  FUNC_2(VAR_2, FUNC_3(VAR_2),
     VAR_1);

 return 0;
}
