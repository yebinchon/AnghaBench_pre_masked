
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_mbus_pixelfmt {int bits_per_sample; } ;
struct soc_camera_host {struct pxa_camera_dev* priv; } ;
struct TYPE_4__ {int parent; } ;
struct soc_camera_device {TYPE_3__* ops; TYPE_2__* current_fmt; struct pxa_cam* host_priv; TYPE_1__ dev; } ;
struct pxa_camera_dev {int channels; int platform_flags; } ;
struct pxa_cam {unsigned long flags; } ;
typedef int __u32 ;
struct TYPE_6__ {unsigned long (* query_bus_param ) (struct soc_camera_device*) ;int (* set_bus_param ) (struct soc_camera_device*,unsigned long) ;} ;
struct TYPE_5__ {int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_0 (struct soc_camera_device*,unsigned long,int ) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 struct soc_mbus_pixelfmt* FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct soc_camera_device*) ;
 int FUNC_4 (struct soc_camera_device*,unsigned long) ;
 int FUNC_5 (struct pxa_camera_dev*,int ,unsigned long*) ;
 struct soc_camera_host* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct soc_camera_device *VAR_10, __u32 VAR_11)
{
 struct soc_camera_host *VAR_12 = FUNC_6(VAR_10->dev.parent);
 struct pxa_camera_dev *VAR_13 = VAR_12->priv;
 unsigned long VAR_14, VAR_15, VAR_16;
 const struct soc_mbus_pixelfmt *VAR_17;
 int VAR_18;
 struct pxa_cam *VAR_19 = VAR_10->host_priv;

 VAR_17 = FUNC_2(VAR_10->current_fmt->code);
 if (!VAR_17)
  return -VAR_0;

 VAR_18 = FUNC_5(VAR_13, VAR_17->bits_per_sample, &VAR_14);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_15 = VAR_10->ops->query_bus_param(VAR_10);

 VAR_16 = FUNC_1(VAR_15, VAR_14);
 if (!VAR_16)
  return -VAR_0;

 VAR_13->channels = 1;


 if ((VAR_16 & VAR_4) &&
     (VAR_16 & VAR_5)) {
  if (VAR_13->platform_flags & VAR_1)
   VAR_16 &= ~VAR_4;
  else
   VAR_16 &= ~VAR_5;
 }

 if ((VAR_16 & VAR_8) &&
     (VAR_16 & VAR_9)) {
  if (VAR_13->platform_flags & VAR_3)
   VAR_16 &= ~VAR_8;
  else
   VAR_16 &= ~VAR_9;
 }

 if ((VAR_16 & VAR_7) &&
     (VAR_16 & VAR_6)) {
  if (VAR_13->platform_flags & VAR_2)
   VAR_16 &= ~VAR_7;
  else
   VAR_16 &= ~VAR_6;
 }

 VAR_19->flags = VAR_16;

 VAR_18 = VAR_10->ops->set_bus_param(VAR_10, VAR_16);
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_0(VAR_10, VAR_16, VAR_11);

 return 0;
}
