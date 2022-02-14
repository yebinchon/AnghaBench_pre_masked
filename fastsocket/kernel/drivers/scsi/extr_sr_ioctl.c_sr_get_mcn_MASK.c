
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {int* cmd; char* buffer; int buflen; int timeout; int data_direction; } ;
struct cdrom_mcn {scalar_t__* medium_catalog_number; } ;
struct cdrom_device_info {int * handle; } ;
typedef int Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__*,char*,int) ;
 int FUNC_4 (struct packet_command*,int ,int) ;
 int FUNC_5 (int *,struct packet_command*) ;

int FUNC_6(struct cdrom_device_info *VAR_5, struct cdrom_mcn *VAR_6)
{
 Scsi_CD *VAR_7 = VAR_5->handle;
 struct packet_command VAR_8;
 char *VAR_9 = FUNC_2(32, VAR_2 | FUNC_0(VAR_7));
 int VAR_10;

 if (!VAR_9)
  return -VAR_1;

 FUNC_4(&VAR_8, 0, sizeof(struct packet_command));
 VAR_8.cmd[0] = VAR_3;
 VAR_8.cmd[2] = 0x40;
 VAR_8.cmd[3] = 0x02;
 VAR_8.cmd[8] = 24;
 VAR_8.buffer = VAR_9;
 VAR_8.buflen = 24;
 VAR_8.data_direction = VAR_0;
 VAR_8.timeout = VAR_4;
 VAR_10 = FUNC_5(VAR_7, &VAR_8);

 FUNC_3(VAR_6->medium_catalog_number, VAR_9 + 9, 13);
 VAR_6->medium_catalog_number[13] = 0;

 FUNC_1(VAR_9);
 return VAR_10;
}
