
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spider_net_card {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct spider_net_card* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct spider_net_card*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_1, int VAR_2,
       int VAR_3, int VAR_4)
{
 struct spider_net_card *VAR_5 = FUNC_0(VAR_1);
 u32 VAR_6;

 VAR_6 = ((u32)VAR_2 << 21) |
  ((u32)VAR_3 << 16) | ((u32)VAR_4);

 FUNC_1(VAR_5, VAR_0, VAR_6);
}
