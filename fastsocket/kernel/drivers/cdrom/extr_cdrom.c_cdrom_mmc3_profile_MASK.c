
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_command {int* cmd; int quiet; } ;
struct cdrom_device_info {int mmc3_profile; TYPE_1__* ops; } ;
typedef int buffer ;
struct TYPE_2__ {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct packet_command*,char*,int,int ) ;
 int FUNC_1 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static void FUNC_2(struct cdrom_device_info *VAR_2)
{
 struct packet_command VAR_3;
 char VAR_4[32];
 int VAR_5, VAR_6;

 FUNC_0(&VAR_3, VAR_4, sizeof(VAR_4), VAR_0);

 VAR_3.cmd[0] = VAR_1;
 VAR_3.cmd[1] = 0;
 VAR_3.cmd[2] = VAR_3.cmd[3] = 0;
 VAR_3.cmd[8] = sizeof(VAR_4);
 VAR_3.quiet = 1;

 if ((VAR_5 = VAR_2->ops->generic_packet(VAR_2, &VAR_3)))
  VAR_6 = 0xffff;
 else
  VAR_6 = (VAR_4[6] << 8) | VAR_4[7];

 VAR_2->mmc3_profile = VAR_6;
}
