
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct meth_private {scalar_t__ rx_write; int * rx_ring_dmas; int ** rx_ring; TYPE_2__** rx_skbs; } ;
typedef int rx_packet ;
struct TYPE_5__ {int rx_fifo; } ;
struct TYPE_7__ {TYPE_1__ eth; } ;
struct TYPE_6__ {scalar_t__ head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(struct meth_private *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5->rx_skbs[VAR_6] = FUNC_0(VAR_1, 0);


  FUNC_2(VAR_5->rx_skbs[VAR_6],VAR_2);
  VAR_5->rx_ring[VAR_6]=(rx_packet*)(VAR_5->rx_skbs[VAR_6]->head);

  VAR_5->rx_ring_dmas[VAR_6] =
   FUNC_1(((void*)0), VAR_5->rx_ring[VAR_6],
           VAR_1, VAR_0);
  VAR_4->eth.rx_fifo = VAR_5->rx_ring_dmas[VAR_6];
 }
        VAR_5->rx_write = 0;
 return 0;
}
