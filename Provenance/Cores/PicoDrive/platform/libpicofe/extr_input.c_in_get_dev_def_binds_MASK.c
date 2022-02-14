
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* binds; int key_count; } ;
typedef TYPE_1__ in_dev_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

const int *FUNC_1(int VAR_1)
{
 in_dev_t *VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 return VAR_2->binds + VAR_2->key_count * VAR_0;
}
