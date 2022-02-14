
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spider_net_descr {int dummy; } ;
struct TYPE_4__ {int num_desc; scalar_t__ ring; } ;
struct TYPE_3__ {int num_desc; scalar_t__ ring; } ;
struct spider_net_card {scalar_t__ darray; TYPE_2__ tx_chain; TYPE_1__ rx_chain; int tx_timeout_task_counter; int waitq; int tx_timeout_task; int msg_enable; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct net_device* FUNC_1 (size_t) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct spider_net_card* FUNC_4 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct spider_net_card *
FUNC_5(void)
{
 struct net_device *VAR_4;
 struct spider_net_card *VAR_5;
 size_t VAR_6;

 VAR_6 = sizeof(struct spider_net_card) +
    (VAR_3 + VAR_1) * sizeof(struct spider_net_descr);
 VAR_4 = FUNC_1(VAR_6);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_4(VAR_4);
 VAR_5->netdev = VAR_4;
 VAR_5->msg_enable = VAR_0;
 FUNC_0(&VAR_5->tx_timeout_task, VAR_2);
 FUNC_3(&VAR_5->waitq);
 FUNC_2(&VAR_5->tx_timeout_task_counter, 0);

 VAR_5->rx_chain.num_desc = VAR_1;
 VAR_5->rx_chain.ring = VAR_5->darray;
 VAR_5->tx_chain.num_desc = VAR_3;
 VAR_5->tx_chain.ring = VAR_5->darray + VAR_1;

 return VAR_5;
}
