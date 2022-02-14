
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct scsi_device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 scalar_t__ FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (struct scsi_device*) ;
 struct scsi_device* FUNC_2 (struct Scsi_Host*,int ,int ,int ,int *) ;
 int FUNC_3 (struct scsi_device*) ;

int FUNC_4(struct Scsi_Host *VAR_0, uint VAR_1,
      uint VAR_2, uint VAR_3)
{
 struct scsi_device *VAR_4 =
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_3(VAR_4);
 return 0;
}
