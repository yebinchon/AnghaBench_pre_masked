
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_control {int value; int id; } ;
struct cx25821_dev {int dummy; } ;
struct TYPE_2__ {int default_value; int id; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct cx25821_dev*,struct v4l2_control*,int) ;

__attribute__((used)) static void FUNC_1(struct cx25821_dev *VAR_2, int VAR_3)
{
 struct v4l2_control VAR_4;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4.id = VAR_1[VAR_5].id;
  VAR_4.value = VAR_1[VAR_5].default_value;

  FUNC_0(VAR_2, &VAR_4, VAR_3);
 }
}
