
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipath_devdata {TYPE_1__* pcidev; } ;
struct TYPE_4__ {int sps_txeparity; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ipath_devdata *VAR_1)
{
 ++VAR_0.sps_txeparity;
 FUNC_0(&VAR_1->pcidev->dev,
  "Recovering from TXE PIO parity error\n");
}
