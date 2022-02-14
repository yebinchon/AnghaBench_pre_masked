
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int frame_number; scalar_t__ io_addr; int frame_dma_handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uhci_hcd*) ;

__attribute__((used)) static void FUNC_6(struct uhci_hcd *VAR_7)
{

 FUNC_0(VAR_6, VAR_7->io_addr + VAR_5);


 FUNC_1(VAR_7->frame_dma_handle, VAR_7->io_addr + VAR_1);


 FUNC_2(VAR_7->frame_number & VAR_0,
   VAR_7->io_addr + VAR_2);


 FUNC_3(FUNC_4(FUNC_5(VAR_7)), VAR_3,
   VAR_4);
}
