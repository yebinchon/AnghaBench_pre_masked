
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int dummy; } ;
struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct tcm825x_sensor {struct v4l2_pix_format pix; } ;


 int FUNC_0 (struct v4l2_int_device*,struct v4l2_format*) ;
 int FUNC_1 (struct v4l2_int_device*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_int_device *VAR_0,
    struct v4l2_format *VAR_1)
{
 struct tcm825x_sensor *VAR_2 = VAR_0->priv;
 struct v4l2_pix_format *VAR_3 = &VAR_1->fmt.pix;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0);

 VAR_2->pix = *VAR_3;

 return VAR_4;
}
