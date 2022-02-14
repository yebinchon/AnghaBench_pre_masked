
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_gbe_hw {TYPE_1__* func; } ;
struct TYPE_2__ {int (* reset_phy ) (struct pch_gbe_hw*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct pch_gbe_hw*) ;

inline void FUNC_2(struct pch_gbe_hw *VAR_0)
{
 if (!VAR_0->func->reset_phy)
  FUNC_0("ERROR: configuration\n");
 else
  VAR_0->func->reset_phy(VAR_0);
}
