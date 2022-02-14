
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int* bytes; } ;
struct CHIPSTATE {TYPE_1__ shadow; struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct CHIPSTATE*,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct CHIPSTATE *VAR_10)
{
 struct v4l2_subdev *VAR_11 = &VAR_10->sd;
 int VAR_12,VAR_13,VAR_14;
 int VAR_15;

 VAR_14 = VAR_6;

 if(-1 == (VAR_12 = FUNC_0(VAR_10,VAR_1)))
  return VAR_14;
 if(-1 == (VAR_13 = FUNC_0(VAR_10,VAR_3)))
  return VAR_14;
 if(-1 == (VAR_15 = FUNC_0(VAR_10,VAR_2)))
  return VAR_14;


 VAR_10->shadow.bytes[VAR_0-2] = VAR_12;
 VAR_10->shadow.bytes[VAR_0-1] = VAR_13;

 if(VAR_9) {
  if(VAR_13 & 0x02)
   VAR_14 |= VAR_7;
  if(VAR_13 & 0x01)
   VAR_14 |= VAR_4 | VAR_5;
 } else {
  if(VAR_12 & 0x02)
   VAR_14 |= VAR_7;
  if(VAR_12 & 0x04)
   VAR_14 |= VAR_4 | VAR_5;
 }

 FUNC_1(1, VAR_8, VAR_11, "tda9874a_getmode(): DSR=0x%X, NSR=0x%X, NECR=0x%X, return: %d.\n",
   VAR_12, VAR_13, VAR_15, VAR_14);
 return VAR_14;
}
