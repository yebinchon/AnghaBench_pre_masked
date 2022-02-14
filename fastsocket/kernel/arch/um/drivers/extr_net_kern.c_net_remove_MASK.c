
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_net_private {scalar_t__ fd; } ;
struct uml_net {int pdev; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uml_net* FUNC_0 (int) ;
 struct uml_net_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(int VAR_2, char **VAR_3)
{
 struct uml_net *VAR_4;
 struct net_device *VAR_5;
 struct uml_net_private *VAR_6;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == ((void*)0))
  return -VAR_1;

 VAR_5 = VAR_4->dev;
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6->fd > 0)
  return -VAR_0;
 FUNC_3(VAR_5);
 FUNC_2(&VAR_4->pdev);

 return 0;
}
