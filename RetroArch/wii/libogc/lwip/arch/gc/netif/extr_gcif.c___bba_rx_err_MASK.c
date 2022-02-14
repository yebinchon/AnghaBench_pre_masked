
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ tx_errors; scalar_t__ rx_errors; int rx_frameerrors; int rx_overerrors; int rx_lengtherrors; int rx_fifoerrors; int rx_crcerrors; } ;
struct bba_priv {TYPE_1__ txrx_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static u32 FUNC_1(u8 VAR_7,struct bba_priv *VAR_8)
{
 u32 VAR_9 = VAR_8->txrx_stats.tx_errors;

 if(VAR_7&0xff) {
  VAR_8->txrx_stats.rx_overerrors++;
  VAR_8->txrx_stats.rx_errors++;
 } else {
  if(VAR_7&VAR_4) {
   VAR_8->txrx_stats.rx_errors++;
   if(VAR_7&VAR_0)
    VAR_8->txrx_stats.rx_overerrors++;

   if(VAR_7&VAR_1)
    VAR_8->txrx_stats.rx_crcerrors++;

   if(VAR_7&VAR_3)
    VAR_8->txrx_stats.rx_fifoerrors++;

   if(VAR_7&VAR_6)
    VAR_8->txrx_stats.rx_lengtherrors++;

   if(VAR_7&VAR_5)
    VAR_8->txrx_stats.rx_lengtherrors++;

   if(VAR_7&VAR_0)
    VAR_8->txrx_stats.rx_overerrors++;
  }
  if(VAR_7&VAR_2) {
   VAR_8->txrx_stats.rx_errors++;
   VAR_8->txrx_stats.rx_frameerrors++;
  }
 }
 if(VAR_9!=VAR_8->txrx_stats.rx_errors)
  FUNC_0(("__bba_rx_err(%02x)\n",VAR_7));

 return VAR_8->txrx_stats.rx_errors;
}
