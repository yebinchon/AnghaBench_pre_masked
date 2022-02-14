
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_write_args {int a_vp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct vnop_write_args *VAR_1)
{

 if (FUNC_0(VAR_1->a_vp))
  FUNC_1("dead_write: lock");
 return (VAR_0);
}
