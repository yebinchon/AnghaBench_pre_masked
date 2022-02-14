
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct request {int cmd_len; int * cmd; int retries; int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_device*,struct request*) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_3, struct request *VAR_4)
{
 VAR_4->timeout = VAR_0;
 VAR_4->retries = VAR_1;
 VAR_4->cmd[0] = VAR_2;
 VAR_4->cmd_len = 10;

 return FUNC_0(VAR_3, VAR_4);
}
