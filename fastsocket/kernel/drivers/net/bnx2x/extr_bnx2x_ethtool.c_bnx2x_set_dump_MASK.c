
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_dump {int flag; } ;
struct bnx2x {int dump_preset_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bnx2x* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, struct ethtool_dump *VAR_3)
{
 struct bnx2x *VAR_4 = FUNC_0(VAR_2);


 if (VAR_3->flag < 1 || VAR_3->flag > VAR_0)
  return -VAR_1;

 VAR_4->dump_preset_idx = VAR_3->flag;
 return 0;
}
