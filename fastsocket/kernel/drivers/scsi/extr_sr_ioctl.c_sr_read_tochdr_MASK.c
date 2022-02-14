
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cd {int dummy; } ;
struct packet_command {int* cmd; unsigned char* buffer; int buflen; int quiet; int data_direction; int timeout; } ;
struct cdrom_tochdr {unsigned char cdth_trk0; unsigned char cdth_trk1; } ;
struct cdrom_device_info {struct scsi_cd* handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_cd*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int) ;
 int FUNC_3 (struct packet_command*,int ,int) ;
 int FUNC_4 (struct scsi_cd*,struct packet_command*) ;

__attribute__((used)) static int FUNC_5(struct cdrom_device_info *VAR_5,
  struct cdrom_tochdr *VAR_6)
{
 struct scsi_cd *VAR_7 = VAR_5->handle;
 struct packet_command VAR_8;
 int VAR_9;
 unsigned char *VAR_10;

 VAR_10 = FUNC_2(32, VAR_2 | FUNC_0(VAR_7));
 if (!VAR_10)
  return -VAR_1;

 FUNC_3(&VAR_8, 0, sizeof(struct packet_command));
 VAR_8.timeout = VAR_4;
 VAR_8.cmd[0] = VAR_3;
 VAR_8.cmd[8] = 12;
 VAR_8.buffer = VAR_10;
 VAR_8.buflen = 12;
 VAR_8.quiet = 1;
 VAR_8.data_direction = VAR_0;

 VAR_9 = FUNC_4(VAR_7, &VAR_8);

 VAR_6->cdth_trk0 = VAR_10[2];
 VAR_6->cdth_trk1 = VAR_10[3];

 FUNC_1(VAR_10);
 return VAR_9;
}
