
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct blkio_group_stats {int * stat_arr; } ;
struct blkio_group {int stats_lock; struct blkio_group_stats stats; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,unsigned long long,int,int) ;
 unsigned long long FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long long,unsigned long long) ;

void FUNC_5(struct blkio_group *VAR_2,
 uint64_t VAR_3, uint64_t VAR_4, bool VAR_5, bool VAR_6)
{
 struct blkio_group_stats *VAR_7;
 unsigned long VAR_8;
 unsigned long long VAR_9 = FUNC_1();

 FUNC_2(&VAR_2->stats_lock, VAR_8);
 VAR_7 = &VAR_2->stats;
 if (FUNC_4(VAR_9, VAR_4))
  FUNC_0(VAR_7->stat_arr[VAR_0],
    VAR_9 - VAR_4, VAR_5, VAR_6);
 if (FUNC_4(VAR_4, VAR_3))
  FUNC_0(VAR_7->stat_arr[VAR_1],
    VAR_4 - VAR_3, VAR_5, VAR_6);
 FUNC_3(&VAR_2->stats_lock, VAR_8);
}
