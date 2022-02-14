
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key_count; int* binds; int drv_data; int drv_id; } ;
typedef TYPE_1__ in_dev_t ;
struct TYPE_5__ {int (* clean_binds ) (int ,int*,int*) ;} ;


 TYPE_3__ FUNC_0 (int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int,int) ;
 int FUNC_2 (int*) ;
 TYPE_1__* FUNC_3 (int) ;
 int* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int*,int*) ;

int FUNC_6(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 in_dev_t *VAR_8;

 VAR_8 = FUNC_3(VAR_1);
 if (VAR_8 == ((void*)0) || VAR_4 >= VAR_0)
  return -1;

 VAR_7 = VAR_8->key_count;

 if (VAR_8->binds == ((void*)0)) {
  if (VAR_5)
   return 0;
  VAR_8->binds = FUNC_4(VAR_8->drv_id, VAR_7);
  if (VAR_8->binds == ((void*)0))
   return -1;
 }

 if (VAR_2 < 0 || VAR_2 >= VAR_7)
  return -1;

 if (VAR_5)
  VAR_8->binds[FUNC_1(VAR_2, VAR_4)] &= ~VAR_3;
 else
  VAR_8->binds[FUNC_1(VAR_2, VAR_4)] ^= VAR_3;

 VAR_6 = FUNC_0(VAR_8->drv_id).clean_binds(VAR_8->drv_data, VAR_8->binds,
    VAR_8->binds + VAR_7 * VAR_0);
 if (VAR_6 == 0) {
  FUNC_2(VAR_8->binds);
  VAR_8->binds = ((void*)0);
 }

 return 0;
}
