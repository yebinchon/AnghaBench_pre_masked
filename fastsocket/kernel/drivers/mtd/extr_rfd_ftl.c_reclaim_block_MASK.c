
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {TYPE_3__* mtd; } ;
struct partition {int block_size; int total_blocks; int reserved_block; int data_sectors_per_block; int current_block; TYPE_2__* blocks; TYPE_1__ mbd; } ;
struct TYPE_6__ {int (* sync ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int used_sectors; scalar_t__ free_sectors; scalar_t__ erases; } ;


 int VAR_0 ;
 int FUNC_0 (struct partition*,int) ;
 int FUNC_1 (struct partition*,int,int*) ;
 int FUNC_2 (char*,int,int,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct partition *VAR_1, u_long *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;


 if (VAR_1->mbd.mtd->sync)
  VAR_1->mbd.mtd->sync(VAR_1->mbd.mtd);

 VAR_5 = 0x7fffffff;
 VAR_4 = -1;
 if (*VAR_2 != -1)
  VAR_6 = *VAR_2 / VAR_1->block_size;
 else
  VAR_6 = -1;

 for (VAR_3=0; VAR_3<VAR_1->total_blocks; VAR_3++) {
  int VAR_8;

  if (VAR_3 == VAR_1->reserved_block)
   continue;






  if (VAR_1->blocks[VAR_3].free_sectors)
   return 0;

  VAR_8 = VAR_1->blocks[VAR_3].used_sectors;

  if (VAR_3 == VAR_6)
   VAR_8--;
  else {

   if (VAR_1->blocks[VAR_3].used_sectors ==
     VAR_1->data_sectors_per_block)
    continue;
  }

  VAR_8 += VAR_1->blocks[VAR_3].erases;

  if (VAR_8 < VAR_5) {
   VAR_4 = VAR_3;
   VAR_5 = VAR_8;
  }
 }

 if (VAR_4 == -1)
  return -VAR_0;

 VAR_1->current_block = -1;
 VAR_1->reserved_block = VAR_4;

 FUNC_2("reclaim_block: reclaiming block #%d with %d used "
   "%d free sectors\n", VAR_4,
   VAR_1->blocks[VAR_4].used_sectors,
   VAR_1->blocks[VAR_4].free_sectors);

 if (VAR_1->blocks[VAR_4].used_sectors)
  VAR_7 = FUNC_1(VAR_1, VAR_4, VAR_2);
 else
  VAR_7 = FUNC_0(VAR_1, VAR_4);

 return VAR_7;
}
