
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct net_device {int dev; } ;
struct enc28j60_net {int full_duplex; int hw_enable; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct enc28j60_net* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct enc28j60_net*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_5, u8 VAR_6, u16 VAR_7, u8 VAR_8)
{
 struct enc28j60_net *VAR_9 = FUNC_1(VAR_5);
 int VAR_10 = 0;

 if (!VAR_9->hw_enable) {



  if (VAR_6 == VAR_0 && VAR_7 == VAR_4)
   VAR_9->full_duplex = (VAR_8 == VAR_1);
  else {
   if (FUNC_2(VAR_9))
    FUNC_0(&VAR_5->dev,
     "unsupported link setting\n");
   VAR_10 = -VAR_3;
  }
 } else {
  if (FUNC_2(VAR_9))
   FUNC_0(&VAR_5->dev, "Warning: hw must be disabled "
    "to set link mode\n");
  VAR_10 = -VAR_2;
 }
 return VAR_10;
}
