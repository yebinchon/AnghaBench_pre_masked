
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sa_family; int sa_data; } ;
union iwreq_data {TYPE_2__ ap_addr; } ;
struct hermes {TYPE_1__* ops; } ;
struct orinoco_private {struct hermes hw; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* read_ltv ) (struct hermes*,int ,int ,int ,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hermes*,int ,int ,int ,int *,int ) ;
 int FUNC_1 (struct net_device*,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_2(struct orinoco_private *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->ndev;
 struct hermes *VAR_7 = &VAR_5->hw;
 union iwreq_data VAR_8;
 int VAR_9;

 VAR_9 = VAR_7->ops->read_ltv(VAR_7, VAR_4, VAR_2,
    VAR_1, ((void*)0), VAR_8.ap_addr.sa_data);
 if (VAR_9 != 0)
  return;

 VAR_8.ap_addr.sa_family = VAR_0;


 FUNC_1(VAR_6, VAR_3, &VAR_8, ((void*)0));
}
