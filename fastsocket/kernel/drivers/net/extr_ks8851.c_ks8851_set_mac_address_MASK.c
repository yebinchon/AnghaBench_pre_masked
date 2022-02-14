
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, void *VAR_4)
{
 struct sockaddr *VAR_5 = VAR_4;

 if (FUNC_3(VAR_3))
  return -VAR_1;

 if (!FUNC_0(VAR_5->sa_data))
  return -VAR_0;

 FUNC_2(VAR_3->dev_addr, VAR_5->sa_data, VAR_2);
 return FUNC_1(VAR_3);
}
