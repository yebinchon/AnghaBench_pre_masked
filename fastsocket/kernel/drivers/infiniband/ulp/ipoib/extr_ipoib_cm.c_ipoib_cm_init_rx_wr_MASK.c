
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int num_frags; } ;
struct ipoib_dev_priv {TYPE_2__ cm; TYPE_1__* mr; } ;
struct ib_sge {int length; int lkey; } ;
struct ib_recv_wr {int num_sge; struct ib_sge* sg_list; int * next; } ;
struct TYPE_3__ {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
    struct ib_recv_wr *VAR_3,
    struct ib_sge *VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->cm.num_frags; ++VAR_6)
  VAR_4[VAR_6].lkey = VAR_5->mr->lkey;

 VAR_4[0].length = VAR_0;
 for (VAR_6 = 1; VAR_6 < VAR_5->cm.num_frags; ++VAR_6)
  VAR_4[VAR_6].length = VAR_1;

 VAR_3->next = ((void*)0);
 VAR_3->sg_list = VAR_4;
 VAR_3->num_sge = VAR_5->cm.num_frags;
}
