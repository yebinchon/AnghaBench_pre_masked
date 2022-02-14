
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lis3l02dq_state {TYPE_1__* trig; } ;
struct iio_dev {struct lis3l02dq_state* dev_data; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct iio_dev *VAR_0)
{
 struct lis3l02dq_state *VAR_1 = VAR_0->dev_data;

 FUNC_1(VAR_1->trig);
 FUNC_2(VAR_1->trig->name);
 FUNC_0(VAR_1->trig);
}
