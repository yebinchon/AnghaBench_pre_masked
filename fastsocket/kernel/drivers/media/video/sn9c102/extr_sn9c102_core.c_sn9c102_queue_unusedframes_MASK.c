
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sn9c102_device {size_t nbuffers; int queue_lock; int inqueue; TYPE_1__* frame; } ;
struct TYPE_2__ {scalar_t__ state; int frame; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct sn9c102_device* VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->nbuffers; VAR_4++)
  if (VAR_2->frame[VAR_4].state == VAR_1) {
   VAR_2->frame[VAR_4].state = VAR_0;
   FUNC_1(&VAR_2->queue_lock, VAR_3);
   FUNC_0(&VAR_2->frame[VAR_4].frame, &VAR_2->inqueue);
   FUNC_2(&VAR_2->queue_lock, VAR_3);
  }
}
