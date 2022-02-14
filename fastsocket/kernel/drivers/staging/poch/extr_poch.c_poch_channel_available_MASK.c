
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct channel_info {int group_count; int group_offsets_lock; TYPE_1__* header; } ;
struct TYPE_2__ {int* group_offsets; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct channel_info *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->group_offsets_lock);

 for (VAR_1 = 0; VAR_1 < VAR_0->group_count; VAR_1++) {
  if (VAR_0->header->group_offsets[VAR_1] != -1) {
   FUNC_1(&VAR_0->group_offsets_lock);
   return 1;
  }
 }

 FUNC_1(&VAR_0->group_offsets_lock);

 return 0;
}
