
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct niu {int lock; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct niu* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct niu*,int) ;
 int FUNC_5 (struct niu*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2, void *VAR_3)
{
 struct niu *VAR_4 = FUNC_2(VAR_2);
 struct sockaddr *VAR_5 = VAR_3;
 unsigned long VAR_6;

 if (!FUNC_0(VAR_5->sa_data))
  return -VAR_0;

 FUNC_1(VAR_2->dev_addr, VAR_5->sa_data, VAR_1);

 if (!FUNC_3(VAR_2))
  return 0;

 FUNC_6(&VAR_4->lock, VAR_6);
 FUNC_4(VAR_4, 0);
 FUNC_5(VAR_4, VAR_2->dev_addr);
 FUNC_4(VAR_4, 1);
 FUNC_7(&VAR_4->lock, VAR_6);

 return 0;
}
