
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int no_out_queues; scalar_t__* out_qs; } ;
struct qeth_card {TYPE_1__ qdio; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(struct qeth_card *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, 2, "clearqdbf");

 for (VAR_2 = 0; VAR_2 < VAR_1->qdio.no_out_queues; ++VAR_2)
  if (VAR_1->qdio.out_qs[VAR_2])
   FUNC_1(VAR_1->qdio.out_qs[VAR_2], 0);
}
