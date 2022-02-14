
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_blktooff_args {scalar_t__* a_offset; int a_vp; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(struct vnop_blktooff_args *VAR_1)
{
    if (!FUNC_0(VAR_1->a_vp))
  return (VAR_0);

 *VAR_1->a_offset = (off_t)-1;
 return (0);
}
