
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 FUNC_0(&VAR_2->dev, "DaVinci EMAC: ioctl not supported\n");

 if (!(FUNC_1(VAR_2)))
  return -VAR_0;



 return -VAR_1;
}
