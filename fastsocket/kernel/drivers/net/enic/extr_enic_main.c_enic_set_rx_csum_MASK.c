
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct enic {int csum_rx_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct enic*,int ) ;
 int VAR_1 ;
 struct enic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u32 VAR_3)
{
 struct enic *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 && !FUNC_0(VAR_4, VAR_1))
  return -VAR_0;

 VAR_4->csum_rx_enabled = !!VAR_3;

 return 0;
}
