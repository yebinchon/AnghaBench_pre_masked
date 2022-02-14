
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {struct data_queue* atim; struct data_queue* tx; TYPE_1__* ops; } ;
struct data_queue {int dummy; } ;
typedef enum data_queue_qid { ____Placeholder_data_queue_qid } data_queue_qid ;
struct TYPE_2__ {int const tx_queues; } ;


 int const VAR_0 ;

__attribute__((used)) static inline struct data_queue *
FUNC_0(struct rt2x00_dev *VAR_1,
    const enum data_queue_qid VAR_2)
{
 if (VAR_2 < VAR_1->ops->tx_queues && VAR_1->tx)
  return &VAR_1->tx[VAR_2];

 if (VAR_2 == VAR_0)
  return VAR_1->atim;

 return ((void*)0);
}
