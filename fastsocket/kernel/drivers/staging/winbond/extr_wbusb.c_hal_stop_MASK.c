
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wb35_reg {int D00_DmaControl; } ;
struct TYPE_4__ {int tx_halt; } ;
struct TYPE_3__ {int rx_halt; } ;
struct hw_data {TYPE_2__ Wb35Tx; TYPE_1__ Wb35Rx; struct wb35_reg reg; } ;


 int FUNC_0 (struct hw_data*,int,int) ;
 int FUNC_1 (struct hw_data*) ;
 int FUNC_2 (struct hw_data*) ;

__attribute__((used)) static void FUNC_3(struct hw_data *VAR_0)
{
 struct wb35_reg *VAR_1 = &VAR_0->reg;

 VAR_0->Wb35Rx.rx_halt = 1;
 FUNC_1(VAR_0);

 VAR_0->Wb35Tx.tx_halt = 1;
 FUNC_2(VAR_0);

 VAR_1->D00_DmaControl &= ~0xc0000000;
 FUNC_0(VAR_0, 0x0400, VAR_1->D00_DmaControl);
}
