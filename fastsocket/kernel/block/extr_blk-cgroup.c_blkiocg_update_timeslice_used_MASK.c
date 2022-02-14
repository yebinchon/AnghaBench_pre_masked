
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long time; } ;
struct blkio_group {int stats_lock; TYPE_1__ stats; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct blkio_group *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->stats_lock, VAR_2);
 VAR_0->stats.time += VAR_1;
 FUNC_1(&VAR_0->stats_lock, VAR_2);
}
