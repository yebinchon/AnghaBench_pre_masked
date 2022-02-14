
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dev_addr; } ;
struct jme_adapter {int macaddr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jme_adapter*,int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 struct jme_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_2)
{
 struct jme_adapter *VAR_3 = FUNC_2(VAR_2);
 unsigned char VAR_4[6];
 u32 VAR_5;

 FUNC_3(&VAR_3->macaddr_lock);
 VAR_5 = FUNC_0(VAR_3, VAR_1);
 VAR_4[0] = (VAR_5 >> 0) & 0xFF;
 VAR_4[1] = (VAR_5 >> 8) & 0xFF;
 VAR_4[2] = (VAR_5 >> 16) & 0xFF;
 VAR_4[3] = (VAR_5 >> 24) & 0xFF;
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_4[4] = (VAR_5 >> 0) & 0xFF;
 VAR_4[5] = (VAR_5 >> 8) & 0xFF;
 FUNC_1(VAR_2->dev_addr, VAR_4, 6);
 FUNC_4(&VAR_3->macaddr_lock);
}
