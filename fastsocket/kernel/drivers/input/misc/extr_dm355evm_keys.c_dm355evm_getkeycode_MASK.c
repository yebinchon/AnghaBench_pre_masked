
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct TYPE_3__ {int keycode; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct input_dev *VAR_2, int VAR_3, int *VAR_4)
{
 if (((unsigned)VAR_3) >= FUNC_0(VAR_1))
  return -VAR_0;

 return VAR_1[VAR_3].keycode;
}
