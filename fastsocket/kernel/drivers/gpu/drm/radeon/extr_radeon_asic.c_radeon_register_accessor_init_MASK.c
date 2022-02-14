
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; int pcie_reg_mask; int * pciep_wreg; int * pciep_rreg; int * mc_wreg; int * mc_rreg; int * pll_wreg; int * pll_rreg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void FUNC_0(struct radeon_device *VAR_25)
{
 VAR_25->mc_rreg = &VAR_15;
 VAR_25->mc_wreg = &VAR_16;
 VAR_25->pll_rreg = &VAR_15;
 VAR_25->pll_wreg = &VAR_16;
 VAR_25->pciep_rreg = &VAR_15;
 VAR_25->pciep_wreg = &VAR_16;


 if (VAR_25->family < VAR_8) {
  VAR_25->pcie_reg_mask = 0xff;
 } else {
  VAR_25->pcie_reg_mask = 0x7ff;
 }

 if (VAR_25->family <= VAR_1) {
  VAR_25->pll_rreg = &VAR_9;
  VAR_25->pll_wreg = &VAR_10;
 }
 if (VAR_25->family >= VAR_0) {
  VAR_25->mc_rreg = &VAR_11;
  VAR_25->mc_wreg = &VAR_12;
 }
 if (VAR_25->family >= VAR_8) {
  VAR_25->mc_rreg = &VAR_23;
  VAR_25->mc_wreg = &VAR_24;
 }
 if (VAR_25->family == VAR_3 || VAR_25->family == VAR_4) {
  VAR_25->mc_rreg = &VAR_17;
  VAR_25->mc_wreg = &VAR_18;
 }
 if (VAR_25->family == VAR_6 || VAR_25->family == VAR_7) {
  VAR_25->mc_rreg = &VAR_21;
  VAR_25->mc_wreg = &VAR_22;
 }
 if (VAR_25->family == VAR_5) {
  VAR_25->mc_rreg = &VAR_19;
  VAR_25->mc_wreg = &VAR_20;
 }
 if (VAR_25->family >= VAR_2) {
  VAR_25->pciep_rreg = &VAR_13;
  VAR_25->pciep_wreg = &VAR_14;
 }
}
