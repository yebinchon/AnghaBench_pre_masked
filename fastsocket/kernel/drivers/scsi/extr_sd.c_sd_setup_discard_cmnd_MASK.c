
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {int provisioning_mode; TYPE_1__* device; } ;
struct scsi_device {int sector_size; } ;
struct request {int* cmd; int cmd_len; unsigned int __data_len; int * buffer; int timeout; int rq_disk; } ;
struct page {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {unsigned int sector_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct request*,struct page*,unsigned int) ;
 unsigned int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 unsigned int FUNC_5 (struct request*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*,int ,int) ;
 void* FUNC_8 (struct page*) ;
 int FUNC_9 (unsigned int,char*) ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int,char*) ;
 struct scsi_disk* FUNC_12 (int ) ;
 int FUNC_13 (struct scsi_device*,struct request*) ;

__attribute__((used)) static int FUNC_14(struct scsi_device *VAR_9, struct request *VAR_10)
{
 struct scsi_disk *VAR_11 = FUNC_12(VAR_10->rq_disk);
 sector_t VAR_12 = FUNC_4(VAR_10);
 unsigned int VAR_13 = FUNC_5(VAR_10);
 unsigned int VAR_14 = FUNC_3(VAR_10);
 unsigned int VAR_15;
 int VAR_16;
 char *VAR_17;
 struct page *VAR_18;

 VAR_12 >>= FUNC_6(VAR_9->sector_size) - 9;
 VAR_13 >>= FUNC_6(VAR_9->sector_size) - 9;
 VAR_10->timeout = VAR_4;

 FUNC_7(VAR_10->cmd, 0, VAR_10->cmd_len);

 VAR_18 = FUNC_1(VAR_3 | VAR_8);
 if (!VAR_18)
  return VAR_0;

 switch (VAR_11->provisioning_mode) {
 case 131:
  VAR_17 = FUNC_8(VAR_18);

  VAR_10->cmd_len = 10;
  VAR_10->cmd[0] = VAR_5;
  VAR_10->cmd[8] = 24;

  FUNC_9(6 + 16, &VAR_17[0]);
  FUNC_9(16, &VAR_17[2]);
  FUNC_11(VAR_12, &VAR_17[8]);
  FUNC_10(VAR_13, &VAR_17[16]);

  VAR_15 = 24;
  break;

 case 129:
  VAR_10->cmd_len = 16;
  VAR_10->cmd[0] = VAR_7;
  VAR_10->cmd[1] = 0x8;
  FUNC_11(VAR_12, &VAR_10->cmd[2]);
  FUNC_10(VAR_13, &VAR_10->cmd[10]);

  VAR_15 = VAR_11->device->sector_size;
  break;

 case 130:
 case 128:
  VAR_10->cmd_len = 10;
  VAR_10->cmd[0] = VAR_6;
  if (VAR_11->provisioning_mode == 130)
   VAR_10->cmd[1] = 0x8;
  FUNC_10(VAR_12, &VAR_10->cmd[2]);
  FUNC_9(VAR_13, &VAR_10->cmd[7]);

  VAR_15 = VAR_11->device->sector_size;
  break;

 default:
  VAR_16 = VAR_1;
  goto out;
 }

 FUNC_2(VAR_10, VAR_18, VAR_15);
 VAR_16 = FUNC_13(VAR_9, VAR_10);
 VAR_10->buffer = FUNC_8(VAR_18);
 VAR_10->__data_len = VAR_14;

out:
 if (VAR_16 != VAR_2) {
  FUNC_0(VAR_18);
  VAR_10->buffer = ((void*)0);
 }
 return VAR_16;
}
