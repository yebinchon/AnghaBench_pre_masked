
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct tty_struct {scalar_t__ low_latency; } ;
struct mpsc_rx_desc {int cmdstat; int bytecnt; } ;
struct TYPE_8__ {scalar_t__ rx; int overrun; int frame; int brk; } ;
struct TYPE_9__ {scalar_t__ read_status_mask; scalar_t__ ignore_status_mask; int dev; TYPE_3__ icount; int line; TYPE_2__* state; } ;
struct mpsc_port_info {int rxr_posn; scalar_t__ sdma_base; scalar_t__ cache_mgmt; TYPE_4__ port; scalar_t__ rxr; int * rxb; } ;
struct TYPE_6__ {struct tty_struct* tty; } ;
struct TYPE_7__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;
 char VAR_18 ;
 char VAR_19 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,void*,int,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (struct mpsc_port_info*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_10 (struct tty_struct*,scalar_t__) ;
 int FUNC_11 (struct tty_struct*) ;
 int FUNC_12 (struct tty_struct*,int ,char) ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 scalar_t__ FUNC_14 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct mpsc_port_info *VAR_21)
{
 struct mpsc_rx_desc *VAR_22;
 struct tty_struct *VAR_23 = VAR_21->port.state->port.tty;
 u32 VAR_24, VAR_25, VAR_26;
 int VAR_27 = 0;
 u8 *VAR_28;
 char VAR_29 = VAR_17;

 FUNC_8("mpsc_rx_intr[%d]: Handling Rx intr\n", VAR_21->port.line);

 VAR_22 = (struct mpsc_rx_desc *)(VAR_21->rxr + (VAR_21->rxr_posn*VAR_3));

 FUNC_4(VAR_21->port.dev, (void *)VAR_22, VAR_3,
   VAR_1);
 while (!((VAR_24 = FUNC_1(VAR_22->cmdstat))
    & VAR_10)) {
  VAR_25 = FUNC_0(VAR_22->bytecnt);







  if (FUNC_15(FUNC_10(VAR_23, VAR_25)
     < VAR_25)) {
   if (VAR_23->low_latency)
    FUNC_11(VAR_23);




  }

  VAR_28 = VAR_21->rxb + (VAR_21->rxr_posn * VAR_2);
  FUNC_4(VAR_21->port.dev, (void *)VAR_28, VAR_2,
    VAR_1);
  if (FUNC_15(VAR_24 & (VAR_5
      | VAR_8
      | VAR_11))) {

   VAR_21->port.icount.rx++;

   if (VAR_24 & VAR_5) {
    VAR_21->port.icount.brk++;

    if (FUNC_13(&VAR_21->port))
     goto next_frame;
   } else if (VAR_24 & VAR_8) {
    VAR_21->port.icount.frame++;
   } else if (VAR_24 & VAR_11) {
    VAR_21->port.icount.overrun++;
   }

   VAR_24 &= VAR_21->port.read_status_mask;

   if (VAR_24 & VAR_5)
    VAR_29 = VAR_15;
   else if (VAR_24 & VAR_8)
    VAR_29 = VAR_16;
   else if (VAR_24 & VAR_11)
    VAR_29 = VAR_18;
   else if (VAR_24 & VAR_12)
    VAR_29 = VAR_19;
  }

  if (FUNC_14(&VAR_21->port, *VAR_28)) {
   VAR_28++;
   VAR_25--;






   goto next_frame;
  }

  if ((FUNC_15(VAR_24 & (VAR_5
      | VAR_8
      | VAR_11)))
    && !(VAR_24 & VAR_21->port.ignore_status_mask)) {
   FUNC_12(VAR_23, *VAR_28, VAR_29);
  } else {
   for (VAR_26=0; VAR_26<VAR_25; VAR_26++)
    FUNC_12(VAR_23, *VAR_28++, VAR_17);

   VAR_21->port.icount.rx += VAR_25;
  }

next_frame:
  VAR_22->bytecnt = FUNC_2(0);
  FUNC_16();
  VAR_22->cmdstat = FUNC_3(VAR_10
    | VAR_6 | VAR_7
    | VAR_9);
  FUNC_16();
  FUNC_4(VAR_21->port.dev, (void *)VAR_22, VAR_3,
    VAR_0);







  VAR_21->rxr_posn = (VAR_21->rxr_posn + 1) & (VAR_4 - 1);
  VAR_22 = (struct mpsc_rx_desc *)
   (VAR_21->rxr + (VAR_21->rxr_posn * VAR_3));
  FUNC_4(VAR_21->port.dev, (void *)VAR_22, VAR_3,
    VAR_1);





  VAR_27 = 1;
 }


 if ((FUNC_9(VAR_21->sdma_base + VAR_13) & VAR_14) == 0)
  FUNC_7(VAR_21);

 FUNC_11(VAR_23);
 return VAR_27;
}
