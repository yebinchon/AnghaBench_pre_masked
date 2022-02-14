
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_command {int timeout; int * cmd; } ;
struct cdrom_device_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct packet_command*,int *,int ,int ) ;
 int FUNC_1 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_3)
{
 struct packet_command VAR_4;

 FUNC_0(&VAR_4, ((void*)0), 0, VAR_0);
 VAR_4.cmd[0] = VAR_1;

 VAR_4.timeout = 5 * 60 * VAR_2;

 return VAR_3->ops->generic_packet(VAR_3, &VAR_4);
}
