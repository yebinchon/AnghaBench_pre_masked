
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_host {struct mx3_camera_dev* priv; } ;
struct TYPE_2__ {int parent; } ;
struct soc_camera_device {int devnum; TYPE_1__ dev; } ;
struct mx3_camera_dev {struct soc_camera_device* icd; int clk; struct idmac_channel** idmac_channel; } ;
struct idmac_channel {int dma_chan; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 struct soc_camera_host* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct soc_camera_device *VAR_0)
{
 struct soc_camera_host *VAR_1 = FUNC_4(VAR_0->dev.parent);
 struct mx3_camera_dev *VAR_2 = VAR_1->priv;
 struct idmac_channel **VAR_3 = &VAR_2->idmac_channel[0];

 FUNC_0(VAR_0 != VAR_2->icd);

 if (*VAR_3) {
  FUNC_3(&(*VAR_3)->dma_chan);
  *VAR_3 = ((void*)0);
 }

 FUNC_1(VAR_2->clk);

 VAR_2->icd = ((void*)0);

 FUNC_2(VAR_0->dev.parent, "MX3 Camera driver detached from camera %d\n",
   VAR_0->devnum);
}
