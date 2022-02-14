
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {size_t cardno; } ;
struct net_device {int base_addr; int dma; struct priv* ml_priv; } ;
struct TYPE_2__ {int total_size; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct priv*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct priv *VAR_2 = VAR_1->ml_priv;
 FUNC_0(VAR_1->dma);
 FUNC_1(VAR_1->dma);
 FUNC_3(VAR_1->base_addr, VAR_0[VAR_2->cardno].total_size);
 FUNC_2(VAR_2);
}
