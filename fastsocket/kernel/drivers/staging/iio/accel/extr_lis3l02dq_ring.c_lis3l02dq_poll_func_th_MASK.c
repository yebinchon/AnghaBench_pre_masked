
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lis3l02dq_state {int inter; int work_trigger_to_ring; int last_timestamp; } ;
struct iio_dev {TYPE_1__* trig; } ;
struct TYPE_2__ {int timestamp; } ;


 struct lis3l02dq_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iio_dev *VAR_0)
{
  struct lis3l02dq_state *VAR_1 = FUNC_0(VAR_0);
 VAR_1->last_timestamp = VAR_0->trig->timestamp;
 FUNC_1(&VAR_1->work_trigger_to_ring);






 VAR_1->inter = 1;
}
