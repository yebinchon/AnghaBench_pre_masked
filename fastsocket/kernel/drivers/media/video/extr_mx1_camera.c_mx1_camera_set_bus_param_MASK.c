
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_camera_host {struct mx1_camera_dev* priv; } ;
struct TYPE_4__ {int parent; } ;
struct soc_camera_device {int buswidth; TYPE_3__* ops; TYPE_1__ dev; } ;
struct mx1_camera_dev {scalar_t__ base; TYPE_2__* pdata; } ;
typedef int __u32 ;
struct TYPE_6__ {unsigned long (* query_bus_param ) (struct soc_camera_device*) ;int (* set_bus_param ) (struct soc_camera_device*,unsigned long) ;} ;
struct TYPE_5__ {int flags; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 unsigned long FUNC_2 (unsigned long,int ) ;
 unsigned long FUNC_3 (struct soc_camera_device*) ;
 int FUNC_4 (struct soc_camera_device*,unsigned long) ;
 struct soc_camera_host* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct soc_camera_device *VAR_15, __u32 VAR_16)
{
 struct soc_camera_host *VAR_17 = FUNC_5(VAR_15->dev.parent);
 struct mx1_camera_dev *VAR_18 = VAR_17->priv;
 unsigned long VAR_19, VAR_20;
 unsigned int VAR_21;
 int VAR_22;

 VAR_19 = VAR_15->ops->query_bus_param(VAR_15);


 VAR_20 = FUNC_2(VAR_19,
              VAR_4);
 if (!VAR_20)
  return -VAR_5;

 VAR_15->buswidth = 8;


 if ((VAR_20 & VAR_13) &&
  (VAR_20 & VAR_14)) {
   if (!VAR_18->pdata ||
        VAR_18->pdata->flags & VAR_8)
    VAR_20 &= ~VAR_14;
   else
    VAR_20 &= ~VAR_13;
 }

 if ((VAR_20 & VAR_12) &&
  (VAR_20 & VAR_11)) {
   if (!VAR_18->pdata ||
        VAR_18->pdata->flags & VAR_7)
    VAR_20 &= ~VAR_11;
   else
    VAR_20 &= ~VAR_12;
 }

 if ((VAR_20 & VAR_9) &&
  (VAR_20 & VAR_10)) {
   if (!VAR_18->pdata ||
        VAR_18->pdata->flags & VAR_6)
    VAR_20 &= ~VAR_10;
   else
    VAR_20 &= ~VAR_9;
 }

 VAR_22 = VAR_15->ops->set_bus_param(VAR_15, VAR_20);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_21 = FUNC_0(VAR_18->base + VAR_0);

 if (VAR_20 & VAR_12)
  VAR_21 |= VAR_2;
 if (VAR_20 & VAR_13)
  VAR_21 |= VAR_3;
 if (VAR_20 & VAR_10)
  VAR_21 |= VAR_1;

 FUNC_1(VAR_21, VAR_18->base + VAR_0);

 return 0;
}
