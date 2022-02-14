
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* memccpy ) (void*,void const*,int,size_t) ;} ;


 TYPE_1__* VAR_0 ;
 void* FUNC_0 (void*,void const*,int,size_t) ;

__attribute__((visibility("hidden")))
void *
FUNC_1(void *__restrict VAR_1, const void *__restrict VAR_2, int VAR_3, size_t VAR_4)
{
 return VAR_0->memccpy(VAR_1, VAR_2, VAR_3, VAR_4);
}
