
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int pd_idx; int qd_idx; int ddf_layout; } ;
struct r5conf {int prev_algo; int algorithm; int prev_chunk_sectors; int chunk_sectors; int previous_raid_disks; int raid_disks; int max_degraded; int level; } ;
typedef int sector_t ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static sector_t FUNC_2(struct r5conf *VAR_0, sector_t VAR_1,
         int VAR_2, int *VAR_3,
         struct stripe_head *VAR_4)
{
 sector_t VAR_5, VAR_6;
 sector_t VAR_7;
 unsigned int VAR_8;
 int VAR_9, VAR_10;
 int VAR_11 = 0;
 sector_t VAR_12;
 int VAR_13 = VAR_2 ? VAR_0->prev_algo
     : VAR_0->algorithm;
 int VAR_14 = VAR_2 ? VAR_0->prev_chunk_sectors
      : VAR_0->chunk_sectors;
 int VAR_15 = VAR_2 ? VAR_0->previous_raid_disks
      : VAR_0->raid_disks;
 int VAR_16 = VAR_15 - VAR_0->max_degraded;






 VAR_8 = FUNC_1(VAR_1, VAR_14);
 VAR_7 = VAR_1;




 VAR_5 = VAR_7;
 *VAR_3 = FUNC_1(VAR_5, VAR_16);
 VAR_6 = VAR_5;



 VAR_9 = VAR_10 = -1;
 switch(VAR_0->level) {
 case 4:
  VAR_9 = VAR_16;
  break;
 case 5:
  switch (VAR_13) {
  case 141:
   VAR_9 = VAR_16 - FUNC_1(VAR_6, VAR_15);
   if (*VAR_3 >= VAR_9)
    (*VAR_3)++;
   break;
  case 134:
   VAR_9 = FUNC_1(VAR_6, VAR_15);
   if (*VAR_3 >= VAR_9)
    (*VAR_3)++;
   break;
  case 139:
   VAR_9 = VAR_16 - FUNC_1(VAR_6, VAR_15);
   *VAR_3 = (VAR_9 + 1 + *VAR_3) % VAR_15;
   break;
  case 132:
   VAR_9 = FUNC_1(VAR_6, VAR_15);
   *VAR_3 = (VAR_9 + 1 + *VAR_3) % VAR_15;
   break;
  case 137:
   VAR_9 = 0;
   (*VAR_3)++;
   break;
  case 135:
   VAR_9 = VAR_16;
   break;
  default:
   FUNC_0();
  }
  break;
 case 6:

  switch (VAR_13) {
  case 141:
   VAR_9 = VAR_15 - 1 - FUNC_1(VAR_6, VAR_15);
   VAR_10 = VAR_9 + 1;
   if (VAR_9 == VAR_15-1) {
    (*VAR_3)++;
    VAR_10 = 0;
   } else if (*VAR_3 >= VAR_9)
    (*VAR_3) += 2;
   break;
  case 134:
   VAR_9 = FUNC_1(VAR_6, VAR_15);
   VAR_10 = VAR_9 + 1;
   if (VAR_9 == VAR_15-1) {
    (*VAR_3)++;
    VAR_10 = 0;
   } else if (*VAR_3 >= VAR_9)
    (*VAR_3) += 2;
   break;
  case 139:
   VAR_9 = VAR_15 - 1 - FUNC_1(VAR_6, VAR_15);
   VAR_10 = (VAR_9 + 1) % VAR_15;
   *VAR_3 = (VAR_9 + 2 + *VAR_3) % VAR_15;
   break;
  case 132:
   VAR_9 = FUNC_1(VAR_6, VAR_15);
   VAR_10 = (VAR_9 + 1) % VAR_15;
   *VAR_3 = (VAR_9 + 2 + *VAR_3) % VAR_15;
   break;

  case 137:
   VAR_9 = 0;
   VAR_10 = 1;
   (*VAR_3) += 2;
   break;
  case 135:
   VAR_9 = VAR_16;
   VAR_10 = VAR_16 + 1;
   break;

  case 128:



   VAR_9 = FUNC_1(VAR_6, VAR_15);
   VAR_10 = VAR_9 + 1;
   if (VAR_9 == VAR_15-1) {
    (*VAR_3)++;
    VAR_10 = 0;
   } else if (*VAR_3 >= VAR_9)
    (*VAR_3) += 2;
   VAR_11 = 1;
   break;

  case 129:




   VAR_6 += 1;
   VAR_9 = VAR_15 - 1 - FUNC_1(VAR_6, VAR_15);
   VAR_10 = VAR_9 + 1;
   if (VAR_9 == VAR_15-1) {
    (*VAR_3)++;
    VAR_10 = 0;
   } else if (*VAR_3 >= VAR_9)
    (*VAR_3) += 2;
   VAR_11 = 1;
   break;

  case 130:

   VAR_9 = VAR_15 - 1 - FUNC_1(VAR_6, VAR_15);
   VAR_10 = (VAR_9 + VAR_15 - 1) % VAR_15;
   *VAR_3 = (VAR_9 + 1 + *VAR_3) % VAR_15;
   VAR_11 = 1;
   break;

  case 140:

   VAR_9 = VAR_16 - FUNC_1(VAR_6, VAR_15-1);
   if (*VAR_3 >= VAR_9)
    (*VAR_3)++;
   VAR_10 = VAR_15 - 1;
   break;

  case 133:
   VAR_9 = FUNC_1(VAR_6, VAR_15-1);
   if (*VAR_3 >= VAR_9)
    (*VAR_3)++;
   VAR_10 = VAR_15 - 1;
   break;

  case 138:
   VAR_9 = VAR_16 - FUNC_1(VAR_6, VAR_15-1);
   *VAR_3 = (VAR_9 + 1 + *VAR_3) % (VAR_15-1);
   VAR_10 = VAR_15 - 1;
   break;

  case 131:
   VAR_9 = FUNC_1(VAR_6, VAR_15-1);
   *VAR_3 = (VAR_9 + 1 + *VAR_3) % (VAR_15-1);
   VAR_10 = VAR_15 - 1;
   break;

  case 136:
   VAR_9 = 0;
   (*VAR_3)++;
   VAR_10 = VAR_15 - 1;
   break;

  default:
   FUNC_0();
  }
  break;
 }

 if (VAR_4) {
  VAR_4->pd_idx = VAR_9;
  VAR_4->qd_idx = VAR_10;
  VAR_4->ddf_layout = VAR_11;
 }



 VAR_12 = (sector_t)VAR_5 * VAR_14 + VAR_8;
 return VAR_12;
}
