
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int no_in_queues; int * c_q; } ;
struct TYPE_3__ {scalar_t__ cq; } ;
struct qeth_card {TYPE_2__ qdio; TYPE_1__ options; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct qeth_card *VAR_1, unsigned int VAR_2)
{
 return VAR_1->options.cq == VAR_0 &&
     VAR_1->qdio.c_q != ((void*)0) &&
     VAR_2 != 0 &&
     VAR_2 == VAR_1->qdio.no_in_queues - 1;
}
