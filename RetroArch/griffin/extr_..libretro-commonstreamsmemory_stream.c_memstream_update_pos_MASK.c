
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ptr; scalar_t__ max_ptr; } ;
typedef TYPE_1__ memstream_t ;



__attribute__((used)) static void FUNC_0(memstream_t *VAR_0)
{
   if (VAR_0 && VAR_0->ptr > VAR_0->max_ptr)
      VAR_0->max_ptr = VAR_0->ptr;
}
