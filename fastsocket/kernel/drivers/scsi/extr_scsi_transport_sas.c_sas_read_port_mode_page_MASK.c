
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_mode_data {int header_length; int block_descriptor_length; } ;
struct scsi_device {int dummy; } ;
struct sas_end_device {int ready_led_meaning; char I_T_nexus_loss_timeout; char initiator_response_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 struct sas_end_device* FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (struct scsi_device*,int,int,char*,int,int,int,struct scsi_mode_data*,int *) ;
 int FUNC_4 (int) ;

int FUNC_5(struct scsi_device *VAR_5)
{
 char *VAR_6 = FUNC_1(VAR_0, VAR_3), *VAR_7;
 struct sas_end_device *VAR_8 = FUNC_2(VAR_5);
 struct scsi_mode_data VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_6)
  return -VAR_2;

 VAR_10 = FUNC_3(VAR_5, 1, 0x19, VAR_6, VAR_0, 30*VAR_4, 3,
         &VAR_9, ((void*)0));

 VAR_11 = -VAR_1;
 if (!FUNC_4(VAR_10))
  goto out;

 VAR_7 = VAR_6 + VAR_9.header_length +
  VAR_9.block_descriptor_length;

 if (VAR_7 - VAR_6 > VAR_0 - 8)
  goto out;

 VAR_11 = 0;

 VAR_8->ready_led_meaning = VAR_7[2] & 0x10 ? 1 : 0;
 VAR_8->I_T_nexus_loss_timeout = (VAR_7[4] << 8) + VAR_7[5];
 VAR_8->initiator_response_timeout = (VAR_7[6] << 8) + VAR_7[7];

 out:
 FUNC_0(VAR_6);
 return VAR_11;
}
