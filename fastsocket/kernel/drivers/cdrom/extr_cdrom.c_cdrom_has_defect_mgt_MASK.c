
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_command {int* cmd; int quiet; } ;
struct feature_header {int dummy; } ;
struct cdrom_device_info {TYPE_1__* ops; } ;
typedef int buffer ;
typedef int __be16 ;
struct TYPE_2__ {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct packet_command*,char*,int,int ) ;
 int FUNC_2 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_3(struct cdrom_device_info *VAR_3)
{
 struct packet_command VAR_4;
 char VAR_5[16];
 __be16 *VAR_6;
 int VAR_7;

 FUNC_1(&VAR_4, VAR_5, sizeof(VAR_5), VAR_1);

 VAR_4.cmd[0] = VAR_2;
 VAR_4.cmd[3] = VAR_0;
 VAR_4.cmd[8] = sizeof(VAR_5);
 VAR_4.quiet = 1;

 if ((VAR_7 = VAR_3->ops->generic_packet(VAR_3, &VAR_4)))
  return VAR_7;

 VAR_6 = (__be16 *) &VAR_5[sizeof(struct feature_header)];
 if (FUNC_0(*VAR_6) == VAR_0)
  return 0;

 return 1;
}
