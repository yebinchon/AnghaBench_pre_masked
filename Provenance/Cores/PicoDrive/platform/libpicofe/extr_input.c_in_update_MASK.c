
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * binds; int drv_data; int drv_id; scalar_t__ probed; } ;
typedef TYPE_1__ in_dev_t ;
struct TYPE_5__ {int (* update ) (int ,int *,int*) ;} ;


 TYPE_3__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int *,int*) ;

int FUNC_2(int *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  in_dev_t *VAR_5 = &VAR_1[VAR_3];
  if (VAR_5->probed && VAR_5->binds != ((void*)0))
   VAR_4 |= FUNC_0(VAR_5->drv_id).update(VAR_5->drv_data, VAR_5->binds, VAR_2);
 }

 return VAR_4;
}
