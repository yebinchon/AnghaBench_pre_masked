
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* rcap; } ;
struct TYPE_3__ {TYPE_2__ l1cfg; } ;
struct fw_port_cmd {TYPE_1__ u; void* action_to_len16; void* op_to_portid; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fw_port_cmd) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct fw_port_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,unsigned int,struct fw_port_cmd*,int,int *) ;

int FUNC_7(struct adapter *VAR_5, unsigned int VAR_6, unsigned int VAR_7)
{
 struct fw_port_cmd VAR_8;

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.op_to_portid = FUNC_4(FUNC_0(VAR_4) | VAR_1 |
          VAR_0 | FUNC_3(VAR_7));
 VAR_8.action_to_len16 = FUNC_4(FUNC_2(VAR_2) |
      FUNC_1(VAR_8));
 VAR_8.u.l1cfg.rcap = FUNC_4(VAR_3);
 return FUNC_6(VAR_5, VAR_6, &VAR_8, sizeof(VAR_8), ((void*)0));
}
