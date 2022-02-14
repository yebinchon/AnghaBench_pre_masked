
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct i596_rbd {int * skb; int b_data; } ;
struct i596_private {TYPE_1__* dma; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct i596_rbd* rbds; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct i596_private* FUNC_3 (struct net_device*) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_4(struct net_device *VAR_3)
{
 struct i596_private *VAR_4 = FUNC_3(VAR_3);
 struct i596_rbd *VAR_5;
 int VAR_6;

 for (VAR_6 = 0, VAR_5 = VAR_4->dma->rbds; VAR_6 < VAR_2; VAR_6++, VAR_5++) {
  if (VAR_5->skb == ((void*)0))
   break;
  FUNC_2(VAR_3->dev.parent,
     (dma_addr_t)FUNC_0(VAR_5->b_data),
     VAR_1, VAR_0);
  FUNC_1(VAR_5->skb);
 }
}
