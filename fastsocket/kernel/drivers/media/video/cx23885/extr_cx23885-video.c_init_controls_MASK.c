
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_control {int value; int id; } ;
struct cx23885_dev {int dummy; } ;
struct TYPE_3__ {int default_value; int id; } ;
struct TYPE_4__ {TYPE_1__ v; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct cx23885_dev*,struct v4l2_control*) ;

__attribute__((used)) static void FUNC_1(struct cx23885_dev *VAR_2)
{
 struct v4l2_control VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3.id = VAR_1[VAR_4].v.id;
  VAR_3.value = VAR_1[VAR_4].v.default_value;

  FUNC_0(VAR_2, &VAR_3);
 }
}
