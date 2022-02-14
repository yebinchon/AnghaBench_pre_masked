
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfq_queue {TYPE_1__* cfqg; } ;
struct cfq_data {int idle_slice_timer; } ;
struct TYPE_2__ {int blkg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct cfq_data *VAR_0, struct cfq_queue *VAR_1)
{
 FUNC_1(&VAR_0->idle_slice_timer);
 FUNC_0(&VAR_1->cfqg->blkg);
}
