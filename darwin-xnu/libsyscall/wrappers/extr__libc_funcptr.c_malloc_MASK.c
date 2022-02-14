
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* malloc ) (size_t) ;} ;


 TYPE_1__* VAR_0 ;
 void* FUNC_0 (size_t) ;

__attribute__((visibility("hidden")))
void *
FUNC_1(size_t VAR_1)
{
 return VAR_0->malloc(VAR_1);
}
