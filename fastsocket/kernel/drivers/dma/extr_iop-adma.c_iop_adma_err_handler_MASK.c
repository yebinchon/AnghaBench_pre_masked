
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iop_adma_chan {TYPE_2__* device; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ common; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_2 (struct iop_adma_chan*) ;
 unsigned long FUNC_3 (struct iop_adma_chan*) ;
 scalar_t__ FUNC_4 (unsigned long,struct iop_adma_chan*) ;
 scalar_t__ FUNC_5 (unsigned long,struct iop_adma_chan*) ;
 scalar_t__ FUNC_6 (unsigned long,struct iop_adma_chan*) ;
 scalar_t__ FUNC_7 (unsigned long,struct iop_adma_chan*) ;
 scalar_t__ FUNC_8 (unsigned long,struct iop_adma_chan*) ;
 scalar_t__ FUNC_9 (unsigned long,struct iop_adma_chan*) ;
 scalar_t__ FUNC_10 (unsigned long,struct iop_adma_chan*) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_2, void *VAR_3)
{
 struct iop_adma_chan *VAR_4 = VAR_3;
 unsigned long VAR_5 = FUNC_3(VAR_4);

 FUNC_1(VAR_1, VAR_4->device->common.dev,
  "error ( %s%s%s%s%s%s%s)\n",
  FUNC_5(VAR_5, VAR_4) ? "int_parity " : "",
  FUNC_7(VAR_5, VAR_4) ? "mcu_abort " : "",
  FUNC_6(VAR_5, VAR_4) ? "int_tabort " : "",
  FUNC_4(VAR_5, VAR_4) ? "int_mabort " : "",
  FUNC_9(VAR_5, VAR_4) ? "pci_tabort " : "",
  FUNC_8(VAR_5, VAR_4) ? "pci_mabort " : "",
  FUNC_10(VAR_5, VAR_4) ? "split_tx " : "");

 FUNC_2(VAR_4);

 FUNC_0();

 return VAR_0;
}
