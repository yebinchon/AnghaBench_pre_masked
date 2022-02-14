
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct soc_camera_host {struct sh_mobile_ceu_dev* priv; } ;
struct TYPE_8__ {int parent; } ;
struct soc_camera_device {int user_height; int user_width; TYPE_4__ dev; TYPE_3__* current_fmt; TYPE_1__* ops; struct sh_mobile_ceu_cam* host_priv; } ;
struct sh_mobile_ceu_dev {int is_16bit; unsigned long cflcr; scalar_t__ is_interlaced; } ;
struct sh_mobile_ceu_cam {TYPE_2__* camera_fmt; } ;
typedef int __u32 ;
struct TYPE_7__ {int fourcc; } ;
struct TYPE_6__ {int fourcc; } ;
struct TYPE_5__ {unsigned long (* query_bus_param ) (struct soc_camera_device*) ;int (* set_bus_param ) (struct soc_camera_device*,unsigned long) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_1 (struct sh_mobile_ceu_dev*,int ) ;
 int FUNC_2 (struct sh_mobile_ceu_dev*) ;
 int FUNC_3 (struct sh_mobile_ceu_dev*,int ,unsigned long) ;
 int FUNC_4 (int ,char*,int,int,int,int,int ,int ) ;
 int FUNC_5 (struct sh_mobile_ceu_dev*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct soc_camera_device*,int ,int ) ;
 unsigned long FUNC_8 (unsigned long,int ) ;
 unsigned long FUNC_9 (struct soc_camera_device*) ;
 int FUNC_10 (struct soc_camera_device*,unsigned long) ;
 struct soc_camera_host* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct soc_camera_device *VAR_12,
           __u32 VAR_13)
{
 struct soc_camera_host *VAR_14 = FUNC_11(VAR_12->dev.parent);
 struct sh_mobile_ceu_dev *VAR_15 = VAR_14->priv;
 int VAR_16;
 unsigned long VAR_17, VAR_18, VAR_19;
 int VAR_20;
 struct sh_mobile_ceu_cam *VAR_21 = VAR_12->host_priv;
 u32 VAR_22 = FUNC_2(VAR_15);

 VAR_17 = VAR_12->ops->query_bus_param(VAR_12);
 VAR_18 = FUNC_8(VAR_17,
             FUNC_5(VAR_15));
 if (!VAR_18)
  return -VAR_8;

 VAR_16 = VAR_12->ops->set_bus_param(VAR_12, VAR_18);
 if (VAR_16 < 0)
  return VAR_16;

 switch (VAR_18 & VAR_9) {
 case 136:
  VAR_15->is_16bit = 0;
  break;
 case 137:
  VAR_15->is_16bit = 1;
  break;
 default:
  return -VAR_8;
 }

 FUNC_3(VAR_15, VAR_7, 0);
 FUNC_3(VAR_15, VAR_6, 0);

 VAR_19 = 0x00000010;
 VAR_20 = 0;

 switch (VAR_12->current_fmt->fourcc) {
 case 135:
 case 133:
  VAR_20 = 1;

 case 134:
 case 132:
  switch (VAR_21->camera_fmt->fourcc) {
  case 131:
   VAR_19 = 0x00000000;
   break;
  case 130:
   VAR_19 = 0x00000100;
   break;
  case 129:
   VAR_19 = 0x00000200;
   break;
  case 128:
   VAR_19 = 0x00000300;
   break;
  default:
   FUNC_0();
  }
 }

 if (VAR_12->current_fmt->fourcc == 133 ||
     VAR_12->current_fmt->fourcc == 132)
  VAR_19 ^= 0x00000100;

 VAR_19 |= VAR_18 & VAR_11 ? 1 << 1 : 0;
 VAR_19 |= VAR_18 & VAR_10 ? 1 << 0 : 0;
 VAR_19 |= VAR_15->is_16bit ? 1 << 12 : 0;
 FUNC_3(VAR_15, VAR_1, VAR_19);

 FUNC_3(VAR_15, VAR_2, 0x00300000);
 FUNC_3(VAR_15, VAR_0, VAR_15->is_interlaced ? 0x101 : 0);

 FUNC_7(VAR_12, VAR_12->user_width, VAR_12->user_height);
 FUNC_6(1);

 FUNC_3(VAR_15, VAR_4, VAR_15->cflcr);
 VAR_19 = 0x00000017;
 if (VAR_20)
  VAR_19 &= ~0x00000010;

 FUNC_3(VAR_15, VAR_3, VAR_19);
 FUNC_3(VAR_15, VAR_5, 0);

 FUNC_4(VAR_12->dev.parent, "S_FMT successful for %c%c%c%c %ux%u\n",
  VAR_13 & 0xff, (VAR_13 >> 8) & 0xff,
  (VAR_13 >> 16) & 0xff, (VAR_13 >> 24) & 0xff,
  VAR_12->user_width, VAR_12->user_height);

 FUNC_1(VAR_15, VAR_22);


 return 0;
}
