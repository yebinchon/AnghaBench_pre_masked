
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma; } ;
struct omap24xxcam_device {TYPE_1__ sgdma; int mmio_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct omap24xxcam_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct omap24xxcam_device*) ;
 int FUNC_3 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct omap24xxcam_device *VAR_5)
{
 FUNC_2(VAR_5);


 FUNC_3(VAR_5->mmio_base, VAR_3,
       VAR_4);


 FUNC_3(VAR_5->mmio_base,
       VAR_0 + VAR_1,
       VAR_2);

 FUNC_0(VAR_5);

 FUNC_1(&VAR_5->sgdma.dma);
}
