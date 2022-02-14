
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* buf_t ;
struct TYPE_3__ {int b_flags; scalar_t__ b_iodone; } ;


 int VAR_0 ;

void *
FUNC_0(buf_t VAR_1)
{
        if ( !(VAR_1->b_flags & VAR_0) )
         return ((void *) ((void*)0));

 return ((void *)VAR_1->b_iodone);
}
