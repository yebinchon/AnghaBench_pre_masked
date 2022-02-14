
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spider_net_card {int dummy; } ;
struct net_device {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 struct spider_net_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct spider_net_card*,int ) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_3)
{
 struct spider_net_card *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_4, VAR_1);
 VAR_6 = FUNC_2(VAR_4, VAR_2);

 VAR_3->dev_addr[0] = (VAR_6 >> 24) & 0xff;
 VAR_3->dev_addr[1] = (VAR_6 >> 16) & 0xff;
 VAR_3->dev_addr[2] = (VAR_6 >> 8) & 0xff;
 VAR_3->dev_addr[3] = VAR_6 & 0xff;
 VAR_3->dev_addr[4] = (VAR_5 >> 8) & 0xff;
 VAR_3->dev_addr[5] = VAR_5 & 0xff;

 if (!FUNC_0(&VAR_3->dev_addr[0]))
  return -VAR_0;

 return 0;
}
