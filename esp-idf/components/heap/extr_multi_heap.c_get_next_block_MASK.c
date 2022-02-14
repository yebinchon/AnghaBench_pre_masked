
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {intptr_t header; } ;
typedef TYPE_1__ heap_block_t ;


 intptr_t VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline heap_block_t *FUNC_1(const heap_block_t *VAR_1)
{
    intptr_t VAR_2 = VAR_1->header & VAR_0;
    if (VAR_2 == 0) {
        return ((void*)0);
    }
    FUNC_0(VAR_2 > (intptr_t)VAR_1);
    return (heap_block_t *)VAR_2;
}
