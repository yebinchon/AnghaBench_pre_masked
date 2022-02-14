
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct as_data {void** last_check_fifo; long* fifo_expire; TYPE_1__* fifo_list; } ;
struct TYPE_2__ {int next; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct request* FUNC_1 (int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (void*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct as_data *VAR_1, int VAR_2)
{
 struct request *VAR_3;
 long VAR_4;

 VAR_4 = VAR_0 - VAR_1->last_check_fifo[VAR_2];
 if (FUNC_4(VAR_4 < 0))
  VAR_4 = -VAR_4;
 if (VAR_4 < VAR_1->fifo_expire[VAR_2])
  return 0;

 VAR_1->last_check_fifo[VAR_2] = VAR_0;

 if (FUNC_0(&VAR_1->fifo_list[VAR_2]))
  return 0;

 VAR_3 = FUNC_1(VAR_1->fifo_list[VAR_2].next);

 return FUNC_3(VAR_0, FUNC_2(VAR_3));
}
