
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; int * base; int basePA; } ;
struct vmxnet3_rx_queue {TYPE_2__ comp_ring; TYPE_3__** buf_info; TYPE_1__* rx_ring; } ;
struct vmxnet3_adapter {int pdev; } ;
struct Vmxnet3_RxDesc {int dummy; } ;
struct Vmxnet3_RxCompDesc {int dummy; } ;
struct TYPE_6__ {int * page; } ;
struct TYPE_4__ {int size; int * base; int basePA; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct vmxnet3_rx_queue *VAR_0,
          struct vmxnet3_adapter *VAR_1)
{
 int VAR_2;
 int VAR_3;


 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (VAR_0->buf_info[VAR_2]) {
   for (VAR_3 = 0; VAR_3 < VAR_0->rx_ring[VAR_2].size; VAR_3++)
    FUNC_0(VAR_0->buf_info[VAR_2][VAR_3].page != ((void*)0));
  }
 }


 FUNC_1(VAR_0->buf_info[0]);

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (VAR_0->rx_ring[VAR_2].base) {
   FUNC_2(VAR_1->pdev, VAR_0->rx_ring[VAR_2].size
         * sizeof(struct Vmxnet3_RxDesc),
         VAR_0->rx_ring[VAR_2].base,
         VAR_0->rx_ring[VAR_2].basePA);
   VAR_0->rx_ring[VAR_2].base = ((void*)0);
  }
  VAR_0->buf_info[VAR_2] = ((void*)0);
 }

 if (VAR_0->comp_ring.base) {
  FUNC_2(VAR_1->pdev, VAR_0->comp_ring.size *
        sizeof(struct Vmxnet3_RxCompDesc),
        VAR_0->comp_ring.base, VAR_0->comp_ring.basePA);
  VAR_0->comp_ring.base = ((void*)0);
 }
}
