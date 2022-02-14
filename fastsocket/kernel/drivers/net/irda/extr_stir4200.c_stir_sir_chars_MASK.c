
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stir_cb {int rx_buff; TYPE_1__* netdev; } ;
typedef int __u8 ;
struct TYPE_2__ {int stats; } ;


 int FUNC_0 (TYPE_1__*,int *,int *,int const) ;

__attribute__((used)) static void FUNC_1(struct stir_cb *VAR_0,
       const __u8 *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0->netdev, &VAR_0->netdev->stats,
      &VAR_0->rx_buff, VAR_1[VAR_3]);
}
