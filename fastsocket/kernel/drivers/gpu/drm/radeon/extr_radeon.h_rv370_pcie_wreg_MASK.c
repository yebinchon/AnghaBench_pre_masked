
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int pcie_reg_mask; } ;
typedef int reg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct radeon_device *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 FUNC_0(VAR_1, ((VAR_3) & VAR_2->pcie_reg_mask));
 FUNC_0(VAR_0, (VAR_4));
}
