
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ n_value; } ;
typedef TYPE_1__ kernel_nlist_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 return (int)(((const kernel_nlist_t*)VAR_0)->n_value - ((const kernel_nlist_t*)VAR_1)->n_value);
}
