
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_command {int* cmd; int quiet; } ;
struct mrw_feature_desc {int write; int feature_code; } ;
struct feature_header {int dummy; } ;
struct cdrom_device_info {TYPE_1__* ops; } ;
typedef int buffer ;
struct TYPE_2__ {int (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cdrom_device_info*) ;
 int FUNC_2 (struct packet_command*,unsigned char*,int,int ) ;
 int FUNC_3 (struct cdrom_device_info*,struct packet_command*) ;

__attribute__((used)) static int FUNC_4(struct cdrom_device_info *VAR_3, int *VAR_4)
{
 struct packet_command VAR_5;
 struct mrw_feature_desc *VAR_6;
 unsigned char VAR_7[16];
 int VAR_8;

 *VAR_4 = 0;

 FUNC_2(&VAR_5, VAR_7, sizeof(VAR_7), VAR_1);

 VAR_5.cmd[0] = VAR_2;
 VAR_5.cmd[3] = VAR_0;
 VAR_5.cmd[8] = sizeof(VAR_7);
 VAR_5.quiet = 1;

 if ((VAR_8 = VAR_3->ops->generic_packet(VAR_3, &VAR_5)))
  return VAR_8;

 VAR_6 = (struct mrw_feature_desc *)&VAR_7[sizeof(struct feature_header)];
 if (FUNC_0(VAR_6->feature_code) != VAR_0)
  return 1;
 *VAR_4 = VAR_6->write;

 if ((VAR_8 = FUNC_1(VAR_3))) {
  *VAR_4 = 0;
  return VAR_8;
 }

 return 0;
}
