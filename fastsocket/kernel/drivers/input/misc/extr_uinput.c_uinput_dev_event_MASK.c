
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uinput_device {size_t head; int waitq; TYPE_1__* buff; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {unsigned int type; unsigned int code; int value; int time; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct uinput_device* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_1, unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct uinput_device *VAR_5 = FUNC_1(VAR_1);

 VAR_5->buff[VAR_5->head].type = VAR_2;
 VAR_5->buff[VAR_5->head].code = VAR_3;
 VAR_5->buff[VAR_5->head].value = VAR_4;
 FUNC_0(&VAR_5->buff[VAR_5->head].time);
 VAR_5->head = (VAR_5->head + 1) % VAR_0;

 FUNC_2(&VAR_5->waitq);

 return 0;
}
