
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct request {int* cmd; scalar_t__ sense_len; int errors; int q; int sense; int cmd_len; } ;
struct alua_dh_data {int bufflen; scalar_t__ senselen; int sense; int buff; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *,struct request*,int) ;
 int FUNC_2 (struct request*) ;
 struct request* FUNC_3 (struct scsi_device*,int ,int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,struct scsi_device*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_8, struct alua_dh_data *VAR_9)
{
 struct request *VAR_10;
 int VAR_11 = VAR_6;

 VAR_10 = FUNC_3(VAR_8, VAR_9->buff, VAR_9->bufflen, VAR_4);
 if (!VAR_10)
  goto done;


 VAR_10->cmd[0] = VAR_2;
 VAR_10->cmd[1] = 1;
 VAR_10->cmd[2] = 0x83;
 VAR_10->cmd[4] = VAR_9->bufflen;
 VAR_10->cmd_len = FUNC_0(VAR_2);

 VAR_10->sense = VAR_9->sense;
 FUNC_4(VAR_10->sense, 0, VAR_7);
 VAR_10->sense_len = VAR_9->senselen = 0;

 VAR_11 = FUNC_1(VAR_10->q, ((void*)0), VAR_10, 1);
 if (VAR_11 == -VAR_1) {
  FUNC_5(VAR_3, VAR_8,
       "%s: evpd inquiry failed with %x\n",
       VAR_0, VAR_10->errors);
  VAR_9->senselen = VAR_10->sense_len;
  VAR_11 = VAR_5;
 }
 FUNC_2(VAR_10);
done:
 return VAR_11;
}
