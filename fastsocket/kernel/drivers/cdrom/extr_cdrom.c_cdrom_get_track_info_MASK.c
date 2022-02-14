
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int track_information_length; } ;
typedef TYPE_1__ track_information ;
struct packet_command {int* cmd; int quiet; int buflen; } ;
struct cdrom_device_ops {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;
struct cdrom_device_info {struct cdrom_device_ops* ops; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct packet_command*,TYPE_1__*,int,int ) ;
 int FUNC_2 (struct cdrom_device_info*,struct packet_command*) ;
 int FUNC_3 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_4(struct cdrom_device_info *VAR_2, __u16 VAR_3, __u8 VAR_4,
    track_information *VAR_5)
{
 struct cdrom_device_ops *VAR_6 = VAR_2->ops;
 struct packet_command VAR_7;
 int VAR_8, VAR_9;

 FUNC_1(&VAR_7, VAR_5, 8, VAR_0);
 VAR_7.cmd[0] = VAR_1;
 VAR_7.cmd[1] = VAR_4 & 3;
 VAR_7.cmd[4] = (VAR_3 & 0xff00) >> 8;
 VAR_7.cmd[5] = VAR_3 & 0xff;
 VAR_7.cmd[8] = 8;
 VAR_7.quiet = 1;

 if ((VAR_8 = VAR_6->generic_packet(VAR_2, &VAR_7)))
  return VAR_8;

 VAR_9 = FUNC_0(VAR_5->track_information_length) +
       sizeof(VAR_5->track_information_length);

 if (VAR_9 > sizeof(track_information))
  VAR_9 = sizeof(track_information);

 VAR_7.cmd[8] = VAR_7.buflen = VAR_9;
 if ((VAR_8 = VAR_6->generic_packet(VAR_2, &VAR_7)))
  return VAR_8;


 return VAR_9;
}
