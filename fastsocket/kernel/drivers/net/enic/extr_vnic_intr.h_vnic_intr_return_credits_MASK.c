
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct vnic_intr {TYPE_1__* ctrl; } ;
struct TYPE_2__ {int int_credit_return; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *) ;

__attribute__((used)) static inline void FUNC_1(struct vnic_intr *VAR_2,
 unsigned int VAR_3, int VAR_4, int VAR_5)
{



 u32 VAR_6 = (VAR_3 & 0xffff) |
  (VAR_4 ? (1 << 16) : 0) |
  (VAR_5 ? (1 << 17) : 0);

 FUNC_0(VAR_6, &VAR_2->ctrl->int_credit_return);
}
