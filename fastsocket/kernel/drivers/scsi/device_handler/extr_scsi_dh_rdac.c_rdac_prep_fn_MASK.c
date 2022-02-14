
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct request {int cmd_flags; } ;
struct rdac_dh_data {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct rdac_dh_data* FUNC_0 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_4, struct request *VAR_5)
{
 struct rdac_dh_data *VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = VAR_1;

 if (VAR_6->state != VAR_2) {
  VAR_7 = VAR_0;
  VAR_5->cmd_flags |= VAR_3;
 }
 return VAR_7;

}
