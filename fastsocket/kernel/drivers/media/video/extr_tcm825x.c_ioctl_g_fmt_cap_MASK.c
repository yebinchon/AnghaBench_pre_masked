
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct tcm825x_sensor {int pix; } ;



__attribute__((used)) static int FUNC_0(struct v4l2_int_device *VAR_0,
    struct v4l2_format *VAR_1)
{
 struct tcm825x_sensor *VAR_2 = VAR_0->priv;

 VAR_1->fmt.pix = VAR_2->pix;

 return 0;
}
