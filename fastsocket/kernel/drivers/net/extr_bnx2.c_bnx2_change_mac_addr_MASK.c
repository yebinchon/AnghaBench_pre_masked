
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct bnx2 {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct bnx2* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_1, void *VAR_2)
{
 struct sockaddr *VAR_3 = VAR_2;
 struct bnx2 *VAR_4 = FUNC_3(VAR_1);

 if (!FUNC_1(VAR_3->sa_data))
  return -VAR_0;

 FUNC_2(VAR_1->dev_addr, VAR_3->sa_data, VAR_1->addr_len);
 if (FUNC_4(VAR_1))
  FUNC_0(VAR_4, VAR_4->dev->dev_addr, 0);

 return 0;
}
