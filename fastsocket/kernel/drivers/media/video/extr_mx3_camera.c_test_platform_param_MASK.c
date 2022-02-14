
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ v4l2_dev; } ;
struct mx3_camera_dev {int platform_flags; TYPE_2__ soc_host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 int FUNC_0 (int ,char*,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct mx3_camera_dev *VAR_18,
          unsigned char VAR_19, unsigned long *VAR_20)
{






 *VAR_20 = VAR_13 |
  VAR_11 |
  VAR_12 |
  VAR_16 |
  VAR_17 |
  VAR_15 |
  VAR_14 |
  VAR_9 |
  VAR_10;



 switch (VAR_19) {
 case 15:
  if (!(VAR_18->platform_flags & VAR_2))
   return -VAR_0;
  *VAR_20 |= VAR_6 | VAR_5 |
   VAR_8 | VAR_7;
  break;
 case 10:
  if (!(VAR_18->platform_flags & VAR_1))
   return -VAR_0;
  *VAR_20 |= VAR_5 | VAR_8 |
   VAR_7;
  break;
 case 8:
  if (!(VAR_18->platform_flags & VAR_4))
   return -VAR_0;
  *VAR_20 |= VAR_8 | VAR_7;
  break;
 case 4:
  if (!(VAR_18->platform_flags & VAR_3))
   return -VAR_0;
  *VAR_20 |= VAR_7;
  break;
 default:
  FUNC_0(VAR_18->soc_host.v4l2_dev.dev,
    "Unsupported bus width %d\n", VAR_19);
  return -VAR_0;
 }

 return 0;
}
