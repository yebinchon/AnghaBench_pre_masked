
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct poch_group_info {int user_offset; } ;
struct channel_info {int group_count; scalar_t__ dir; struct poch_group_info* groups; TYPE_1__* header; int group_offsets_lock; int group_size; } ;
typedef int s32 ;
struct TYPE_2__ {int group_count; int* group_offsets; int group_size_bytes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct channel_info *VAR_1)
{
 int VAR_2;
 struct poch_group_info *VAR_3;
 s32 *VAR_4;

 VAR_1->header->group_size_bytes = VAR_1->group_size;
 VAR_1->header->group_count = VAR_1->group_count;

 FUNC_0(&VAR_1->group_offsets_lock);

 VAR_4 = VAR_1->header->group_offsets;
 VAR_3 = VAR_1->groups;

 for (VAR_2 = 0; VAR_2 < VAR_1->group_count; VAR_2++) {
  if (VAR_1->dir == VAR_0)
   VAR_4[VAR_2] = -1;
  else
   VAR_4[VAR_2] = VAR_3[VAR_2].user_offset;
 }
}
