
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {scalar_t__ type; int frequency; } ;
struct dvb_tuner_ops {int (* get_frequency ) (TYPE_2__*,int*) ;} ;
struct TYPE_3__ {struct dvb_tuner_ops tuner_ops; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct tuner {scalar_t__ mode; int tv_freq; int radio_freq; TYPE_2__ fe; int standby; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tuner*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int*) ;
 struct tuner* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2, struct v4l2_frequency *VAR_3)
{
 struct tuner *VAR_4 = FUNC_3(VAR_2);
 struct dvb_tuner_ops *VAR_5 = &VAR_4->fe.ops.tuner_ops;

 if (FUNC_1(VAR_4, VAR_3->type) == -VAR_0)
  return 0;
 VAR_3->type = VAR_4->mode;
 if (VAR_5->get_frequency && !VAR_4->standby) {
  u32 VAR_6;

  VAR_5->get_frequency(&VAR_4->fe, &VAR_6);
  VAR_3->frequency = (VAR_1 == VAR_4->mode) ?
   FUNC_0(VAR_6 * 2, 125) :
   FUNC_0(VAR_6, 62500);
 } else {
  VAR_3->frequency = (VAR_1 == VAR_4->mode) ?
   VAR_4->radio_freq : VAR_4->tv_freq;
 }
 return 0;
}
