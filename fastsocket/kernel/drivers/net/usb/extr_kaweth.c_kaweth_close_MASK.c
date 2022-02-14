
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct kaweth_device {int intf; int status; scalar_t__ opened; } ;


 int VAR_0 ;
 int FUNC_0 (struct kaweth_device*) ;
 struct kaweth_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct kaweth_device *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_1);
 VAR_2->opened = 0;

 VAR_2->status |= VAR_0;

 FUNC_0(VAR_2);

 VAR_2->status &= ~VAR_0;

 FUNC_3(VAR_2->intf);

 return 0;
}
