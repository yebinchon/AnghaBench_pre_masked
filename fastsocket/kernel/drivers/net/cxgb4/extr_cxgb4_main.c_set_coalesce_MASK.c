
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_rspq {int dummy; } ;
struct port_info {int first_qset; int nqsets; struct adapter* adapter; } ;
struct net_device {int dev; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;
struct TYPE_4__ {TYPE_1__* ethrxq; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_3__ {struct sge_rspq rspq; } ;


 int FUNC_0 (int *,char*,int) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct adapter*,struct sge_rspq*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, struct ethtool_coalesce *VAR_1)
{
 const struct port_info *VAR_2 = FUNC_1(VAR_0);
 struct adapter *VAR_3 = VAR_2->adapter;
 struct sge_rspq *VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = VAR_2->first_qset; VAR_5 < VAR_2->first_qset + VAR_2->nqsets; VAR_5++) {
  VAR_4 = &VAR_3->sge.ethrxq[VAR_5].rspq;
  VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_1->rx_coalesce_usecs,
   VAR_1->rx_max_coalesced_frames);
  if (VAR_6) {
   FUNC_0(&VAR_0->dev, "failed to set coalesce %d\n", VAR_6);
   break;
  }
 }
 return VAR_6;
}
