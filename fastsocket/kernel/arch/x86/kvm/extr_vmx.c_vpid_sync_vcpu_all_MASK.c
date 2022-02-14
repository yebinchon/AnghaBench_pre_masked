
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {scalar_t__ vpid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_1(struct vcpu_vmx *VAR_1)
{
 if (VAR_1->vpid == 0)
  return;

 FUNC_0(VAR_0, VAR_1->vpid, 0);
}
