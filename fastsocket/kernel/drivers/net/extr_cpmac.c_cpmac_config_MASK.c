
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; scalar_t__ base_addr; } ;
struct ifmap {scalar_t__ base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_3, struct ifmap *VAR_4)
{
 if (VAR_3->flags & VAR_2)
  return -VAR_0;


 if (VAR_4->base_addr != VAR_3->base_addr)
  return -VAR_1;


 return 0;
}
