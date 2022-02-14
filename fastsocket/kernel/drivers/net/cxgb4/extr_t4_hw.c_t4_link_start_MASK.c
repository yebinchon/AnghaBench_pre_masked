
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct link_config {int requested_fc; int supported; int fc; scalar_t__ autoneg; unsigned int requested_speed; unsigned int advertising; scalar_t__ link_ok; } ;
struct TYPE_3__ {void* rcap; } ;
struct TYPE_4__ {TYPE_1__ l1cfg; } ;
struct fw_port_cmd {TYPE_2__ u; void* action_to_len16; void* op_to_portid; } ;
struct adapter {int dummy; } ;
typedef int c ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (struct fw_port_cmd) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_5 (unsigned int) ;
 int FUNC_6 (struct fw_port_cmd*,int ,int) ;
 int FUNC_7 (struct adapter*,unsigned int,struct fw_port_cmd*,int,int *) ;

int FUNC_8(struct adapter *VAR_12, unsigned int VAR_13, unsigned int VAR_14,
    struct link_config *VAR_15)
{
 struct fw_port_cmd VAR_16;
 unsigned int VAR_17 = 0, VAR_18 = FUNC_4(VAR_9);

 VAR_15->link_ok = 0;
 if (VAR_15->requested_fc & VAR_10)
  VAR_17 |= VAR_6;
 if (VAR_15->requested_fc & VAR_11)
  VAR_17 |= VAR_7;

 FUNC_6(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.op_to_portid = FUNC_5(FUNC_0(VAR_8) | VAR_3 |
          VAR_2 | FUNC_3(VAR_14));
 VAR_16.action_to_len16 = FUNC_5(FUNC_2(VAR_4) |
      FUNC_1(VAR_16));

 if (!(VAR_15->supported & VAR_5)) {
  VAR_16.u.l1cfg.rcap = FUNC_5((VAR_15->supported & VAR_0) | VAR_17);
  VAR_15->fc = VAR_15->requested_fc & (VAR_10 | VAR_11);
 } else if (VAR_15->autoneg == VAR_1) {
  VAR_16.u.l1cfg.rcap = FUNC_5(VAR_15->requested_speed | VAR_17 | VAR_18);
  VAR_15->fc = VAR_15->requested_fc & (VAR_10 | VAR_11);
 } else
  VAR_16.u.l1cfg.rcap = FUNC_5(VAR_15->advertising | VAR_17 | VAR_18);

 return FUNC_7(VAR_12, VAR_13, &VAR_16, sizeof(VAR_16), ((void*)0));
}
