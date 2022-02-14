
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct packet_command {int* cmd; unsigned char* buffer; int buflen; int timeout; int data_direction; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ cdi; } ;
typedef TYPE_2__ Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct packet_command*,int ,int) ;
 int FUNC_1 (char*,int ,int,int,int) ;
 int FUNC_2 (TYPE_2__*,struct packet_command*) ;

__attribute__((used)) static int FUNC_3(Scsi_CD *VAR_3, unsigned char *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct packet_command VAR_8;






 FUNC_0(&VAR_8, 0, sizeof(struct packet_command));
 VAR_8.cmd[0] = VAR_1;
 VAR_8.cmd[1] = ((VAR_6 & 7) << 2);
 VAR_8.cmd[2] = (unsigned char) (VAR_5 >> 24) & 0xff;
 VAR_8.cmd[3] = (unsigned char) (VAR_5 >> 16) & 0xff;
 VAR_8.cmd[4] = (unsigned char) (VAR_5 >> 8) & 0xff;
 VAR_8.cmd[5] = (unsigned char) VAR_5 & 0xff;
 VAR_8.cmd[8] = 1;
 switch (VAR_7) {
 case 2336:
  VAR_8.cmd[9] = 0x58;
  break;
 case 2340:
  VAR_8.cmd[9] = 0x78;
  break;
 case 2352:
  VAR_8.cmd[9] = 0xf8;
  break;
 default:
  VAR_8.cmd[9] = 0x10;
  break;
 }
 VAR_8.buffer = VAR_4;
 VAR_8.buflen = VAR_7;
 VAR_8.data_direction = VAR_0;
 VAR_8.timeout = VAR_2;
 return FUNC_2(VAR_3, &VAR_8);
}
