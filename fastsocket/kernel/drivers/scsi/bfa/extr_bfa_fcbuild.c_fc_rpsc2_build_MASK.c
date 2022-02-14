
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct TYPE_3__ {int els_code; } ;
struct fc_rpsc2_cmd_s {TYPE_2__* pid_list; int num_pids; int token; TYPE_1__ els_cmd; } ;
struct TYPE_4__ {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_5 (struct fc_rpsc2_cmd_s*,int ,int) ;

u16
FUNC_6(struct fchs_s *VAR_2, struct fc_rpsc2_cmd_s *VAR_3, u32 VAR_4,
  u32 VAR_5, u32 *VAR_6, u16 VAR_7)
{
 u32 VAR_8 = FUNC_0(FUNC_1(VAR_4));
 int VAR_9 = 0;

 FUNC_4(VAR_2, FUNC_1(VAR_8), VAR_5, 0);

 FUNC_5(VAR_3, 0, sizeof(struct fc_rpsc2_cmd_s));

 VAR_3->els_cmd.els_code = VAR_1;
 VAR_3->token = FUNC_3(VAR_0);
 VAR_3->num_pids = FUNC_2(VAR_7);
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  VAR_3->pid_list[VAR_9].pid = VAR_6[VAR_9];

 return sizeof(struct fc_rpsc2_cmd_s) + ((VAR_7 - 1) * (sizeof(u32)));
}
