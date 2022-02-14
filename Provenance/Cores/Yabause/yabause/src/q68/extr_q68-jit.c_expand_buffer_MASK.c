
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ native_size; void* native_code; TYPE_1__* state; } ;
struct TYPE_4__ {void* (* realloc_func ) (void*,scalar_t__ const) ;} ;
typedef TYPE_2__ Q68JitEntry ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (void*,scalar_t__ const) ;

__attribute__((used)) static int FUNC_2(Q68JitEntry *VAR_1)
{
    const uint32_t VAR_2 = VAR_1->native_size + VAR_0;
    void *VAR_3 = VAR_1->state->realloc_func(VAR_1->native_code, VAR_2);
    if (!VAR_3) {
        FUNC_0("Out of memory");
        return 0;
    }
    VAR_1->native_code = VAR_3;
    VAR_1->native_size = VAR_2;
    return 1;
}
