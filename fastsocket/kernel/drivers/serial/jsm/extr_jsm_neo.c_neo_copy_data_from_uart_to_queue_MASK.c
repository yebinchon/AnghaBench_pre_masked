
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct jsm_channel {int ch_r_head; int ch_r_tail; int ch_cached_lsr; int ch_flags; int* ch_rqueue; int* ch_equeue; int ch_c_iflag; int ch_e_head; scalar_t__ ch_rxcount; TYPE_2__* ch_bd; TYPE_1__* ch_neo_uart; int ch_err_overrun; } ;
struct TYPE_4__ {int pci_dev; } ;
struct TYPE_3__ {int txrxburst; int lsr; int rfifo; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct jsm_channel*) ;
 int FUNC_1 (int ,int ,int *,char*,int,int) ;
 int FUNC_2 (int*,int *,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct jsm_channel *VAR_14)
{
 int VAR_15 = 0;
 u8 VAR_16 = 0;
 u8 VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;
 u16 VAR_20;
 u16 VAR_21;

 if (!VAR_14)
  return;


 VAR_20 = VAR_14->ch_r_head & VAR_7;
 VAR_21 = VAR_14->ch_r_tail & VAR_7;


 VAR_16 = VAR_14->ch_cached_lsr;
 VAR_14->ch_cached_lsr = 0;


 if ((VAR_15 = VAR_21 - VAR_20 - 1) < 0)
  VAR_15 += VAR_7 + 1;
 if (!(VAR_14->ch_flags & VAR_0))
  VAR_19 = 0;
 else {
  VAR_19 = FUNC_5(&VAR_14->ch_neo_uart->rfifo);
  VAR_19 -= 3;
 }







 VAR_19 = FUNC_4(VAR_19, VAR_15);

 while (VAR_19 > 0) {




  VAR_16 = FUNC_5(&VAR_14->ch_neo_uart->lsr);






  if (VAR_16 & VAR_9)
   break;


  VAR_18 = FUNC_4(((u32) VAR_19), (VAR_8 - (u32) VAR_20));







  VAR_18 = FUNC_4((u32) VAR_18, (u32) 12);






  if (VAR_16 & (VAR_13 | VAR_10))
   VAR_14->ch_flags |= (VAR_1 | VAR_2);

  VAR_16 = 0;


  FUNC_2(VAR_14->ch_rqueue + VAR_20, &VAR_14->ch_neo_uart->txrxburst, VAR_18);





  FUNC_3(VAR_14->ch_equeue + VAR_20, 0, VAR_18);


  VAR_20 = (VAR_20 + VAR_18) & VAR_7;
  VAR_19 -= VAR_18;
  VAR_15 -= VAR_18;
  VAR_14->ch_rxcount += VAR_18;
 }





 if (VAR_14->ch_c_iflag & VAR_4)
  VAR_17 |= VAR_11;





 while (1) {





  VAR_16 |= FUNC_5(&VAR_14->ch_neo_uart->lsr);






  if (!(VAR_16 & VAR_12)) {
   VAR_14->ch_cached_lsr = VAR_16;
   break;
  }


  VAR_16 &= ~VAR_12;






  if (VAR_16 & (VAR_13 | VAR_10)) {
   VAR_16 &= ~(VAR_13 | VAR_10);
   VAR_14->ch_flags |= (VAR_1 | VAR_2);
  }




  if (VAR_16 & VAR_17) {
   u8 VAR_22;
   VAR_16 = 0;
   FUNC_2(&VAR_22, &VAR_14->ch_neo_uart->txrxburst, 1);
   continue;
  }
  while (VAR_15 < 1) {
   FUNC_1(VAR_6, VAR_5, &VAR_14->ch_bd->pci_dev,
    "Queue full, dropping DATA:%x LSR:%x\n",
    VAR_14->ch_rqueue[VAR_21], VAR_14->ch_equeue[VAR_21]);

   VAR_14->ch_r_tail = VAR_21 = (VAR_21 + 1) & VAR_7;
   VAR_14->ch_err_overrun++;
   VAR_15++;
  }

  FUNC_2(VAR_14->ch_rqueue + VAR_20, &VAR_14->ch_neo_uart->txrxburst, 1);
  VAR_14->ch_equeue[VAR_20] = (u8) VAR_16;

  FUNC_1(VAR_6, VAR_5, &VAR_14->ch_bd->pci_dev,
    "DATA/LSR pair: %x %x\n", VAR_14->ch_rqueue[VAR_20], VAR_14->ch_equeue[VAR_20]);


  VAR_16 = 0;


  VAR_20 = (VAR_20 + 1) & VAR_7;

  VAR_15--;
  VAR_14->ch_rxcount++;
 }




 VAR_14->ch_r_head = VAR_20 & VAR_7;
 VAR_14->ch_e_head = VAR_20 & VAR_3;
 FUNC_0(VAR_14);
}
