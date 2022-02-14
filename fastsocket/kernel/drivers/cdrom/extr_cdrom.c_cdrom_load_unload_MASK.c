
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_command {int* cmd; int timeout; } ;
struct cdrom_device_info {int sanyo_slot; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct packet_command*,int *,int ,int ) ;
 int FUNC_2 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_3(struct cdrom_device_info *VAR_5, int VAR_6)
{
 struct packet_command VAR_7;

 FUNC_0(VAR_0, "entering cdrom_load_unload()\n");
 if (VAR_5->sanyo_slot && VAR_6 < 0)
  return 0;

 FUNC_1(&VAR_7, ((void*)0), 0, VAR_1);
 VAR_7.cmd[0] = VAR_2;
 VAR_7.cmd[4] = 2 + (VAR_6 >= 0);
 VAR_7.cmd[8] = VAR_6;
 VAR_7.timeout = 60 * VAR_4;




 if (VAR_5->sanyo_slot && -1 < VAR_6) {
  VAR_7.cmd[0] = VAR_3;
  VAR_7.cmd[7] = VAR_6;
  VAR_7.cmd[4] = VAR_7.cmd[8] = 0;
  VAR_5->sanyo_slot = VAR_6 ? VAR_6 : 3;
 }

 return VAR_5->ops->generic_packet(VAR_5, &VAR_7);
}
