
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int empty_slots; int max_blocks; } ;
typedef TYPE_1__ rh_info_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(rh_info_t * VAR_1, int VAR_2)
{
 int VAR_3;


 if (VAR_2 >= 4)
  return -VAR_0;


 if (VAR_1->empty_slots >= VAR_2)
  return 0;


 VAR_3 = ((VAR_1->max_blocks + VAR_2) + 15) & ~15;

 return FUNC_0(VAR_1, VAR_3);
}
