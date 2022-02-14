
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct packet_command {int dummy; } ;
struct cdrom_device_info {int dummy; } ;
struct TYPE_8__ {int type; } ;
typedef TYPE_1__ dvd_struct ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct cdrom_device_info*,TYPE_1__*,struct packet_command*) ;
 int FUNC_2 (struct cdrom_device_info*,TYPE_1__*,struct packet_command*) ;
 int FUNC_3 (struct cdrom_device_info*,TYPE_1__*,struct packet_command*) ;
 int FUNC_4 (struct cdrom_device_info*,TYPE_1__*,struct packet_command*) ;
 int FUNC_5 (struct cdrom_device_info*,TYPE_1__*,struct packet_command*) ;

__attribute__((used)) static int FUNC_6(struct cdrom_device_info *VAR_2, dvd_struct *VAR_3,
    struct packet_command *VAR_4)
{
 switch (VAR_3->type) {
 case 128:
  return FUNC_5(VAR_2, VAR_3, VAR_4);

 case 131:
  return FUNC_2(VAR_2, VAR_3, VAR_4);

 case 130:
  return FUNC_3(VAR_2, VAR_3, VAR_4);

 case 132:
  return FUNC_1(VAR_2, VAR_3, VAR_4);

 case 129:
  return FUNC_4(VAR_2, VAR_3, VAR_4);

 default:
  FUNC_0(VAR_0, ": Invalid DVD structure read requested (%d)\n",
     VAR_3->type);
  return -VAR_1;
 }
}
