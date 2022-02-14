
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3_rx_prodring_set {int * rx_jmb; int rx_jmb_mapping; int * rx_std; int rx_std_mapping; int * rx_jmb_buffers; int * rx_std_buffers; } ;
struct tg3 {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct tg3*) ;
 int FUNC_1 (struct tg3*) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_0,
     struct tg3_rx_prodring_set *VAR_1)
{
 FUNC_3(VAR_1->rx_std_buffers);
 VAR_1->rx_std_buffers = ((void*)0);
 FUNC_3(VAR_1->rx_jmb_buffers);
 VAR_1->rx_jmb_buffers = ((void*)0);
 if (VAR_1->rx_std) {
  FUNC_2(&VAR_0->pdev->dev, FUNC_1(VAR_0),
      VAR_1->rx_std, VAR_1->rx_std_mapping);
  VAR_1->rx_std = ((void*)0);
 }
 if (VAR_1->rx_jmb) {
  FUNC_2(&VAR_0->pdev->dev, FUNC_0(VAR_0),
      VAR_1->rx_jmb, VAR_1->rx_jmb_mapping);
  VAR_1->rx_jmb = ((void*)0);
 }
}
