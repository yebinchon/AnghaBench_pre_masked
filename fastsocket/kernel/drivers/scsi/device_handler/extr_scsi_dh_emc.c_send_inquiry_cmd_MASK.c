
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int request_queue; } ;
struct request {int* cmd; scalar_t__ sense_len; int errors; int sense; } ;
struct clariion_dh_data {scalar_t__ senselen; int sense; int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,struct request*,int) ;
 int FUNC_1 (struct request*) ;
 struct request* FUNC_2 (struct scsi_device*,int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,struct scsi_device*,char*,int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_7, int VAR_8,
       struct clariion_dh_data *VAR_9)
{
 struct request *VAR_10 = FUNC_2(VAR_7, VAR_2, VAR_9->buffer);
 int VAR_11;

 if (!VAR_10)
  return VAR_5;

 VAR_10->sense = VAR_9->sense;
 FUNC_3(VAR_10->sense, 0, VAR_6);
 VAR_10->sense_len = VAR_9->senselen = 0;

 VAR_10->cmd[0] = VAR_2;
 if (VAR_8 != 0) {
  VAR_10->cmd[1] = 1;
  VAR_10->cmd[2] = VAR_8;
 }
 VAR_11 = FUNC_0(VAR_7->request_queue, ((void*)0), VAR_10, 1);
 if (VAR_11 == -VAR_1) {
  FUNC_4(VAR_3, VAR_7,
       "%s: failed to send %s INQUIRY: %x\n",
       VAR_0, VAR_8?"EVPD":"standard",
       VAR_10->errors);
  VAR_9->senselen = VAR_10->sense_len;
  VAR_11 = VAR_4;
 }

 FUNC_1(VAR_10);

 return VAR_11;
}
