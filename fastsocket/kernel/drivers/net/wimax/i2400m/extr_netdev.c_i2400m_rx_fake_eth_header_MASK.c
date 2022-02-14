
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct i2400m {int src_mac_addr; } ;
struct ethhdr {int h_proto; int h_source; int h_dest; } ;
typedef int __be16 ;


 int FUNC_0 (int ,int ,int) ;
 struct i2400m* FUNC_1 (struct net_device*) ;

__attribute__((used)) static
void FUNC_2(struct net_device *VAR_0,
          void *VAR_1, __be16 VAR_2)
{
 struct i2400m *VAR_3 = FUNC_1(VAR_0);
 struct ethhdr *VAR_4 = VAR_1;

 FUNC_0(VAR_4->h_dest, VAR_0->dev_addr, sizeof(VAR_4->h_dest));
 FUNC_0(VAR_4->h_source, VAR_3->src_mac_addr,
        sizeof(VAR_4->h_source));
 VAR_4->h_proto = VAR_2;
}
