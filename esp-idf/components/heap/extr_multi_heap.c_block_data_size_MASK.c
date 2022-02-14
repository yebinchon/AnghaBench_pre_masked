
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ header; } ;
typedef TYPE_1__ heap_block_t ;


 intptr_t VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0(const heap_block_t *VAR_1)
{
    intptr_t VAR_2 = (intptr_t)VAR_1->header & VAR_0;
    intptr_t VAR_3 = (intptr_t)VAR_1;
    if (VAR_2 == 0) {
        return 0;
    }
    return VAR_2 - VAR_3 - sizeof(VAR_1->header);
}
