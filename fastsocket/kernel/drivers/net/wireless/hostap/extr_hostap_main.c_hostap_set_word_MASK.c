
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct hostap_interface {TYPE_2__* local; } ;
typedef int __le16 ;
struct TYPE_4__ {TYPE_1__* func; } ;
struct TYPE_3__ {int (* set_rid ) (struct net_device*,int,int *,int) ;} ;


 int FUNC_0 (int ) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int *,int) ;

int FUNC_3(struct net_device *VAR_0, int VAR_1, u16 VAR_2)
{
 struct hostap_interface *VAR_3;
 __le16 VAR_4 = FUNC_0(VAR_2);
 VAR_3 = FUNC_1(VAR_0);
 return VAR_3->local->func->set_rid(VAR_0, VAR_1, &VAR_4, 2);
}
