
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmxdev_filter {int state; TYPE_1__* dev; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct dmxdev_filter
            *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->dev->lock);
 VAR_0->state = VAR_1;
 FUNC_1(&VAR_0->dev->lock);
}
