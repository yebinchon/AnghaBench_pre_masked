
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; } ;
struct input_dev {int repeat_key; scalar_t__* rep; TYPE_1__ timer; int evbit; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_4, int VAR_5)
{
 if (FUNC_2(VAR_0, VAR_4->evbit) &&
     VAR_4->rep[VAR_2] && VAR_4->rep[VAR_1] &&
     VAR_4->timer.data) {
  VAR_4->repeat_key = VAR_5;
  FUNC_0(&VAR_4->timer,
     VAR_3 + FUNC_1(VAR_4->rep[VAR_1]));
 }
}
