
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ipath_devdata {TYPE_2__* pcidev; TYPE_1__* ipath_sdma_descq; } ;
typedef int dma_addr_t ;
typedef int __le64 ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int * qw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,size_t,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ipath_devdata *VAR_1, unsigned VAR_2)
{
 __le64 *VAR_3 = &VAR_1->ipath_sdma_descq[VAR_2].qw[0];
 u64 VAR_4[2];
 dma_addr_t VAR_5;
 size_t VAR_6;

 VAR_4[0] = FUNC_1(VAR_3[0]);
 VAR_4[1] = FUNC_1(VAR_3[1]);

 VAR_5 = (VAR_4[1] << 32) | (VAR_4[0] >> 32);
 VAR_6 = (VAR_4[0] >> 14) & (0x7ffULL << 2);
 FUNC_0(&VAR_1->pcidev->dev, VAR_5, VAR_6, VAR_0);
}
