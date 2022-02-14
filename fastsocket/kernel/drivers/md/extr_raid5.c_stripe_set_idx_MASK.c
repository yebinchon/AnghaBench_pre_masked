
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int dummy; } ;
struct r5conf {int prev_chunk_sectors; int chunk_sectors; int previous_raid_disks; int raid_disks; int max_degraded; } ;
typedef int sector_t ;


 int FUNC_0 (struct r5conf*,int,int,int*,struct stripe_head*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(sector_t VAR_0, struct r5conf *VAR_1, int VAR_2,
       struct stripe_head *VAR_3)
{
 int VAR_4 =
  VAR_2 ? VAR_1->prev_chunk_sectors : VAR_1->chunk_sectors;
 int VAR_5;
 int VAR_6 = FUNC_1(VAR_0, VAR_4);
 int VAR_7 = VAR_2 ? VAR_1->previous_raid_disks : VAR_1->raid_disks;

 FUNC_0(VAR_1,
        VAR_0 * (VAR_7 - VAR_1->max_degraded)
        *VAR_4 + VAR_6,
        VAR_2,
        &VAR_5, VAR_3);
}
