
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring_info {int flags; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tx_ring_info*,int ) ;
 int FUNC_1 (struct tx_ring_info*,int ) ;
 int FUNC_2 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_5, struct tx_ring_info *VAR_6)
{
 if (VAR_6->flags & VAR_2)
  FUNC_3(VAR_5, FUNC_0(VAR_6, VAR_3),
     FUNC_1(VAR_6, VAR_4),
     VAR_0);
 else if (VAR_6->flags & VAR_1)
  FUNC_2(VAR_5, FUNC_0(VAR_6, VAR_3),
          FUNC_1(VAR_6, VAR_4),
          VAR_0);
 VAR_6->flags = 0;
}
