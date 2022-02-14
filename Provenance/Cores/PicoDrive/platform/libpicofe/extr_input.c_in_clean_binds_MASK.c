
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* binds; int key_count; int drv_data; int drv_id; int probed; } ;
typedef TYPE_1__ in_dev_t ;
struct TYPE_5__ {int (* clean_binds ) (int ,int*,int*) ;} ;


 TYPE_3__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,int*,int*) ;

void FUNC_3(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  int VAR_4, VAR_5, *VAR_6, *VAR_7;
  in_dev_t *VAR_8 = &VAR_2[VAR_3];

  if (VAR_8->binds == ((void*)0) || !VAR_8->probed)
   continue;

  VAR_5 = VAR_8->key_count;
  VAR_6 = VAR_8->binds;
  VAR_7 = VAR_6 + VAR_5 * VAR_0;

  VAR_4 = FUNC_0(VAR_8->drv_id).clean_binds(VAR_8->drv_data, VAR_6, VAR_7);
  if (VAR_4 == 0) {

   FUNC_1(VAR_8->binds);
   VAR_8->binds = ((void*)0);
  }
 }
}
