
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_net_private {int lock; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;


 struct uml_net_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, void *VAR_1)
{
 struct uml_net_private *VAR_2 = FUNC_0(VAR_0);
 struct sockaddr *VAR_3 = VAR_1;

 FUNC_2(&VAR_2->lock);
 FUNC_1(VAR_0, VAR_3->sa_data);
 FUNC_3(&VAR_2->lock);

 return 0;
}
