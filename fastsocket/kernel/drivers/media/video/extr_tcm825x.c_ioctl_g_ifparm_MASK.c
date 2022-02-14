
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct TYPE_5__ {int clock_curr; } ;
struct TYPE_6__ {TYPE_2__ bt656; } ;
struct v4l2_ifparm {TYPE_3__ u; } ;
struct v4l2_fract {int denominator; int numerator; } ;
struct tcm825x_sensor {TYPE_1__* platform_data; struct v4l2_fract timeperframe; } ;
struct TYPE_4__ {int (* ifparm ) (struct v4l2_ifparm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct v4l2_ifparm*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_int_device *VAR_5, struct v4l2_ifparm *VAR_6)
{
 struct tcm825x_sensor *VAR_7 = VAR_5->priv;
 struct v4l2_fract *VAR_8 = &VAR_7->timeperframe;
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_11 = VAR_7->platform_data->ifparm(VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_8->denominator / VAR_8->numerator;

 VAR_9 = (VAR_10 <= VAR_0) ?
  (2457 * VAR_10) / VAR_2 :
  (2457 * VAR_10) / VAR_1;
 VAR_9 *= 10000;

 VAR_9 = FUNC_1(VAR_9, (u32)VAR_3);
 VAR_9 = FUNC_0(VAR_9, (u32)VAR_4);

 VAR_6->u.bt656.clock_curr = VAR_9;

 return 0;
}
