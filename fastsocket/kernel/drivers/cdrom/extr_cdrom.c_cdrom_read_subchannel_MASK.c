
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct packet_command {int* cmd; int* buffer; } ;
struct TYPE_7__ {int minute; int second; int frame; } ;
struct TYPE_8__ {TYPE_3__ msf; } ;
struct TYPE_5__ {int minute; int second; int frame; } ;
struct TYPE_6__ {TYPE_1__ msf; } ;
struct cdrom_subchnl {int cdsc_audiostatus; int cdsc_ctrl; int cdsc_trk; int cdsc_ind; TYPE_4__ cdsc_absaddr; TYPE_2__ cdsc_reladdr; int cdsc_format; } ;
struct cdrom_device_ops {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;
struct cdrom_device_info {struct cdrom_device_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct packet_command*,char*,int,int ) ;
 int FUNC_1 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_3,
     struct cdrom_subchnl *VAR_4, int VAR_5)
{
 struct cdrom_device_ops *VAR_6 = VAR_3->ops;
 struct packet_command VAR_7;
 char VAR_8[32];
 int VAR_9;

 FUNC_0(&VAR_7, VAR_8, 16, VAR_1);
 VAR_7.cmd[0] = VAR_2;
 VAR_7.cmd[1] = 2;
 VAR_7.cmd[2] = 0x40;
 VAR_7.cmd[3] = VAR_5 ? 2 : 1;
 VAR_7.cmd[8] = 16;

 if ((VAR_9 = VAR_6->generic_packet(VAR_3, &VAR_7)))
  return VAR_9;

 VAR_4->cdsc_audiostatus = VAR_7.buffer[1];
 VAR_4->cdsc_format = VAR_0;
 VAR_4->cdsc_ctrl = VAR_7.buffer[5] & 0xf;
 VAR_4->cdsc_trk = VAR_7.buffer[6];
 VAR_4->cdsc_ind = VAR_7.buffer[7];

 VAR_4->cdsc_reladdr.msf.minute = VAR_7.buffer[13];
 VAR_4->cdsc_reladdr.msf.second = VAR_7.buffer[14];
 VAR_4->cdsc_reladdr.msf.frame = VAR_7.buffer[15];
 VAR_4->cdsc_absaddr.msf.minute = VAR_7.buffer[9];
 VAR_4->cdsc_absaddr.msf.second = VAR_7.buffer[10];
 VAR_4->cdsc_absaddr.msf.frame = VAR_7.buffer[11];

 return 0;
}
