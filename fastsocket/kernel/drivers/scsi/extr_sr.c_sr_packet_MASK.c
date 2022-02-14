
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {scalar_t__ timeout; int stat; } ;
struct cdrom_device_info {int handle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct packet_command*) ;

__attribute__((used)) static int FUNC_1(struct cdrom_device_info *VAR_1,
  struct packet_command *VAR_2)
{
 if (VAR_2->timeout <= 0)
  VAR_2->timeout = VAR_0;

 FUNC_0(VAR_1->handle, VAR_2);

 return VAR_2->stat;
}
