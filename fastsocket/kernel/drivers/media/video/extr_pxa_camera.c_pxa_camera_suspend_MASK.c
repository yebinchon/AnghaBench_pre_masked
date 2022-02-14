
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_camera_host {struct pxa_camera_dev* priv; } ;
struct TYPE_4__ {int parent; } ;
struct soc_camera_device {TYPE_1__ dev; } ;
struct pxa_camera_dev {TYPE_3__* icd; scalar_t__ base; void** save_cicr; } ;
typedef int pm_message_t ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* suspend ) (TYPE_3__*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 struct soc_camera_host* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct soc_camera_device *VAR_5, pm_message_t VAR_6)
{
 struct soc_camera_host *VAR_7 = FUNC_2(VAR_5->dev.parent);
 struct pxa_camera_dev *VAR_8 = VAR_7->priv;
 int VAR_9 = 0, VAR_10 = 0;

 VAR_8->save_cicr[VAR_9++] = FUNC_0(VAR_8->base + VAR_0);
 VAR_8->save_cicr[VAR_9++] = FUNC_0(VAR_8->base + VAR_1);
 VAR_8->save_cicr[VAR_9++] = FUNC_0(VAR_8->base + VAR_2);
 VAR_8->save_cicr[VAR_9++] = FUNC_0(VAR_8->base + VAR_3);
 VAR_8->save_cicr[VAR_9++] = FUNC_0(VAR_8->base + VAR_4);

 if ((VAR_8->icd) && (VAR_8->icd->ops->suspend))
  VAR_10 = VAR_8->icd->ops->suspend(VAR_8->icd, VAR_6);

 return VAR_10;
}
