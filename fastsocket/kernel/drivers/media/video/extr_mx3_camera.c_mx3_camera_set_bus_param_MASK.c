
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct soc_camera_host {struct mx3_camera_dev* priv; } ;
struct soc_camera_format_xlate {TYPE_3__* host_fmt; } ;
struct TYPE_4__ {struct device* parent; } ;
struct soc_camera_device {TYPE_2__* ops; int buswidth; TYPE_1__ dev; } ;
struct mx3_camera_dev {int platform_flags; } ;
struct device {int dummy; } ;
typedef int __u32 ;
struct TYPE_6__ {int depth; } ;
struct TYPE_5__ {unsigned long (* query_bus_param ) (struct soc_camera_device*) ;int (* set_bus_param ) (struct soc_camera_device*,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 int FUNC_0 (struct mx3_camera_dev*,int ) ;
 int FUNC_1 (struct mx3_camera_dev*,int,int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ) ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 struct soc_camera_format_xlate* FUNC_5 (struct soc_camera_device*,int ) ;
 unsigned long FUNC_6 (struct soc_camera_device*) ;
 int FUNC_7 (struct soc_camera_device*,unsigned long) ;
 int FUNC_8 (struct mx3_camera_dev*,int ,unsigned long*) ;
 struct soc_camera_host* FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct soc_camera_device *VAR_26, __u32 VAR_27)
{
 struct soc_camera_host *VAR_28 = FUNC_9(VAR_26->dev.parent);
 struct mx3_camera_dev *VAR_29 = VAR_28->priv;
 unsigned long VAR_30, VAR_31, VAR_32;
 u32 VAR_33, VAR_34;
 int VAR_35 = FUNC_8(VAR_29, VAR_26->buswidth, &VAR_30);
 const struct soc_camera_format_xlate *VAR_36;
 struct device *VAR_37 = VAR_26->dev.parent;

 VAR_36 = FUNC_5(VAR_26, VAR_27);
 if (!VAR_36) {
  FUNC_3(VAR_37, "Format %x not found\n", VAR_27);
  return -VAR_8;
 }

 FUNC_2(VAR_37, "requested bus width %d bit: %d\n",
  VAR_26->buswidth, VAR_35);

 if (VAR_35 < 0)
  return VAR_35;

 VAR_31 = VAR_26->ops->query_bus_param(VAR_26);

 VAR_32 = FUNC_4(VAR_31, VAR_30);
 FUNC_2(VAR_37, "Flags cam: 0x%lx host: 0x%lx common: 0x%lx\n",
  VAR_31, VAR_30, VAR_32);
 if (!VAR_32) {
  FUNC_2(VAR_37, "no common flags");
  return -VAR_8;
 }


 if ((VAR_32 & VAR_20) &&
     (VAR_32 & VAR_21)) {
  if (VAR_29->platform_flags & VAR_10)
   VAR_32 &= ~VAR_20;
  else
   VAR_32 &= ~VAR_21;
 }

 if ((VAR_32 & VAR_24) &&
     (VAR_32 & VAR_25)) {
  if (VAR_29->platform_flags & VAR_12)
   VAR_32 &= ~VAR_24;
  else
   VAR_32 &= ~VAR_25;
 }

 if ((VAR_32 & VAR_18) &&
     (VAR_32 & VAR_19)) {
  if (VAR_29->platform_flags & VAR_9)
   VAR_32 &= ~VAR_18;
  else
   VAR_32 &= ~VAR_19;
 }

 if ((VAR_32 & VAR_23) &&
     (VAR_32 & VAR_22)) {
  if (VAR_29->platform_flags & VAR_11)
   VAR_32 &= ~VAR_23;
  else
   VAR_32 &= ~VAR_22;
 }



 if (VAR_32 & VAR_14)
  VAR_32 = (VAR_32 & ~VAR_17) |
   VAR_14;
 else if (VAR_32 & VAR_13)
  VAR_32 = (VAR_32 & ~VAR_17) |
   VAR_13;
 else if (VAR_32 & VAR_16)
  VAR_32 = (VAR_32 & ~VAR_17) |
   VAR_16;
 else
  VAR_32 = (VAR_32 & ~VAR_17) |
   VAR_15;

 VAR_35 = VAR_26->ops->set_bus_param(VAR_26, VAR_32);
 if (VAR_35 < 0) {
  FUNC_2(VAR_37, "camera set_bus_param(%lx) returned %d\n",
   VAR_32, VAR_35);
  return VAR_35;
 }







 VAR_34 = FUNC_0(VAR_29, VAR_0) &
  ~((1 << VAR_7) |
    (1 << VAR_5) |
    (1 << VAR_3) |
    (1 << VAR_6) |
    (3 << VAR_2) |
    (3 << VAR_4));




 VAR_34 |= VAR_1;

 if (VAR_32 & VAR_22)
  VAR_34 |= 1 << VAR_6;
 if (VAR_32 & VAR_21)
  VAR_34 |= 1 << VAR_5;
 if (VAR_32 & VAR_25)
  VAR_34 |= 1 << VAR_7;
 if (VAR_32 & VAR_19)
  VAR_34 |= 1 << VAR_3;


 switch (VAR_36->host_fmt->depth) {
 case 4:
  VAR_33 = 0 << VAR_4;
  break;
 case 8:
  VAR_33 = 1 << VAR_4;
  break;
 case 10:
  VAR_33 = 2 << VAR_4;
  break;
 default:




 case 15:
  VAR_33 = 3 << VAR_4;
 }

 FUNC_1(VAR_29, VAR_34 | VAR_33, VAR_0);

 FUNC_2(VAR_37, "Set SENS_CONF to %x\n", VAR_34 | VAR_33);

 return 0;
}
