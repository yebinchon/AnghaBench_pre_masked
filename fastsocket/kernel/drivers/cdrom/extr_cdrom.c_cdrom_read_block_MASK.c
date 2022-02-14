
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {int* cmd; int buflen; } ;
struct cdrom_device_ops {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;
struct cdrom_device_info {struct cdrom_device_ops* ops; } ;





 int VAR_0 ;
 int FUNC_0 (int**,int ,int) ;
 int FUNC_1 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_1,
       struct packet_command *VAR_2,
       int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct cdrom_device_ops *VAR_7 = VAR_1->ops;

 FUNC_0(&VAR_2->cmd, 0, sizeof(VAR_2->cmd));
 VAR_2->cmd[0] = VAR_0;

 VAR_2->cmd[1] = VAR_5 << 2;

 VAR_2->cmd[2] = (VAR_3 >> 24) & 0xff;
 VAR_2->cmd[3] = (VAR_3 >> 16) & 0xff;
 VAR_2->cmd[4] = (VAR_3 >> 8) & 0xff;
 VAR_2->cmd[5] = VAR_3 & 0xff;

 VAR_2->cmd[6] = (VAR_4 >> 16) & 0xff;
 VAR_2->cmd[7] = (VAR_4 >> 8) & 0xff;
 VAR_2->cmd[8] = VAR_4 & 0xff;
 VAR_2->buflen = VAR_6 * VAR_4;


 switch (VAR_6) {
 case 129 : VAR_2->cmd[9] = 0x58; break;
 case 128 : VAR_2->cmd[9] = 0x78; break;
 case 130 : VAR_2->cmd[9] = 0xf8; break;
 default : VAR_2->cmd[9] = 0x10;
 }

 return VAR_7->generic_packet(VAR_1, VAR_2);
}
