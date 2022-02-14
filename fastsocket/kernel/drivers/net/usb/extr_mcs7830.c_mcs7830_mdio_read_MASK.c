
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct usbnet*,int) ;
 struct usbnet* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1,
        int VAR_2)
{
 struct usbnet *VAR_3 = FUNC_1(VAR_0);
 return FUNC_0(VAR_3, VAR_2);
}
