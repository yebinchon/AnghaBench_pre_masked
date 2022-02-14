
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int io_addr; } ;


 int FUNC_0 (struct uhci_hcd*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct uhci_hcd*) ;

__attribute__((used)) static void FUNC_4(struct uhci_hcd *VAR_0)
{
 if (FUNC_2(FUNC_1(FUNC_3(VAR_0)), VAR_0->io_addr))
  FUNC_0(VAR_0);
}
