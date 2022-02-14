
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expect; scalar_t__ inside_chunks; scalar_t__ level; int * last_error; } ;
typedef TYPE_1__ unpack_user ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(unpack_user *VAR_1)
{
    VAR_1->last_error = ((void*)0);
    VAR_1->level = 0;
    VAR_1->inside_chunks = 0;
    VAR_1->expect = VAR_0;
}
