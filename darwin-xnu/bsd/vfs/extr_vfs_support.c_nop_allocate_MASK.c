
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_allocate_args {scalar_t__* a_bytesallocated; } ;



int
FUNC_0(struct vnop_allocate_args *VAR_0)
{
 *(VAR_0->a_bytesallocated) = 0;
 return (0);
}
