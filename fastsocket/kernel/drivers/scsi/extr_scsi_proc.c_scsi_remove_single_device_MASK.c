
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct scsi_device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct scsi_device* FUNC_0 (struct Scsi_Host*,int ,int ,int ) ;
 int FUNC_1 (struct scsi_device*) ;
 struct Scsi_Host* FUNC_2 (int ) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_5(uint VAR_1, uint VAR_2, uint VAR_3, uint VAR_4)
{
 struct scsi_device *VAR_5;
 struct Scsi_Host *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_6 = FUNC_2(VAR_1);
 if (!VAR_6)
  return VAR_7;
 VAR_5 = FUNC_0(VAR_6, VAR_2, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_4(VAR_5);
  FUNC_1(VAR_5);
  VAR_7 = 0;
 }

 FUNC_3(VAR_6);
 return VAR_7;
}
