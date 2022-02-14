
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; int flags; } ;
struct hdpvr_options {int bitrate_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_queryctrl*,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct hdpvr_options *VAR_8, struct v4l2_queryctrl *VAR_9,
     int VAR_10)
{
 int VAR_11;

 switch (VAR_9->id) {
 case 137:
  return FUNC_0(VAR_9, 0x0, 0xff, 1, 0x86);
 case 136:
  return FUNC_0(VAR_9, 0x0, 0xff, 1, 0x80);
 case 129:
  return FUNC_0(VAR_9, 0x0, 0xff, 1, 0x80);
 case 135:
  return FUNC_0(VAR_9, 0x0, 0xff, 1, 0x80);
 case 128:
  return FUNC_0(VAR_9, 0x0, 0xff, 1, 0x80);
 case 134:
  return FUNC_0(
   VAR_9, VAR_3,
   VAR_10 ? VAR_4
   : VAR_3,
   1, VAR_3);
 case 130:
  return FUNC_0(
   VAR_9, VAR_7,
   VAR_7, 1,
   VAR_7);



 case 132:
  return FUNC_0(
   VAR_9, VAR_6,
   VAR_5, 1,
   VAR_5);

 case 133:
  return FUNC_0(VAR_9, 1000000, 13500000, 100000,
         6500000);
 case 131:
  VAR_11 = FUNC_0(VAR_9, 1100000, 20200000, 100000,
        9000000);
  if (!VAR_11 && VAR_8->bitrate_mode == VAR_1)
   VAR_9->flags |= VAR_2;
  return VAR_11;
 default:
  return -VAR_0;
 }
}
