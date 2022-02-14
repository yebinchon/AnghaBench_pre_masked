
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {int dummy; } ;
struct urb {int transfer_buffer_length; int setup_dma; int transfer_dma; int transfer_flags; int pipe; int dev; } ;
struct list_head {int dummy; } ;
struct ehci_qtd {int hw_token; int qtd_list; int qtd_dma; void* hw_next; struct urb* urb; int hw_alt_next; } ;
struct ehci_hcd {TYPE_2__* async; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* hw; } ;
struct TYPE_3__ {int hw_alt_next; } ;


 int FUNC_0 (struct ehci_hcd*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (struct ehci_hcd*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ehci_hcd*,int ) ;
 struct ehci_qtd* FUNC_3 (struct ehci_hcd*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ehci_hcd*,struct ehci_qtd*,int,int,int,int) ;
 int FUNC_8 (struct ehci_hcd*,struct urb*,struct list_head*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static struct list_head *
FUNC_14 (
 struct ehci_hcd *VAR_7,
 struct urb *VAR_8,
 struct list_head *VAR_9,
 gfp_t VAR_10
) {
 struct ehci_qtd *VAR_11, *VAR_12;
 dma_addr_t VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;
 u32 VAR_17;




 VAR_11 = FUNC_3 (VAR_7, VAR_10);
 if (FUNC_9 (!VAR_11))
  return ((void*)0);
 FUNC_5 (&VAR_11->qtd_list, VAR_9);
 VAR_11->urb = VAR_8;

 VAR_17 = VAR_2;
 VAR_17 |= (VAR_0 << 10);


 VAR_14 = VAR_8->transfer_buffer_length;
 VAR_16 = FUNC_13 (VAR_8->pipe);
 if (FUNC_12 (VAR_8->pipe)) {

  FUNC_7(VAR_7, VAR_11, VAR_8->setup_dma,
    sizeof (struct usb_ctrlrequest),
    VAR_17 | (2 << 8), 8);


  VAR_17 ^= VAR_3;
  VAR_12 = VAR_11;
  VAR_11 = FUNC_3 (VAR_7, VAR_10);
  if (FUNC_9 (!VAR_11))
   goto cleanup;
  VAR_11->urb = VAR_8;
  VAR_12->hw_next = FUNC_1(VAR_7, VAR_11->qtd_dma);
  FUNC_5 (&VAR_11->qtd_list, VAR_9);


  if (VAR_14 == 0)
   VAR_17 |= (1 << 8);
 }




 VAR_13 = VAR_8->transfer_dma;

 if (VAR_16)
  VAR_17 |= (1 << 8);


 VAR_15 = FUNC_6(FUNC_10(VAR_8->dev, VAR_8->pipe, !VAR_16));






 for (;;) {
  int VAR_18;

  VAR_18 = FUNC_7(VAR_7, VAR_11, VAR_13, VAR_14, VAR_17, VAR_15);
  VAR_14 -= VAR_18;
  VAR_13 += VAR_18;






  if (VAR_16)
   VAR_11->hw_alt_next = VAR_7->async->hw->hw_alt_next;


  if ((VAR_15 & (VAR_18 + (VAR_15 - 1))) == 0)
   VAR_17 ^= VAR_3;

  if (FUNC_4 (VAR_14 <= 0))
   break;

  VAR_12 = VAR_11;
  VAR_11 = FUNC_3 (VAR_7, VAR_10);
  if (FUNC_9 (!VAR_11))
   goto cleanup;
  VAR_11->urb = VAR_8;
  VAR_12->hw_next = FUNC_1(VAR_7, VAR_11->qtd_dma);
  FUNC_5 (&VAR_11->qtd_list, VAR_9);
 }






 if (FUNC_4 ((VAR_8->transfer_flags & VAR_5) == 0
    || FUNC_12 (VAR_8->pipe)))
  VAR_11->hw_alt_next = FUNC_0(VAR_7);





 if (FUNC_4 (VAR_8->transfer_buffer_length != 0)) {
  int VAR_19 = 0;

  if (FUNC_12 (VAR_8->pipe)) {
   VAR_19 = 1;
   VAR_17 ^= 0x0100;
   VAR_17 |= VAR_3;
  } else if (FUNC_11 (VAR_8->pipe)
    && (VAR_8->transfer_flags & VAR_6)
    && !(VAR_8->transfer_buffer_length % VAR_15)) {
   VAR_19 = 1;
  }
  if (VAR_19) {
   VAR_12 = VAR_11;
   VAR_11 = FUNC_3 (VAR_7, VAR_10);
   if (FUNC_9 (!VAR_11))
    goto cleanup;
   VAR_11->urb = VAR_8;
   VAR_12->hw_next = FUNC_1(VAR_7, VAR_11->qtd_dma);
   FUNC_5 (&VAR_11->qtd_list, VAR_9);


   FUNC_7(VAR_7, VAR_11, 0, 0, VAR_17, 0);
  }
 }


 if (FUNC_4 (!(VAR_8->transfer_flags & VAR_4)))
  VAR_11->hw_token |= FUNC_2(VAR_7, VAR_1);
 return VAR_9;

cleanup:
 FUNC_8 (VAR_7, VAR_8, VAR_9);
 return ((void*)0);
}
