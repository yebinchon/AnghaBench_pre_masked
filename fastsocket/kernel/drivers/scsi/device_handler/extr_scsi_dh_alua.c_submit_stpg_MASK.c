
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct request {int* cmd; int* sense; int q; struct alua_dh_data* end_io_data; scalar_t__ sense_len; int cmd_len; } ;
struct alua_dh_data {int* buff; int group_id; int* sense; scalar_t__ senselen; struct scsi_device* sdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *,struct request*,int,int ) ;
 struct request* FUNC_2 (struct scsi_device*,int*,int,int ) ;
 int FUNC_3 (int*,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static unsigned FUNC_4(struct alua_dh_data *VAR_8)
{
 struct request *VAR_9;
 int VAR_10 = 8;
 struct scsi_device *VAR_11 = VAR_8->sdev;


 FUNC_3(VAR_8->buff, 0, VAR_10);
 VAR_8->buff[4] = VAR_5 & 0x0f;
 VAR_8->buff[6] = (VAR_8->group_id >> 8) & 0xff;
 VAR_8->buff[7] = VAR_8->group_id & 0xff;

 VAR_9 = FUNC_2(VAR_11, VAR_8->buff, VAR_10, VAR_6);
 if (!VAR_9)
  return VAR_3;


 VAR_9->cmd[0] = VAR_0;
 VAR_9->cmd[1] = VAR_1;
 VAR_9->cmd[6] = (VAR_10 >> 24) & 0xff;
 VAR_9->cmd[7] = (VAR_10 >> 16) & 0xff;
 VAR_9->cmd[8] = (VAR_10 >> 8) & 0xff;
 VAR_9->cmd[9] = VAR_10 & 0xff;
 VAR_9->cmd_len = FUNC_0(VAR_0);

 VAR_9->sense = VAR_8->sense;
 FUNC_3(VAR_9->sense, 0, VAR_4);
 VAR_9->sense_len = VAR_8->senselen = 0;
 VAR_9->end_io_data = VAR_8;

 FUNC_1(VAR_9->q, ((void*)0), VAR_9, 1, VAR_7);
 return VAR_2;
}
