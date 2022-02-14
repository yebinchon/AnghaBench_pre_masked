
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int empty_slots; int empty_list; } ;
typedef TYPE_1__ rh_info_t ;
struct TYPE_6__ {int list; } ;
typedef TYPE_2__ rh_block_t ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(rh_info_t * VAR_0, rh_block_t * VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->empty_list);
 VAR_0->empty_slots++;
}
