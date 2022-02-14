
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_camera_dev {int platform_flags; } ;


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

__attribute__((used)) static int FUNC_0(struct pxa_camera_dev *VAR_17,
          unsigned char VAR_18, unsigned long *VAR_19)
{





 *VAR_19 = (VAR_17->platform_flags & VAR_4 ?
    VAR_11 : VAR_14) |
  VAR_9 |
  VAR_10 |
  VAR_15 |
  VAR_16 |
  VAR_8 |
  VAR_13 |
  VAR_12;


 switch (VAR_18) {
 case 10:
  if (!(VAR_17->platform_flags & VAR_1))
   return -VAR_0;
  *VAR_19 |= VAR_5;
  break;
 case 9:
  if (!(VAR_17->platform_flags & VAR_3))
   return -VAR_0;
  *VAR_19 |= VAR_7;
  break;
 case 8:
  if (!(VAR_17->platform_flags & VAR_2))
   return -VAR_0;
  *VAR_19 |= VAR_6;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
