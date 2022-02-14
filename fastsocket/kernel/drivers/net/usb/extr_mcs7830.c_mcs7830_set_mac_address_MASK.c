
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; int addr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usbnet*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct usbnet* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, void *VAR_5)
{
 int VAR_6;
 struct usbnet *VAR_7 = FUNC_3(VAR_4);
 struct sockaddr *VAR_8 = VAR_5;

 if (FUNC_4(VAR_4))
  return -VAR_0;

 if (!FUNC_0(VAR_8->sa_data))
  return -VAR_1;

 FUNC_2(VAR_4->dev_addr, VAR_8->sa_data, VAR_4->addr_len);

 VAR_6 = FUNC_1(VAR_7, VAR_3, VAR_2,
   VAR_4->dev_addr);

 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
