
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct soc_camera_host {struct pxa_camera_dev* priv; } ;
struct TYPE_2__ {int parent; } ;
struct soc_camera_device {scalar_t__ user_height; scalar_t__ user_width; TYPE_1__ dev; } ;
struct pxa_camera_dev {int platform_flags; int channels; int mclk_divisor; scalar_t__ base; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;



 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;







 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int VAR_25 ;
 int FUNC_8 (int,int) ;
 int VAR_26 ;
 struct v4l2_subdev* FUNC_9 (struct soc_camera_device*) ;
 struct soc_camera_host* FUNC_10 (int ) ;
 int FUNC_11 (struct v4l2_subdev*,int ,int ,int*) ;

__attribute__((used)) static void FUNC_12(struct soc_camera_device *VAR_27,
      unsigned long VAR_28, __u32 VAR_29)
{
 struct soc_camera_host *VAR_30 = FUNC_10(VAR_27->dev.parent);
 struct pxa_camera_dev *VAR_31 = VAR_30->priv;
 struct v4l2_subdev *VAR_32 = FUNC_9(VAR_27);
 unsigned long VAR_33, VAR_34;
 u32 VAR_35, VAR_36, VAR_37, VAR_38, VAR_39 = 0, VAR_40;
 int VAR_41 = FUNC_11(VAR_32, VAR_26, VAR_25, &VAR_40);

 if (VAR_41 < 0)
  VAR_40 = 0;





 switch (VAR_28 & VAR_21) {
 case 137:
  VAR_33 = 4;
  VAR_34 = 0x40;
  break;
 case 135:
  VAR_33 = 3;
  VAR_34 = 0x20;
  break;
 default:




 case 136:
  VAR_33 = 2;
  VAR_34 = 0;
 }

 if (VAR_31->platform_flags & VAR_20)
  VAR_39 |= VAR_15;
 if (VAR_31->platform_flags & VAR_19)
  VAR_39 |= VAR_14;
 if (VAR_28 & VAR_23)
  VAR_39 |= VAR_16;
 if (VAR_28 & VAR_22)
  VAR_39 |= VAR_13;
 if (VAR_28 & VAR_24)
  VAR_39 |= VAR_17;

 VAR_35 = FUNC_6(VAR_31->base + VAR_0);
 if (VAR_35 & VAR_2)
  FUNC_7(VAR_35 & ~VAR_2, VAR_31->base + VAR_0);

 VAR_36 = FUNC_1(VAR_27->user_width - 1) | VAR_34 | VAR_33;

 switch (VAR_29) {
 case 130:
  VAR_31->channels = 3;
  VAR_36 |= VAR_9;







 case 132:
 case 131:
 case 129:
 case 128:
  VAR_36 |= FUNC_0(2);
  break;
 case 134:
  VAR_36 |= FUNC_3(1) | FUNC_2(2) |
   VAR_8 | FUNC_0(1);
  break;
 case 133:
  VAR_36 |= FUNC_0(1) | FUNC_3(2);
  break;
 }

 VAR_37 = 0;
 VAR_38 = FUNC_5(VAR_27->user_height - 1) |
  FUNC_4(FUNC_8((u32)255, VAR_40));
 VAR_39 |= VAR_31->mclk_divisor;

 FUNC_7(VAR_36, VAR_31->base + VAR_7);
 FUNC_7(VAR_37, VAR_31->base + VAR_10);
 FUNC_7(VAR_38, VAR_31->base + VAR_11);
 FUNC_7(VAR_39, VAR_31->base + VAR_12);


 VAR_35 = (VAR_35 & VAR_2) | (VAR_31->platform_flags & VAR_18 ?
  VAR_4 : (VAR_6 | VAR_5));
 VAR_35 |= VAR_1 | VAR_3;
 FUNC_7(VAR_35, VAR_31->base + VAR_0);
}
