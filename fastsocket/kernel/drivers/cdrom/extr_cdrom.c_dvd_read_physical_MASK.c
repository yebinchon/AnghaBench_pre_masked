
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct packet_command {int* cmd; int buflen; int quiet; } ;
struct dvd_layer {unsigned char book_version; unsigned char book_type; unsigned char min_rate; unsigned char disc_size; unsigned char layer_type; unsigned char track_path; unsigned char nlayers; unsigned char track_density; unsigned char linear_density; unsigned char start_sector; unsigned char end_sector; unsigned char end_sector_l0; unsigned char bca; } ;
struct cdrom_device_ops {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;
struct cdrom_device_info {struct cdrom_device_ops* ops; } ;
struct TYPE_4__ {int layer_num; struct dvd_layer* layer; } ;
struct TYPE_5__ {int type; TYPE_1__ physical; } ;
typedef TYPE_2__ dvd_struct ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct packet_command*,unsigned char*,int,int ) ;
 int FUNC_1 (struct dvd_layer*,int ,int) ;
 int FUNC_2 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_3(struct cdrom_device_info *VAR_4, dvd_struct *VAR_5,
    struct packet_command *VAR_6)
{
 unsigned char VAR_7[21], *VAR_8;
 struct dvd_layer *VAR_9;
 struct cdrom_device_ops *VAR_10 = VAR_4->ops;
 int VAR_11, VAR_12 = VAR_5->physical.layer_num;

 if (VAR_12 >= VAR_1)
  return -VAR_2;

 FUNC_0(VAR_6, VAR_7, sizeof(VAR_7), VAR_0);
 VAR_6->cmd[0] = VAR_3;
 VAR_6->cmd[6] = VAR_12;
 VAR_6->cmd[7] = VAR_5->type;
 VAR_6->cmd[9] = VAR_6->buflen & 0xff;




 VAR_6->quiet = 1;

 VAR_11 = VAR_10->generic_packet(VAR_4, VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_8 = &VAR_7[4];
 VAR_9 = &VAR_5->physical.layer[VAR_12];





 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->book_version = VAR_8[0] & 0xf;
 VAR_9->book_type = VAR_8[0] >> 4;
 VAR_9->min_rate = VAR_8[1] & 0xf;
 VAR_9->disc_size = VAR_8[1] >> 4;
 VAR_9->layer_type = VAR_8[2] & 0xf;
 VAR_9->track_path = (VAR_8[2] >> 4) & 1;
 VAR_9->nlayers = (VAR_8[2] >> 5) & 3;
 VAR_9->track_density = VAR_8[3] & 0xf;
 VAR_9->linear_density = VAR_8[3] >> 4;
 VAR_9->start_sector = VAR_8[5] << 16 | VAR_8[6] << 8 | VAR_8[7];
 VAR_9->end_sector = VAR_8[9] << 16 | VAR_8[10] << 8 | VAR_8[11];
 VAR_9->end_sector_l0 = VAR_8[13] << 16 | VAR_8[14] << 8 | VAR_8[15];
 VAR_9->bca = VAR_8[16] >> 7;

 return 0;
}
