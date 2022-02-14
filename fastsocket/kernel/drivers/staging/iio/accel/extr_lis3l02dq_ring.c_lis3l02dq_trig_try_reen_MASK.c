
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lis3l02dq_state {int inter; TYPE_1__* us; } ;
struct iio_trigger {struct lis3l02dq_state* private_data; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct iio_trigger *VAR_1)
{
 struct lis3l02dq_state *VAR_2 = VAR_1->private_data;
 FUNC_1(VAR_2->us->irq);

 if (FUNC_2(FUNC_3(VAR_2->us->irq)))
  if (VAR_2->inter == 0) {

   FUNC_0(VAR_2->us->irq);
   if (VAR_2->inter == 1) {


    FUNC_1(VAR_2->us->irq);
    return 0;
   }
   return -VAR_0;
  }

 return 0;
}
