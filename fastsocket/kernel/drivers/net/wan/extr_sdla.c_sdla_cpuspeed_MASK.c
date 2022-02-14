
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct ifreq {int ifr_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct net_device*,int ,char*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ,char*,int) ;
 int FUNC_5 (struct net_device*,int ,int,char,char) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_13, struct ifreq *VAR_14)
{
 int VAR_15;
 char VAR_16;

 FUNC_2(VAR_13);
 if (FUNC_5(VAR_13, 0, 3*VAR_2, VAR_10, 0) < 0)
  return(-VAR_1);

 VAR_16 = VAR_3;
 FUNC_4(VAR_13, 0, &VAR_16, 1);

 if ((VAR_15 = FUNC_5(VAR_13, 0, 8*VAR_2, VAR_12, VAR_11)) < 0)
  return(-VAR_1);

 FUNC_3(VAR_13);
 FUNC_1(VAR_13, 0, &VAR_16, 1);

 if (VAR_16 == VAR_11)
 {
  FUNC_0("%s: SCC bad\n", VAR_13->name);
  return(-VAR_1);
 }

 if (VAR_16 != VAR_12)
  return(-VAR_0);

 if (VAR_15 < 165)
  VAR_14->ifr_mtu = VAR_5;
 else if (VAR_15 < 220)
  VAR_14->ifr_mtu = VAR_4;
 else if (VAR_15 < 258)
  VAR_14->ifr_mtu = VAR_9;
 else if (VAR_15 < 357)
  VAR_14->ifr_mtu = VAR_8;
 else if (VAR_15 < 467)
  VAR_14->ifr_mtu = VAR_7;
 else
  VAR_14->ifr_mtu = VAR_6;

 return(0);
}
