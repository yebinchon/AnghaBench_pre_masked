
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {TYPE_4__* qs; } ;
struct TYPE_7__ {TYPE_1__* qset; } ;
struct TYPE_8__ {TYPE_2__ sge; } ;
struct adapter {TYPE_5__ sge; TYPE_3__ params; } ;
struct TYPE_9__ {int lro_enabled; } ;
struct TYPE_6__ {int lro; } ;


 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 struct port_info *VAR_3 = FUNC_0(VAR_0);
 struct adapter *VAR_4 = VAR_3->adapter;

 VAR_4->params.sge.qset[VAR_1].lro = !!VAR_2;
 VAR_4->sge.qs[VAR_1].lro_enabled = !!VAR_2;
}
