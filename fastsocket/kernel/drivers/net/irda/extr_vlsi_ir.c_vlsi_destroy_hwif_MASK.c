
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ busaddr; int * virtaddr; int pdev; int * tx_ring; int * rx_ring; } ;
typedef TYPE_1__ vlsi_irda_dev_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(vlsi_irda_dev_t *VAR_1)
{
 FUNC_1(VAR_1->rx_ring);
 FUNC_1(VAR_1->tx_ring);
 VAR_1->rx_ring = VAR_1->tx_ring = ((void*)0);

 if (VAR_1->busaddr)
  FUNC_0(VAR_1->pdev,VAR_0,VAR_1->virtaddr,VAR_1->busaddr);

 VAR_1->virtaddr = ((void*)0);
 VAR_1->busaddr = 0;

 return 0;
}
