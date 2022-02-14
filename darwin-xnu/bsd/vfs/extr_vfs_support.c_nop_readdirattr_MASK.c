
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_readdirattr_args {scalar_t__* a_eofflag; scalar_t__* a_actualcount; } ;



int
FUNC_0(struct vnop_readdirattr_args *VAR_0)
{
        *(VAR_0->a_actualcount) = 0;
        *(VAR_0->a_eofflag) = 0;
 return (0);
}
