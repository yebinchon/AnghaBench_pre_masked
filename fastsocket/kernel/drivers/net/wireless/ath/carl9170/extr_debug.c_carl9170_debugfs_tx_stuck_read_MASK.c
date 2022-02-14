
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar9170 {scalar_t__* max_queue_stop_timeout; scalar_t__* queue_stop_timeout; TYPE_1__* hw; } ;
typedef int ssize_t ;
struct TYPE_2__ {int queues; } ;


 int FUNC_0 (char*,int ,size_t,char*,int,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static char *FUNC_3(struct ar9170 *VAR_1, char *VAR_2,
         size_t VAR_3, ssize_t *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->hw->queues; VAR_5++) {
  FUNC_0(VAR_2, *VAR_4, VAR_3, "TX queue [%d]: %10d max:%10d ms.\n",
      VAR_5, FUNC_1(VAR_1->hw, VAR_5) ?
      FUNC_2(VAR_0 - VAR_1->queue_stop_timeout[VAR_5]) : 0,
      FUNC_2(VAR_1->max_queue_stop_timeout[VAR_5]));

  VAR_1->max_queue_stop_timeout[VAR_5] = 0;
 }

 return VAR_2;
}
