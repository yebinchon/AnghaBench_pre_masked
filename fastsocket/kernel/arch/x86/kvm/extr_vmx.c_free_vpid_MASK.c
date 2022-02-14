
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {scalar_t__ vpid; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct vcpu_vmx *VAR_3)
{
 if (!VAR_0)
  return;
 FUNC_1(&VAR_2);
 if (VAR_3->vpid != 0)
  FUNC_0(VAR_3->vpid, VAR_1);
 FUNC_2(&VAR_2);
}
