
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_command {int* cmd; int quiet; } ;
struct media_event_desc {int dummy; } ;
struct event_header {int notification_class; scalar_t__ nea; int data_len; } ;
struct cdrom_device_info {TYPE_1__* ops; } ;
typedef int buffer ;
struct TYPE_2__ {scalar_t__ (* generic_packet ) (struct cdrom_device_info*,struct packet_command*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct packet_command*,unsigned char*,int,int ) ;
 int FUNC_2 (struct media_event_desc*,unsigned char*,int) ;
 scalar_t__ FUNC_3 (struct cdrom_device_info*,struct packet_command*) ;

int FUNC_4(struct cdrom_device_info *VAR_2,
     struct media_event_desc *VAR_3)
{
 struct packet_command VAR_4;
 unsigned char VAR_5[8];
 struct event_header *VAR_6 = (struct event_header *) VAR_5;

 FUNC_1(&VAR_4, VAR_5, sizeof(VAR_5), VAR_0);
 VAR_4.cmd[0] = VAR_1;
 VAR_4.cmd[1] = 1;
 VAR_4.cmd[4] = 1 << 4;
 VAR_4.cmd[8] = sizeof(VAR_5);
 VAR_4.quiet = 1;

 if (VAR_2->ops->generic_packet(VAR_2, &VAR_4))
  return 1;

 if (FUNC_0(VAR_6->data_len) < sizeof(*VAR_3))
  return 1;

 if (VAR_6->nea || VAR_6->notification_class != 0x4)
  return 1;

 FUNC_2(VAR_3, &VAR_5[sizeof(*VAR_6)], sizeof(*VAR_3));
 return 0;
}
