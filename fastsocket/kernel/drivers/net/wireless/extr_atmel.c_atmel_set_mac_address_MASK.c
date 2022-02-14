
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, void *VAR_1)
{
 struct sockaddr *VAR_2 = VAR_1;

 FUNC_1 (VAR_0->dev_addr, VAR_2->sa_data, VAR_0->addr_len);
 return FUNC_0(VAR_0);
}
