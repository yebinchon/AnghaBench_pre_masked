
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ tx_errors; int tx_collisions; int tx_windowerrors; int tx_fifoerrors; int tx_carriererrors; } ;
struct bba_priv {TYPE_1__ txrx_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static u32 FUNC_1(u8 VAR_5,struct bba_priv *VAR_6)
{
 u32 VAR_7 = VAR_6->txrx_stats.tx_errors;

 if(VAR_5&VAR_3) {
  VAR_6->txrx_stats.tx_errors++;
  if(VAR_5&VAR_0)
   VAR_6->txrx_stats.tx_collisions += (VAR_5&VAR_0);

  if(VAR_5&VAR_1)
   VAR_6->txrx_stats.tx_carriererrors++;

  if(VAR_5&VAR_4)
   VAR_6->txrx_stats.tx_fifoerrors++;

  if(VAR_5&VAR_2)
   VAR_6->txrx_stats.tx_windowerrors++;
 }
 if(VAR_7!=VAR_6->txrx_stats.tx_errors)
  FUNC_0(("__bba_tx_err(%02x)\n",VAR_5));

 return VAR_6->txrx_stats.tx_errors;
}
