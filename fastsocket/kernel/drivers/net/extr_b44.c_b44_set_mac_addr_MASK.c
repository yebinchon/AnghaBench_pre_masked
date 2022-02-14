
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct b44 {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct b44*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct b44* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4, void *VAR_5)
{
 struct b44 *VAR_6 = FUNC_4(VAR_4);
 struct sockaddr *VAR_7 = VAR_5;
 u32 VAR_8;

 if (FUNC_5(VAR_4))
  return -VAR_1;

 if (!FUNC_2(VAR_7->sa_data))
  return -VAR_2;

 FUNC_3(VAR_4->dev_addr, VAR_7->sa_data, VAR_4->addr_len);

 FUNC_6(&VAR_6->lock);

 VAR_8 = FUNC_1(VAR_6, VAR_0);
 if (!(VAR_8 & VAR_3))
  FUNC_0(VAR_6);

 FUNC_7(&VAR_6->lock);

 return 0;
}
