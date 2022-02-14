
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int header; } ;
typedef TYPE_1__ heap_block_t ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const heap_block_t *VAR_1)
{
    return (VAR_1->header & VAR_0) == 0;
}
