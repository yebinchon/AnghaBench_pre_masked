
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct poch_group_info {int user_offset; } ;
struct channel_info {unsigned long transfer; scalar_t__ chno; unsigned long fpga_iomem; long group_count; int wq; int group_offsets_lock; struct poch_group_info* groups; TYPE_1__* header; int inited; } ;
typedef int s32 ;
struct TYPE_2__ {int * group_offsets; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct channel_info *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 long VAR_6;
 unsigned long VAR_7, VAR_8;
 struct poch_group_info *VAR_9;
 s32 *VAR_10;
 u32 VAR_11;

 if (!FUNC_0(&VAR_3->inited))
  return;

 VAR_4 = VAR_3->transfer;

 if (VAR_3->chno == VAR_0)
  VAR_11 = VAR_1;
 else
  VAR_11 = VAR_2;

 VAR_5 = FUNC_1(VAR_3->fpga_iomem + VAR_11);

 VAR_6 = VAR_5 - VAR_4;

 if (VAR_6 <= 0)
  VAR_6 += VAR_3->group_count;

 VAR_10 = VAR_3->header->group_offsets;
 VAR_9 = VAR_3->groups;

 FUNC_2(&VAR_3->group_offsets_lock);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = (VAR_4 + VAR_7) % VAR_3->group_count;
  VAR_10[VAR_8] = VAR_9[VAR_8].user_offset;
 }

 FUNC_3(&VAR_3->group_offsets_lock);

 VAR_3->transfer = VAR_5;

 FUNC_4(&VAR_3->wq);
}
