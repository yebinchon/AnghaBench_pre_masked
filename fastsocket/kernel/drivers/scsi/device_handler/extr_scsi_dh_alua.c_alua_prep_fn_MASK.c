
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct request {int cmd_flags; } ;
struct alua_dh_data {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct alua_dh_data* FUNC_0 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_8, struct request *VAR_9)
{
 struct alua_dh_data *VAR_10 = FUNC_0(VAR_8);
 int VAR_11 = VAR_2;

 if (VAR_10->state == VAR_7)
  VAR_11 = VAR_0;
 else if (VAR_10->state != VAR_6 &&
   VAR_10->state != VAR_5 &&
   VAR_10->state != VAR_4) {
  VAR_11 = VAR_1;
  VAR_9->cmd_flags |= VAR_3;
 }
 return VAR_11;

}
