
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_pbm_info {scalar_t__ pbm_regs; scalar_t__ controller_regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pci_pbm_info *VAR_34)
{
 u64 VAR_35;

 FUNC_1(VAR_25,
     VAR_34->controller_regs + VAR_24);

 FUNC_1((VAR_12 |
      VAR_10 |
      VAR_5 |
      VAR_4 |
      VAR_11 |
      VAR_9 |
      VAR_7 |
      VAR_8),
     VAR_34->controller_regs + VAR_6);

 FUNC_1(~(u64)0, VAR_34->controller_regs + VAR_0);

 VAR_35 = FUNC_0(VAR_34->pbm_regs + VAR_27);
 VAR_35 |= (VAR_30 |
  VAR_29 |
  VAR_28);
 FUNC_1(VAR_35, VAR_34->pbm_regs + VAR_27);
 FUNC_1(0, VAR_34->pbm_regs + VAR_31);
 FUNC_1(VAR_33,
     VAR_34->pbm_regs + VAR_32);

 FUNC_1(0, VAR_34->pbm_regs + VAR_22);
 FUNC_1(VAR_17, VAR_34->pbm_regs + VAR_16);
 FUNC_1((VAR_14 | VAR_15),
     VAR_34->pbm_regs + VAR_13);
 FUNC_1(((0xffff << 16) | (0x0000 << 0)),
     VAR_34->pbm_regs + VAR_23);
 FUNC_1(3000000, VAR_34->pbm_regs + VAR_18);
 FUNC_1(500000, VAR_34->pbm_regs + VAR_19);
 FUNC_1((2 << 16) | (140 << 8),
     VAR_34->pbm_regs + VAR_20);
 FUNC_1(0, VAR_34->pbm_regs + VAR_21);

 FUNC_1(~(u64)0, VAR_34->pbm_regs + VAR_3);
 FUNC_1(0, VAR_34->pbm_regs + VAR_1);
 FUNC_1(0, VAR_34->pbm_regs + VAR_2);

 FUNC_1(~(u64)0, VAR_34->pbm_regs + VAR_26);
}
