
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int alignment; int max_blocks; int empty_slots; int flags; int empty_list; int taken_list; int free_list; TYPE_2__* block; } ;
typedef TYPE_1__ rh_info_t ;
struct TYPE_6__ {int list; } ;
typedef TYPE_2__ rh_block_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(rh_info_t * VAR_2, unsigned int VAR_3, int VAR_4,
      rh_block_t * VAR_5)
{
 int VAR_6;
 rh_block_t *VAR_7;


 if ((VAR_3 & (VAR_3 - 1)) != 0)
  return;

 VAR_2->alignment = VAR_3;


 VAR_2->block = VAR_5;
 VAR_2->max_blocks = VAR_4;
 VAR_2->empty_slots = VAR_4;
 VAR_2->flags = VAR_1 | VAR_0;

 FUNC_0(&VAR_2->empty_list);
 FUNC_0(&VAR_2->free_list);
 FUNC_0(&VAR_2->taken_list);


 for (VAR_6 = 0, VAR_7 = VAR_5; VAR_6 < VAR_4; VAR_6++, VAR_7++)
  FUNC_1(&VAR_7->list, &VAR_2->empty_list);
}
