
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int request_queue; } ;
struct request {int cmd_flags; scalar_t__ sense_len; int errors; int q; int sense; int timeout; int * cmd; int cmd_len; int cmd_type; } ;
struct hp_sw_dh_data {int path_state; int sense; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,int *,struct request*,int) ;
 struct request* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,struct scsi_device*,char*,int ,int ) ;
 int FUNC_6 (struct scsi_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_device *VAR_19, struct hp_sw_dh_data *VAR_20)
{
 struct request *VAR_21;
 int VAR_22;

retry:
 VAR_21 = FUNC_2(VAR_19->request_queue, VAR_18, VAR_1);
 if (!VAR_21)
  return VAR_15;

 VAR_21->cmd_type = VAR_10;
 VAR_21->cmd_flags |= VAR_7 | VAR_9 |
     VAR_8;
 VAR_21->cmd_len = FUNC_0(VAR_17);
 VAR_21->cmd[0] = VAR_17;
 VAR_21->timeout = VAR_5;
 VAR_21->sense = VAR_20->sense;
 FUNC_4(VAR_21->sense, 0, VAR_16);
 VAR_21->sense_len = 0;

 VAR_22 = FUNC_1(VAR_21->q, ((void*)0), VAR_21, 1);
 if (VAR_22 == -VAR_0) {
  if (VAR_21->sense_len > 0) {
   VAR_22 = FUNC_6(VAR_19, VAR_20->sense);
  } else {
   FUNC_5(VAR_6, VAR_19,
        "%s: sending tur failed with %x\n",
        VAR_2, VAR_21->errors);
   VAR_22 = VAR_13;
  }
 } else {
  VAR_20->path_state = VAR_3;
  VAR_22 = VAR_14;
 }
 if (VAR_22 == VAR_12) {
  FUNC_3(VAR_21);
  goto retry;
 }
 if (VAR_22 == VAR_11) {
  VAR_20->path_state = VAR_4;
  VAR_22 = VAR_14;
 }

 FUNC_3(VAR_21);

 return VAR_22;
}
