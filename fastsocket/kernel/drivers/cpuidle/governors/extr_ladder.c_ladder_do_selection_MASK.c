
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ladder_device {int last_state_idx; TYPE_2__* states; } ;
struct TYPE_3__ {scalar_t__ demotion_count; scalar_t__ promotion_count; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;



__attribute__((used)) static inline void FUNC_0(struct ladder_device *VAR_0,
           int VAR_1, int VAR_2)
{
 VAR_0->states[VAR_1].stats.promotion_count = 0;
 VAR_0->states[VAR_1].stats.demotion_count = 0;
 VAR_0->last_state_idx = VAR_2;
}
