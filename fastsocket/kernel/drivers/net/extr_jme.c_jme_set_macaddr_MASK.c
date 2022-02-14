
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sockaddr {int* sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct jme_adapter {int macaddr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jme_adapter*,int ,int) ;
 int FUNC_1 (int ,int*,int ) ;
 struct jme_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_3, void *VAR_4)
{
 struct jme_adapter *VAR_5 = FUNC_2(VAR_3);
 struct sockaddr *VAR_6 = VAR_4;
 u32 VAR_7;

 if (FUNC_3(VAR_3))
  return -VAR_0;

 FUNC_4(&VAR_5->macaddr_lock);
 FUNC_1(VAR_3->dev_addr, VAR_6->sa_data, VAR_3->addr_len);

 VAR_7 = (VAR_6->sa_data[3] & 0xff) << 24 |
       (VAR_6->sa_data[2] & 0xff) << 16 |
       (VAR_6->sa_data[1] & 0xff) << 8 |
       (VAR_6->sa_data[0] & 0xff);
 FUNC_0(VAR_5, VAR_2, VAR_7);
 VAR_7 = (VAR_6->sa_data[5] & 0xff) << 8 |
       (VAR_6->sa_data[4] & 0xff);
 FUNC_0(VAR_5, VAR_1, VAR_7);
 FUNC_5(&VAR_5->macaddr_lock);

 return 0;
}
