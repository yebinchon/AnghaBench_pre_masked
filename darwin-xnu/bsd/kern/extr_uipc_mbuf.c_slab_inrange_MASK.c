
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {uintptr_t sl_len; scalar_t__ sl_base; } ;
typedef TYPE_1__ mcl_slab_t ;
typedef int boolean_t ;



__attribute__((used)) static boolean_t
FUNC_0(mcl_slab_t *VAR_0, void *VAR_1)
{
 return ((uintptr_t)VAR_1 >= (uintptr_t)VAR_0->sl_base &&
     (uintptr_t)VAR_1 < ((uintptr_t)VAR_0->sl_base + VAR_0->sl_len));
}
