
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dma; } ;
struct omap24xxcam_device {int dev; TYPE_1__ sgdma; int mmio_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct omap24xxcam_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct omap24xxcam_device *VAR_8 = (struct omap24xxcam_device *)VAR_7;
 u32 VAR_9;
 unsigned int VAR_10 = 0;

 VAR_9 = FUNC_4(VAR_8->mmio_base, VAR_0);

 if (VAR_9 &
     (VAR_4 | VAR_3
      | VAR_2)) {
  FUNC_3(&VAR_8->sgdma.dma);
  VAR_10 = 1;
 }
 if (VAR_9 & VAR_1) {
  FUNC_2(VAR_8);
  VAR_10 = 1;
 }
 if (VAR_9 & VAR_5)
  FUNC_1(VAR_8->dev, "unhandled camera MMU interrupt!\n");

 return FUNC_0(VAR_10);
}
