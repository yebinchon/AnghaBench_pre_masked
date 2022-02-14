
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_fsync_args {int a_context; int a_waitfor; int a_vp; } ;


 int FUNC_0 (int ,int ,int ) ;

int
FUNC_1(struct vnop_fsync_args *VAR_0)
{
 return FUNC_0(VAR_0->a_vp, VAR_0->a_waitfor, VAR_0->a_context);
}
