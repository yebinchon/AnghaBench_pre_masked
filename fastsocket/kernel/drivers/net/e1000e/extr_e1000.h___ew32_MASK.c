
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_hw {scalar_t__ hw_addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int flags2; } ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct e1000_hw *VAR_1, unsigned long VAR_2, u32 VAR_3)
{
 if (VAR_1->adapter->flags2 & VAR_0)
  FUNC_0(VAR_1);

 FUNC_1(VAR_3, VAR_1->hw_addr + VAR_2);
}
