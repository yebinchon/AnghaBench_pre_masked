
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int dead; int frame_number; int io_addr; } ;


 int FUNC_0 (struct uhci_hcd*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uhci_hcd*) ;
 int FUNC_3 (struct uhci_hcd*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct uhci_hcd *VAR_0)
{
 FUNC_3(VAR_0);
 FUNC_4(FUNC_1(FUNC_2(VAR_0)), VAR_0->io_addr);
 FUNC_0(VAR_0);
 VAR_0->dead = 1;


 ++VAR_0->frame_number;
}
