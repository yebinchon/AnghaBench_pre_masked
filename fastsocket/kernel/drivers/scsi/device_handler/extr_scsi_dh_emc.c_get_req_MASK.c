
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int request_queue; } ;
struct request {int* cmd; int cmd_flags; int q; int retries; int timeout; int cmd_type; int cmd_len; } ;
typedef int short_trespass ;
typedef int long_trespass ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;

 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct request* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (int ,struct request*,unsigned char*,int,int ) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (int ,struct scsi_device*,char*) ;

__attribute__((used)) static struct request *FUNC_7(struct scsi_device *VAR_11, int VAR_12,
    unsigned char *VAR_13)
{
 struct request *VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_2(VAR_11->request_queue,
   (VAR_12 != 130) ? VAR_10 : VAR_5, VAR_3);
 if (!VAR_14) {
  FUNC_6(VAR_4, VAR_11, "get_req: blk_get_request failed");
  return ((void*)0);
 }

 VAR_14->cmd_len = FUNC_1(VAR_12);
 VAR_14->cmd[0] = VAR_12;

 switch (VAR_12) {
 case 129:
  VAR_15 = sizeof(short_trespass);
  VAR_14->cmd[1] = 0x10;
  VAR_14->cmd[4] = VAR_15;
  break;
 case 128:
  VAR_15 = sizeof(long_trespass);
  VAR_14->cmd[1] = 0x10;
  VAR_14->cmd[8] = VAR_15;
  break;
 case 130:
  VAR_15 = VAR_0;
  VAR_14->cmd[4] = VAR_15;
  FUNC_5(VAR_13, 0, VAR_15);
  break;
 default:
  FUNC_0(1);
  break;
 }

 VAR_14->cmd_type = VAR_9;
 VAR_14->cmd_flags |= VAR_6 | VAR_8 |
    VAR_7;
 VAR_14->timeout = VAR_2;
 VAR_14->retries = VAR_1;

 if (FUNC_4(VAR_14->q, VAR_14, VAR_13, VAR_15, VAR_3)) {
  FUNC_3(VAR_14);
  return ((void*)0);
 }

 return VAR_14;
}
