
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {int mac; struct adapter* adapter; } ;
struct net_device {int mtu; } ;
struct TYPE_3__ {scalar_t__ rev; int b_wnd; int a_wnd; int mtus; } ;
struct adapter {TYPE_2__** port; TYPE_1__ params; } ;
struct TYPE_4__ {int mtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, int VAR_2)
{
 struct port_info *VAR_3 = FUNC_1(VAR_1);
 struct adapter *VAR_4 = VAR_3->adapter;
 int VAR_5;

 if (VAR_2 < 81)
  return -VAR_0;
 if ((VAR_5 = FUNC_4(&VAR_3->mac, VAR_2)))
  return VAR_5;
 VAR_1->mtu = VAR_2;
 FUNC_0(VAR_4);
 if (VAR_4->params.rev == 0 && FUNC_2(VAR_4))
  FUNC_3(VAR_4, VAR_4->params.mtus,
        VAR_4->params.a_wnd, VAR_4->params.b_wnd,
        VAR_4->port[0]->mtu);
 return 0;
}
