
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gelic_port {struct net_device* netdev; } ;



__attribute__((used)) static inline struct net_device *FUNC_0(struct gelic_port *VAR_0)
{
 return VAR_0->netdev;
}
