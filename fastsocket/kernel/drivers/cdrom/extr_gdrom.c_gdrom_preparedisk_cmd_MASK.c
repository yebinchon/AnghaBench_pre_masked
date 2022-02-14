
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_command {int* cmd; scalar_t__ buflen; } ;
struct TYPE_2__ {int pending; int status; int cd_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct packet_command*) ;
 int FUNC_2 (struct packet_command*) ;
 struct packet_command* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct packet_command *VAR_6;
 VAR_6 = FUNC_3(sizeof(struct packet_command), VAR_3);
 if (!VAR_6)
  return -VAR_1;
 VAR_6->cmd[0] = 0x70;
 VAR_6->cmd[2] = 0x1f;
 VAR_6->buflen = 0;
 VAR_5.pending = 1;
 FUNC_1(VAR_5.cd_info, VAR_6);

 FUNC_4(VAR_4, VAR_5.pending == 0,
  VAR_2);
 VAR_5.pending = 0;
 FUNC_2(VAR_6);
 if (VAR_5.status & 0x01) {

  FUNC_0(((void*)0));
  return -VAR_0;
 }
 return 0;
}
