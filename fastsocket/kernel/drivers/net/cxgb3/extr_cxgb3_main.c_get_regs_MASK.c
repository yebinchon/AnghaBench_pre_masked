
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct TYPE_2__ {int rev; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (void*,int ,int ) ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct adapter*,void*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_12, struct ethtool_regs *VAR_13,
       void *VAR_14)
{
 struct port_info *VAR_15 = FUNC_3(VAR_12);
 struct adapter *VAR_16 = VAR_15->adapter;







 VAR_13->version = 3 | (VAR_16->params.rev << 10) | (FUNC_1(VAR_16) << 31);






 FUNC_2(VAR_14, 0, VAR_11);
 FUNC_4(VAR_16, VAR_14, 0, VAR_4);
 FUNC_4(VAR_16, VAR_14, VAR_3, VAR_6);
 FUNC_4(VAR_16, VAR_14, VAR_7, VAR_2);
 FUNC_4(VAR_16, VAR_14, VAR_1, VAR_0);
 FUNC_4(VAR_16, VAR_14, VAR_5, VAR_9);
 FUNC_4(VAR_16, VAR_14, VAR_10,
         FUNC_0(VAR_9, 1));
 FUNC_4(VAR_16, VAR_14, FUNC_0(VAR_10, 1),
         FUNC_0(VAR_8, 1));
}
