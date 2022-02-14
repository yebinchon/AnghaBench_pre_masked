
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct bnx2x {int flags; int wol; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bnx2x* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, struct ethtool_wolinfo *VAR_5)
{
 struct bnx2x *VAR_6 = FUNC_1(VAR_4);

 if (VAR_5->wolopts & ~VAR_3) {
  FUNC_0(VAR_0, "WOL not supported\n");
  return -VAR_1;
 }

 if (VAR_5->wolopts & VAR_3) {
  if (VAR_6->flags & VAR_2) {
   FUNC_0(VAR_0, "WOL not supported\n");
   return -VAR_1;
  }
  VAR_6->wol = 1;
 } else
  VAR_6->wol = 0;

 return 0;
}
