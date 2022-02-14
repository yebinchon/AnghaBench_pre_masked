
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct urb_priv {int dummy; } ;
struct urb {int transfer_buffer_length; int transfer_dma; unsigned long pipe; int transfer_flags; TYPE_3__* dev; struct urb_priv* hcpriv; } ;
struct uhci_td {int status; int link; } ;
struct uhci_qh {struct uhci_td* dummy_td; TYPE_2__* hep; } ;
struct uhci_hcd {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le32 ;
struct TYPE_7__ {scalar_t__ speed; } ;
struct TYPE_5__ {int wMaxPacketSize; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uhci_td*) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uhci_td*,struct urb_priv*) ;
 struct uhci_td* FUNC_4 (struct uhci_hcd*) ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (struct uhci_td*,unsigned long,unsigned long,int) ;
 unsigned long FUNC_7 (int) ;
 int FUNC_8 (struct uhci_td*) ;
 unsigned int FUNC_9 (TYPE_3__*,int ,scalar_t__) ;
 unsigned long FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long) ;
 scalar_t__ FUNC_12 (unsigned long) ;
 scalar_t__ FUNC_13 (unsigned long) ;
 int FUNC_14 (TYPE_3__*,int ,scalar_t__,unsigned int) ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(struct uhci_hcd *VAR_12, struct urb *VAR_13,
  struct uhci_qh *VAR_14)
{
 struct uhci_td *VAR_15;
 unsigned long VAR_16, VAR_17;
 int VAR_18 = FUNC_2(VAR_14->hep->desc.wMaxPacketSize);
 int VAR_19 = VAR_13->transfer_buffer_length;
 dma_addr_t VAR_20 = VAR_13->transfer_dma;
 __le32 *VAR_21;
 struct urb_priv *VAR_22 = VAR_13->hcpriv;
 unsigned int VAR_23;

 if (VAR_19 < 0)
  return -VAR_0;


 VAR_16 = (VAR_13->pipe & VAR_2) | FUNC_10(VAR_13->pipe);
 VAR_23 = FUNC_9(VAR_13->dev, FUNC_11(VAR_13->pipe),
    FUNC_13(VAR_13->pipe));


 VAR_17 = FUNC_7(3);
 if (VAR_13->dev->speed == VAR_11)
  VAR_17 |= VAR_5;
 if (FUNC_12(VAR_13->pipe))
  VAR_17 |= VAR_6;




 VAR_21 = ((void*)0);
 VAR_15 = VAR_14->dummy_td;
 do {
  int VAR_24 = VAR_18;

  if (VAR_19 <= VAR_24) {
   VAR_24 = VAR_19;
   if (!(VAR_13->transfer_flags & VAR_8))
    VAR_17 &= ~VAR_6;
  }

  if (VAR_21) {
   VAR_15 = FUNC_4(VAR_12);
   if (!VAR_15)
    goto nomem;
   *VAR_21 = FUNC_0(VAR_15);
  }
  FUNC_3(VAR_15, VAR_22);
  FUNC_6(VAR_15, VAR_17,
    VAR_16 | FUNC_5(VAR_24) |
     (VAR_23 << VAR_7),
    VAR_20);
  VAR_21 = &VAR_15->link;
  VAR_17 |= VAR_3;

  VAR_20 += VAR_24;
  VAR_19 -= VAR_18;
  VAR_23 ^= 1;
 } while (VAR_19 > 0);
 if ((VAR_13->transfer_flags & VAR_9) &&
   FUNC_13(VAR_13->pipe) && VAR_19 == 0 &&
   VAR_13->transfer_buffer_length > 0) {
  VAR_15 = FUNC_4(VAR_12);
  if (!VAR_15)
   goto nomem;
  *VAR_21 = FUNC_0(VAR_15);

  FUNC_3(VAR_15, VAR_22);
  FUNC_6(VAR_15, VAR_17,
    VAR_16 | FUNC_5(0) |
     (VAR_23 << VAR_7),
    VAR_20);
  VAR_21 = &VAR_15->link;

  VAR_23 ^= 1;
 }







 VAR_15->status |= FUNC_1(VAR_4);




 VAR_15 = FUNC_4(VAR_12);
 if (!VAR_15)
  goto nomem;
 *VAR_21 = FUNC_0(VAR_15);

 FUNC_6(VAR_15, 0, VAR_10 | FUNC_5(0), 0);
 FUNC_15();
 VAR_14->dummy_td->status |= FUNC_1(VAR_3);
 VAR_14->dummy_td = VAR_15;

 FUNC_14(VAR_13->dev, FUNC_11(VAR_13->pipe),
   FUNC_13(VAR_13->pipe), VAR_23);
 return 0;

nomem:

 FUNC_8(VAR_14->dummy_td);
 return -VAR_1;
}
