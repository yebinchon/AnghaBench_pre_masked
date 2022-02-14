
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_iop {int status_ctrl; } ;


 int VAR_0 ;

__attribute__((used)) static __inline__ void FUNC_0(volatile struct mac_iop *VAR_1)
{
 VAR_1->status_ctrl &= ~VAR_0;
}
