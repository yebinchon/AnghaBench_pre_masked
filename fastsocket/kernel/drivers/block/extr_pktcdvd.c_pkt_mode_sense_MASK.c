
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int dummy; } ;
struct packet_command {int* cmd; int buflen; int data_direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct pktcdvd_device*,struct packet_command*) ;

__attribute__((used)) static int FUNC_2(struct pktcdvd_device *VAR_2, struct packet_command *VAR_3, int VAR_4, int VAR_5)
{
 FUNC_0(VAR_3->cmd, 0, sizeof(VAR_3->cmd));

 VAR_3->cmd[0] = VAR_1;
 VAR_3->cmd[2] = VAR_4 | (VAR_5 << 6);
 VAR_3->cmd[7] = VAR_3->buflen >> 8;
 VAR_3->cmd[8] = VAR_3->buflen & 0xff;
 VAR_3->data_direction = VAR_0;
 return FUNC_1(VAR_2, VAR_3);
}
