
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_blktooff_args {scalar_t__* a_offset; } ;
typedef scalar_t__ off_t ;



int
FUNC_0(struct vnop_blktooff_args *VAR_0)
{
 *VAR_0->a_offset = (off_t)-1;
 return (0);
}
