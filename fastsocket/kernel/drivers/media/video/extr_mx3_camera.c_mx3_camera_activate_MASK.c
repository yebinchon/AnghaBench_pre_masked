
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int parent; } ;
struct soc_camera_device {TYPE_1__ dev; } ;
struct mx3_camera_dev {int platform_flags; int clk; int mclk; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 long FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,long) ;
 int FUNC_3 (struct mx3_camera_dev*,int ) ;
 int FUNC_4 (struct mx3_camera_dev*,int,int ) ;
 int FUNC_5 (int ,char*,int,long) ;

__attribute__((used)) static void FUNC_6(struct mx3_camera_dev *VAR_21,
    struct soc_camera_device *VAR_22)
{
 u32 VAR_23;
 long VAR_24;


 FUNC_4(VAR_21, (640 - 1) | ((480 - 1) << 16), VAR_0);

 VAR_23 = FUNC_3(VAR_21, VAR_1) & 0xffff0000;
 FUNC_4(VAR_21, VAR_23, VAR_1);


 VAR_23 = 0 << VAR_10;


 VAR_23 |= VAR_3;

 if (VAR_21->platform_flags & VAR_14)
  VAR_23 |= 3 << VAR_5;
 else if (VAR_21->platform_flags & VAR_13)
  VAR_23 |= 2 << VAR_5;
 else if (VAR_21->platform_flags & VAR_15)
  VAR_23 |= 1 << VAR_5;
 else
  VAR_23 |= 0 << VAR_5;

 if (VAR_21->platform_flags & VAR_12)
  VAR_23 |= 1 << VAR_9;
 if (VAR_21->platform_flags & VAR_17)
  VAR_23 |= 1 << VAR_6;
 if (VAR_21->platform_flags & VAR_16)
  VAR_23 |= 1 << VAR_4;
 if (VAR_21->platform_flags & VAR_19)
  VAR_23 |= 1 << VAR_8;
 if (VAR_21->platform_flags & VAR_18)
  VAR_23 |= 1 << VAR_7;
 if (VAR_21->platform_flags & VAR_20)
  VAR_23 |= 1 << VAR_11;


 FUNC_4(VAR_21, VAR_23, VAR_2);

 FUNC_0(VAR_21->clk);
 VAR_24 = FUNC_1(VAR_21->clk, VAR_21->mclk);
 FUNC_5(VAR_22->dev.parent, "Set SENS_CONF to %x, rate %ld\n", VAR_23, VAR_24);
 if (VAR_24)
  FUNC_2(VAR_21->clk, VAR_24);
}
