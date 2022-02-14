
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int alignment; int taken_list; int free_list; int empty_list; scalar_t__ flags; scalar_t__ empty_slots; scalar_t__ max_blocks; int * block; } ;
typedef TYPE_1__ rh_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,int ) ;

rh_info_t *FUNC_3(unsigned int VAR_3)
{
 rh_info_t *VAR_4;


 if ((VAR_3 & (VAR_3 - 1)) != 0)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (VAR_4 == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_4->alignment = VAR_3;


 VAR_4->block = ((void*)0);
 VAR_4->max_blocks = 0;
 VAR_4->empty_slots = 0;
 VAR_4->flags = 0;

 FUNC_1(&VAR_4->empty_list);
 FUNC_1(&VAR_4->free_list);
 FUNC_1(&VAR_4->taken_list);

 return VAR_4;
}
