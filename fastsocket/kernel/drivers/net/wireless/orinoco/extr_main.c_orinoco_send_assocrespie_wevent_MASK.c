
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
union iwreq_data {TYPE_2__ data; } ;
typedef int u8 ;
struct hermes {TYPE_1__* ops; } ;
struct orinoco_private {int has_wpa; struct hermes hw; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
typedef int buf ;
struct TYPE_3__ {int (* read_ltv ) (struct hermes*,int ,int ,int,int *,int**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int*,int) ;
 int FUNC_1 (struct hermes*,int ,int ,int,int *,int**) ;
 int FUNC_2 (struct net_device*,int ,union iwreq_data*,int*) ;

__attribute__((used)) static void FUNC_3(struct orinoco_private *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->ndev;
 struct hermes *VAR_5 = &VAR_3->hw;
 union iwreq_data VAR_6;
 int VAR_7;
 u8 VAR_8[88];
 u8 *VAR_9;

 if (!VAR_3->has_wpa)
  return;

 VAR_7 = VAR_5->ops->read_ltv(VAR_5, VAR_2,
    VAR_0,
    sizeof(VAR_8), ((void*)0), &VAR_8);
 if (VAR_7 != 0)
  return;

 VAR_9 = FUNC_0(VAR_8, sizeof(VAR_8));
 if (VAR_9) {
  int VAR_10 = sizeof(VAR_8) - (VAR_9 - &VAR_8[0]);
  VAR_6.data.length = VAR_9[1] + 2;
  if (VAR_6.data.length > VAR_10)
   VAR_6.data.length = VAR_10;

  if (VAR_6.data.length)

   FUNC_2(VAR_4, VAR_1, &VAR_6, VAR_9);
 }
}
