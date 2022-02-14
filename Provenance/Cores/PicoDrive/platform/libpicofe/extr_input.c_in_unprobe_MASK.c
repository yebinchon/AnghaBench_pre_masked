
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * drv_data; scalar_t__ probed; int drv_id; } ;
typedef TYPE_1__ in_dev_t ;
struct TYPE_5__ {int (* free ) (int *) ;} ;


 TYPE_3__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(in_dev_t *VAR_0)
{
 if (VAR_0->probed)
  FUNC_0(VAR_0->drv_id).free(VAR_0->drv_data);
 VAR_0->probed = 0;
 VAR_0->drv_data = ((void*)0);
}
