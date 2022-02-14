
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_ioctl_args {int a_vp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct vnop_ioctl_args*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

int
FUNC_3(struct vnop_ioctl_args *VAR_2)
{

 if (!FUNC_2(VAR_2->a_vp))
  return (VAR_0);
 return (FUNC_0(VAR_2->a_vp, FUNC_1(VAR_1), VAR_2));
}
