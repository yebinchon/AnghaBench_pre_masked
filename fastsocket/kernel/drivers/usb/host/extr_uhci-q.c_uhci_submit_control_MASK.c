
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb_priv {int dummy; } ;
struct urb {int transfer_buffer_length; int transfer_dma; unsigned long pipe; int setup_dma; TYPE_3__* dev; struct urb_priv* hcpriv; } ;
struct uhci_td {int status; int link; } ;
struct uhci_qh {scalar_t__ state; int skel; struct uhci_td* dummy_td; TYPE_2__* hep; } ;
struct uhci_hcd {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le32 ;
struct TYPE_6__ {scalar_t__ speed; scalar_t__ state; } ;
struct TYPE_4__ {int wMaxPacketSize; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct uhci_td*) ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uhci_hcd*,struct urb*) ;
 int FUNC_4 (struct uhci_td*,struct urb_priv*) ;
 struct uhci_td* FUNC_5 (struct uhci_hcd*) ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (struct uhci_td*,unsigned long,unsigned long,int) ;
 unsigned long FUNC_8 (int) ;
 int FUNC_9 (struct uhci_td*) ;
 scalar_t__ FUNC_10 (unsigned long) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct uhci_hcd *VAR_15, struct urb *VAR_16,
  struct uhci_qh *VAR_17)
{
 struct uhci_td *VAR_18;
 unsigned long VAR_19, VAR_20;
 int VAR_21 = FUNC_2(VAR_17->hep->desc.wMaxPacketSize);
 int VAR_22 = VAR_16->transfer_buffer_length;
 dma_addr_t VAR_23 = VAR_16->transfer_dma;
 __le32 *VAR_24;
 struct urb_priv *VAR_25 = VAR_16->hcpriv;
 int VAR_26;


 VAR_19 = (VAR_16->pipe & VAR_1) | VAR_12;


 VAR_20 = FUNC_8(3);
 if (VAR_16->dev->speed == VAR_13)
  VAR_20 |= VAR_7;




 VAR_18 = VAR_17->dummy_td;
 FUNC_4(VAR_18, VAR_25);
 FUNC_7(VAR_18, VAR_20, VAR_19 | FUNC_6(8),
   VAR_16->setup_dma);
 VAR_24 = &VAR_18->link;
 VAR_20 |= VAR_5;
 if (FUNC_10(VAR_16->pipe) || VAR_22 == 0)
  VAR_19 ^= (VAR_12 ^ VAR_11);
 else {
  VAR_19 ^= (VAR_12 ^ VAR_10);
  VAR_20 |= VAR_8;
 }




 while (VAR_22 > 0) {
  int VAR_27 = VAR_21;

  if (VAR_22 <= VAR_27) {
   VAR_27 = VAR_22;
   VAR_20 &= ~VAR_8;
  }

  VAR_18 = FUNC_5(VAR_15);
  if (!VAR_18)
   goto nomem;
  *VAR_24 = FUNC_0(VAR_18);


  VAR_19 ^= VAR_9;

  FUNC_4(VAR_18, VAR_25);
  FUNC_7(VAR_18, VAR_20, VAR_19 | FUNC_6(VAR_27),
    VAR_23);
  VAR_24 = &VAR_18->link;

  VAR_23 += VAR_27;
  VAR_22 -= VAR_27;
 }




 VAR_18 = FUNC_5(VAR_15);
 if (!VAR_18)
  goto nomem;
 *VAR_24 = FUNC_0(VAR_18);


 VAR_19 ^= (VAR_10 ^ VAR_11);
 VAR_19 |= VAR_9;

 FUNC_4(VAR_18, VAR_25);
 FUNC_7(VAR_18, VAR_20 | VAR_6,
   VAR_19 | FUNC_6(0), 0);
 VAR_24 = &VAR_18->link;




 VAR_18 = FUNC_5(VAR_15);
 if (!VAR_18)
  goto nomem;
 *VAR_24 = FUNC_0(VAR_18);

 FUNC_7(VAR_18, 0, VAR_11 | FUNC_6(0), 0);
 FUNC_11();
 VAR_17->dummy_td->status |= FUNC_1(VAR_5);
 VAR_17->dummy_td = VAR_18;





 if (VAR_16->dev->speed == VAR_13 ||
   VAR_16->dev->state != VAR_14)
  VAR_26 = VAR_4;
 else {
  VAR_26 = VAR_3;
  FUNC_3(VAR_15, VAR_16);
 }
 if (VAR_17->state != VAR_2)
  VAR_17->skel = VAR_26;
 return 0;

nomem:

 FUNC_9(VAR_17->dummy_td);
 return -VAR_0;
}
