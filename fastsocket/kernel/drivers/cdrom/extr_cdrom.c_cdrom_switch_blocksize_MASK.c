
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {int block_desc_length; int block_length_med; int block_length_lo; int* cmd; int buflen; char* buffer; int data_direction; } ;
struct modesel_head {int block_desc_length; int block_length_med; int block_length_lo; int* cmd; int buflen; char* buffer; int data_direction; } ;
struct cdrom_device_ops {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;
struct cdrom_device_info {struct cdrom_device_ops* ops; } ;
typedef int mh ;
typedef int cgc ;


 int VAR_0 ;
 int FUNC_0 (struct packet_command*,int ,int) ;
 int FUNC_1 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_1, int VAR_2)
{
 struct cdrom_device_ops *VAR_3 = VAR_1->ops;
 struct packet_command VAR_4;
 struct modesel_head VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.block_desc_length = 0x08;
 VAR_5.block_length_med = (VAR_2 >> 8) & 0xff;
 VAR_5.block_length_lo = VAR_2 & 0xff;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cmd[0] = 0x15;
 VAR_4.cmd[1] = 1 << 4;
 VAR_4.cmd[4] = 12;
 VAR_4.buflen = sizeof(VAR_5);
 VAR_4.buffer = (char *) &VAR_5;
 VAR_4.data_direction = VAR_0;
 VAR_5.block_desc_length = 0x08;
 VAR_5.block_length_med = (VAR_2 >> 8) & 0xff;
 VAR_5.block_length_lo = VAR_2 & 0xff;

 return VAR_3->generic_packet(VAR_1, &VAR_4);
}
