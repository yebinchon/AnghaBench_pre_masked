
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key_count; int does_combos; int drv_data; int drv_id; int probed; } ;
typedef TYPE_1__ in_dev_t ;
struct TYPE_5__ {int (* get_config ) (int ,int,int*) ;} ;


 TYPE_3__ FUNC_0 (int ) ;




 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,int,int*) ;

int FUNC_3(int VAR_0, int VAR_1, void *VAR_2)
{
 int *VAR_3 = VAR_2;
 in_dev_t *VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4 == ((void*)0) || VAR_2 == ((void*)0))
  return -1;

 switch (VAR_1) {
 case 131:
  *VAR_3 = VAR_4->key_count;
  break;
 case 129:
  *VAR_3 = VAR_4->does_combos;
  break;
 case 130:
 case 128:
  return -1;
 default:
  if (!VAR_4->probed)
   return -1;

  return FUNC_0(VAR_4->drv_id).get_config(VAR_4->drv_data, VAR_1, VAR_3);
 }

 return 0;
}
