
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_9__ {int tx_descr; int tx_len; TYPE_3__* tx_p; } ;
struct TYPE_10__ {TYPE_4__ hwm; } ;
struct TYPE_6__ {TYPE_3__** tx; } ;
struct TYPE_7__ {int mac_ring_is_up; TYPE_1__ fp; } ;
struct s_smc {TYPE_5__ os; TYPE_2__ hw; } ;
struct TYPE_8__ {int tx_free; } ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct s_smc*,int ,int ) ;
 int VAR_10 ;
 int FUNC_3 (struct s_smc*) ;

int FUNC_4(struct s_smc *VAR_11, u_char VAR_12, int VAR_13, int VAR_14,
  int VAR_15)
{
 FUNC_1("THiB",VAR_12,VAR_13,VAR_14) ;
 VAR_11->os.hwm.tx_p = VAR_11->hw.fp.tx[VAR_15 & VAR_8] ;
 VAR_11->os.hwm.tx_descr = VAR_10 | (((u_long)(VAR_14-1)&3)<<27) ;
 VAR_11->os.hwm.tx_len = VAR_14 ;
 FUNC_0("hwm_tx_init: fc = %x, len = %d",VAR_12,VAR_14,3) ;
 if ((VAR_12 & ~(VAR_2|VAR_1)) == VAR_0) {
  VAR_15 |= VAR_5 ;
 }
 else {
  switch (VAR_12) {
  case 131 :
  case 128 :
   VAR_15 |= VAR_5 ;
   break ;
  case 129 :
   VAR_15 |= VAR_6 ;
   break ;
  case 130 :
   VAR_15 |= VAR_5 | VAR_6 ;
   break ;
  default :
   FUNC_2(VAR_11,VAR_3,VAR_4) ;
  }
 }
 if (!VAR_11->hw.mac_ring_is_up) {
  VAR_15 &= ~VAR_5 ;
  VAR_15 |= VAR_9 ;
  FUNC_0("Ring is down: terminate LAN_TX",0,0,2) ;
 }
 if (VAR_13 > VAR_11->os.hwm.tx_p->tx_free) {

  FUNC_3(VAR_11) ;
  if (VAR_13 > VAR_11->os.hwm.tx_p->tx_free) {
   FUNC_0("Out of TxDs, terminate LAN_TX",0,0,2) ;
   VAR_15 &= ~VAR_5 ;
   VAR_15 |= VAR_7 ;
  }





 }
 FUNC_0("frame_status = %x",VAR_15,0,3) ;
 FUNC_1("THiE",VAR_15,VAR_11->os.hwm.tx_p->tx_free,0) ;
 return(VAR_15) ;
}
