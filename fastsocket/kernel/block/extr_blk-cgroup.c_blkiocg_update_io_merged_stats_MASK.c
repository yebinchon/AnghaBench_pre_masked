
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * stat_arr; } ;
struct blkio_group {int stats_lock; TYPE_1__ stats; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct blkio_group *VAR_1, bool VAR_2,
     bool VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_1->stats_lock, VAR_4);
 FUNC_0(VAR_1->stats.stat_arr[VAR_0], 1, VAR_2,
   VAR_3);
 FUNC_2(&VAR_1->stats_lock, VAR_4);
}
