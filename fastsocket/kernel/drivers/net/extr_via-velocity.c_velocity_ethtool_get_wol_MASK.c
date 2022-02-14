
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {int wol_opts; int wol_passwd; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; int sopass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 struct velocity_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6, struct ethtool_wolinfo *VAR_7)
{
 struct velocity_info *VAR_8 = FUNC_1(VAR_6);
 VAR_7->supported = VAR_4 | VAR_3 | VAR_5 | VAR_2;
 VAR_7->wolopts |= VAR_3;




 if (VAR_8->wol_opts & VAR_1)
  VAR_7->wolopts |= VAR_5;
 if (VAR_8->wol_opts & VAR_0)
  VAR_7->wolopts |= VAR_2;
 FUNC_0(&VAR_7->sopass, VAR_8->wol_passwd, 6);
}
