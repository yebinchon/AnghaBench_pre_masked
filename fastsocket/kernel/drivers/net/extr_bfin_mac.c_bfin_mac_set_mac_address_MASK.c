
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; int addr_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, void *VAR_2)
{
 struct sockaddr *VAR_3 = VAR_2;
 if (FUNC_1(VAR_1))
  return -VAR_0;
 FUNC_0(VAR_1->dev_addr, VAR_3->sa_data, VAR_1->addr_len);
 FUNC_2(VAR_1->dev_addr);
 return 0;
}
