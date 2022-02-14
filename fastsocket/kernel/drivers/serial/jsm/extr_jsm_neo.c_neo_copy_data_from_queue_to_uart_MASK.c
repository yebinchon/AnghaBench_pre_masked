
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct jsm_channel {size_t ch_w_tail; size_t ch_w_head; int ch_flags; int ch_cached_lsr; int ch_t_tlevel; int uart_port; scalar_t__ ch_txcount; int * ch_wqueue; TYPE_2__* ch_neo_uart; TYPE_1__* ch_bd; } ;
struct TYPE_4__ {int txrxburst; int txrx; int lsr; } ;
struct TYPE_3__ {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct jsm_channel *VAR_11)
{
 u16 VAR_12;
 u16 VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 u32 VAR_17 = 0;

 if (!VAR_11)
  return;


 if (VAR_11->ch_w_tail == VAR_11->ch_w_head)
  return;


 if ((VAR_11->ch_flags & VAR_2) || (VAR_11->ch_flags & VAR_0))
  return;



 if (!(VAR_11->ch_flags & VAR_1)) {
  u8 VAR_18 = FUNC_4(&VAR_11->ch_neo_uart->lsr);

  VAR_11->ch_cached_lsr |= VAR_18;
  if (VAR_11->ch_cached_lsr & VAR_7) {
   VAR_11->ch_cached_lsr &= ~(VAR_7);

   FUNC_6(VAR_11->ch_wqueue[VAR_11->ch_w_tail], &VAR_11->ch_neo_uart->txrx);
   FUNC_0(VAR_10, VAR_5, &VAR_11->ch_bd->pci_dev,
     "Tx data: %x\n", VAR_11->ch_wqueue[VAR_11->ch_w_head]);
   VAR_11->ch_w_tail++;
   VAR_11->ch_w_tail &= VAR_8;
   VAR_11->ch_txcount++;
  }
  return;
 }




 if (!(VAR_11->ch_flags & (VAR_3 | VAR_4)))
  return;

 VAR_14 = VAR_6 - VAR_11->ch_t_tlevel;


 VAR_12 = VAR_11->ch_w_head & VAR_8;
 VAR_13 = VAR_11->ch_w_tail & VAR_8;
 VAR_16 = (VAR_12 - VAR_13) & VAR_8;


 VAR_14 = FUNC_3(VAR_14, VAR_16);

 while (VAR_14 > 0) {

  VAR_15 = ((VAR_12 >= VAR_13) ? VAR_12 : VAR_9) - VAR_13;
  VAR_15 = FUNC_3(VAR_15, VAR_14);

  if (VAR_15 <= 0)
   break;

  FUNC_2(&VAR_11->ch_neo_uart->txrxburst, VAR_11->ch_wqueue + VAR_13, VAR_15);

  VAR_13 = (VAR_13 + VAR_15) & VAR_8;
  VAR_14 -= VAR_15;
  VAR_11->ch_txcount += VAR_15;
  VAR_17 += VAR_15;
 }


 VAR_11->ch_w_tail = VAR_13 & VAR_8;

 if (VAR_17 >= VAR_11->ch_t_tlevel)
  VAR_11->ch_flags &= ~(VAR_3 | VAR_4);

 if (!FUNC_1(&VAR_11->uart_port))
  FUNC_5(&VAR_11->uart_port);
}
