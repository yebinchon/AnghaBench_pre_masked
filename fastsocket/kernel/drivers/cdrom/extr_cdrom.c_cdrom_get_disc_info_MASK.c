
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct packet_command {int* cmd; int buflen; int quiet; } ;
struct cdrom_device_ops {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;
struct cdrom_device_info {struct cdrom_device_ops* ops; } ;
struct TYPE_4__ {int disc_information_length; } ;
typedef TYPE_1__ disc_information ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct packet_command*,TYPE_1__*,int,int ) ;
 int FUNC_2 (struct cdrom_device_info*,struct packet_command*) ;
 int FUNC_3 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_4(struct cdrom_device_info *VAR_2, disc_information *VAR_3)
{
 struct cdrom_device_ops *VAR_4 = VAR_2->ops;
 struct packet_command VAR_5;
 int VAR_6, VAR_7;


 FUNC_1(&VAR_5, VAR_3, sizeof(*VAR_3), VAR_0);
 VAR_5.cmd[0] = VAR_1;
 VAR_5.cmd[8] = VAR_5.buflen = 2;
 VAR_5.quiet = 1;

 if ((VAR_6 = VAR_4->generic_packet(VAR_2, &VAR_5)))
  return VAR_6;




 VAR_7 = FUNC_0(VAR_3->disc_information_length) +
       sizeof(VAR_3->disc_information_length);

 if (VAR_7 > sizeof(disc_information))
  VAR_7 = sizeof(disc_information);

 VAR_5.cmd[8] = VAR_5.buflen = VAR_7;
 if ((VAR_6 = VAR_4->generic_packet(VAR_2, &VAR_5)))
  return VAR_6;


 return VAR_7;
}
