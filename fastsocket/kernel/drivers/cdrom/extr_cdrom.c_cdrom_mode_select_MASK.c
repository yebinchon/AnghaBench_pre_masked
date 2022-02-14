
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {int* cmd; int* buffer; int buflen; int data_direction; } ;
struct cdrom_device_ops {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;
struct cdrom_device_info {struct cdrom_device_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct cdrom_device_info*,struct packet_command*) ;

int FUNC_2(struct cdrom_device_info *VAR_2,
        struct packet_command *VAR_3)
{
 struct cdrom_device_ops *VAR_4 = VAR_2->ops;

 FUNC_0(VAR_3->cmd, 0, sizeof(VAR_3->cmd));
 FUNC_0(VAR_3->buffer, 0, 2);
 VAR_3->cmd[0] = VAR_1;
 VAR_3->cmd[1] = 0x10;
 VAR_3->cmd[7] = VAR_3->buflen >> 8;
 VAR_3->cmd[8] = VAR_3->buflen & 0xff;
 VAR_3->data_direction = VAR_0;
 return VAR_4->generic_packet(VAR_2, VAR_3);
}
