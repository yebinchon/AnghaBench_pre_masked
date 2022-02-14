
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct txbd8 {int length; scalar_t__ bufPtr; scalar_t__ lstatus; } ;
struct rxbd8 {scalar_t__ bufPtr; scalar_t__ lstatus; } ;
struct gfar_private {int tx_ring_size; int rx_ring_size; int ** rx_skbuff; int rx_buffer_size; TYPE_1__* ofdev; struct rxbd8* rx_bd_base; int ** tx_skbuff; struct txbd8* tx_bd_base; } ;
struct TYPE_4__ {int nr_frags; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (int **) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gfar_private *VAR_2)
{
 struct rxbd8 *VAR_3;
 struct txbd8 *VAR_4;
 int VAR_5, VAR_6;


 VAR_4 = VAR_2->tx_bd_base;

 for (VAR_5 = 0; VAR_5 < VAR_2->tx_ring_size; VAR_5++) {
  if (!VAR_2->tx_skbuff[VAR_5])
   continue;

  FUNC_2(&VAR_2->ofdev->dev, VAR_4->bufPtr,
    VAR_4->length, VAR_1);
  VAR_4->lstatus = 0;
  for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_2->tx_skbuff[VAR_5])->nr_frags; VAR_6++) {
   VAR_4++;
   FUNC_1(&VAR_2->ofdev->dev, VAR_4->bufPtr,
     VAR_4->length, VAR_1);
  }
  VAR_4++;
  FUNC_0(VAR_2->tx_skbuff[VAR_5]);
  VAR_2->tx_skbuff[VAR_5] = ((void*)0);
 }

 FUNC_3(VAR_2->tx_skbuff);

 VAR_3 = VAR_2->rx_bd_base;



 if(VAR_2->rx_skbuff != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_2->rx_ring_size; VAR_5++) {
   if (VAR_2->rx_skbuff[VAR_5]) {
    FUNC_2(&VAR_2->ofdev->dev, VAR_3->bufPtr,
      VAR_2->rx_buffer_size,
      VAR_0);

    FUNC_0(VAR_2->rx_skbuff[VAR_5]);
    VAR_2->rx_skbuff[VAR_5] = ((void*)0);
   }

   VAR_3->lstatus = 0;
   VAR_3->bufPtr = 0;

   VAR_3++;
  }

  FUNC_3(VAR_2->rx_skbuff);
 }
}
