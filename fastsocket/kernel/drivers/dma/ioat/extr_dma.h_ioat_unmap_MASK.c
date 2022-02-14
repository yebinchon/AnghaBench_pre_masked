
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef enum dma_ctrl_flags { ____Placeholder_dma_ctrl_flags } dma_ctrl_flags ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,size_t,int) ;
 int FUNC_1 (struct pci_dev*,int ,size_t,int) ;

__attribute__((used)) static inline void FUNC_2(struct pci_dev *VAR_2, dma_addr_t VAR_3, size_t VAR_4,
         int VAR_5, enum dma_ctrl_flags VAR_6, bool VAR_7)
{
 if ((VAR_7 && (VAR_6 & VAR_0)) ||
     (!VAR_7 && (VAR_6 & VAR_1)))
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 else
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
