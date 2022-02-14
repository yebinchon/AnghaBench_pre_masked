
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_host {struct mx1_camera_dev* priv; } ;
struct TYPE_2__ {int parent; } ;
struct soc_camera_device {int devnum; TYPE_1__ dev; } ;
struct mx1_camera_dev {struct soc_camera_device* icd; int dma_chan; scalar_t__ base; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mx1_camera_dev*) ;
 struct soc_camera_host* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct soc_camera_device *VAR_2)
{
 struct soc_camera_host *VAR_3 = FUNC_6(VAR_2->dev.parent);
 struct mx1_camera_dev *VAR_4 = VAR_3->priv;
 unsigned int VAR_5;

 FUNC_0(VAR_2 != VAR_4->icd);


 VAR_5 = FUNC_1(VAR_4->base + VAR_0) & ~VAR_1;
 FUNC_2(VAR_5, VAR_4->base + VAR_0);


 FUNC_4(VAR_4->dma_chan);

 FUNC_3(VAR_2->dev.parent, "MX1 Camera driver detached from camera %d\n",
   VAR_2->devnum);

 FUNC_5(VAR_4);

 VAR_4->icd = ((void*)0);
}
