
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Host {int dummy; } ;
struct TYPE_2__ {int dest_unit; int len; int* data; void* src_port; scalar_t__ src_unit; void* dest_port; } ;
struct CmdBlk {TYPE_1__ Packet; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct CmdBlk* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct Host*,int,struct CmdBlk*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(struct Host *VAR_7, int VAR_8, int VAR_9)
{
 struct CmdBlk *VAR_10;

 FUNC_2(VAR_5, "SUSPEND BOOT ON RTA ID %d, link %c\n", VAR_8, 'A' + VAR_9);

 VAR_10 = FUNC_0();

 if (!VAR_10) {
  FUNC_2(VAR_5, "SUSPEND BOOT ON RTA: GetCmdBlk failed\n");
  return -VAR_2;
 }

 VAR_10->Packet.dest_unit = VAR_8;
 VAR_10->Packet.dest_port = VAR_0;
 VAR_10->Packet.src_unit = 0;
 VAR_10->Packet.src_port = VAR_0;
 VAR_10->Packet.len = 0x84;
 VAR_10->Packet.data[0] = VAR_3;
 VAR_10->Packet.data[1] = VAR_9;
 VAR_10->Packet.data[2] = VAR_4 & 0xFF;
 VAR_10->Packet.data[3] = (VAR_4 >> 8) & 0xFF;

 if (FUNC_1(VAR_7, VAR_8 - 1, VAR_10) == VAR_6) {
  FUNC_2(VAR_5, "SUSPEND BOOT ON RTA: Failed to queue iwait command\n");
  return -VAR_1;
 }
 return 0;
}
