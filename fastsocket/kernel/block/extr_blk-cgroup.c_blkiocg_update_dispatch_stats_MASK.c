
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct blkio_group_stats_cpu {int sectors; int syncp; int * stat_arr_cpu; } ;
struct blkio_group {int stats_cpu; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct blkio_group_stats_cpu* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct blkio_group *VAR_2,
    uint64_t VAR_3, bool VAR_4, bool VAR_5)
{
 struct blkio_group_stats_cpu *VAR_6;
 unsigned long VAR_7;






 FUNC_2(VAR_7);

 VAR_6 = FUNC_3(VAR_2->stats_cpu);

 FUNC_4(&VAR_6->syncp);
 VAR_6->sectors += VAR_3 >> 9;
 FUNC_0(VAR_6->stat_arr_cpu[VAR_0],
   1, VAR_4, VAR_5);
 FUNC_0(VAR_6->stat_arr_cpu[VAR_1],
   VAR_3, VAR_4, VAR_5);
 FUNC_5(&VAR_6->syncp);
 FUNC_1(VAR_7);
}
