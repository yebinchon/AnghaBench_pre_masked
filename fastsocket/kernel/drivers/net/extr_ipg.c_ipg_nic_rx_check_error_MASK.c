
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipg_rx {scalar_t__ frag_info; scalar_t__ rfs; } ;
struct TYPE_2__ {int rx_frame_errors; int rx_length_errors; int rx_fifo_errors; int rx_errors; } ;
struct ipg_nic_private {unsigned int rx_current; int ** rx_buff; int rx_buf_sz; int pdev; TYPE_1__ stats; struct ipg_rx* rxd; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 struct ipg_nic_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_12)
{
 struct ipg_nic_private *VAR_13 = FUNC_3(VAR_12);
 unsigned int VAR_14 = VAR_13->rx_current % VAR_2;
 struct ipg_rx *VAR_15 = VAR_13->rxd + VAR_14;

 if (VAR_1 && (FUNC_2(VAR_15->rfs) &
      (VAR_6 | VAR_9 |
       VAR_4 | VAR_5 |
       VAR_8 | VAR_7))) {
  FUNC_0("Rx error, RFS = %16.16lx\n",
         (unsigned long) VAR_15->rfs);


  VAR_13->stats.rx_errors++;


  if (FUNC_2(VAR_15->rfs) & VAR_6) {
   FUNC_0("RX FIFO overrun occured.\n");

   VAR_13->stats.rx_fifo_errors++;
  }

  if (FUNC_2(VAR_15->rfs) & VAR_9) {
   FUNC_0("RX runt occured.\n");
   VAR_13->stats.rx_length_errors++;
  }





  if (FUNC_2(VAR_15->rfs) & VAR_4) {
   FUNC_0("RX alignment error occured.\n");
   VAR_13->stats.rx_frame_errors++;
  }
  if (VAR_13->rx_buff[VAR_14]) {
   FUNC_4(VAR_13->pdev,
    FUNC_2(VAR_15->frag_info) & ~VAR_3,
    VAR_13->rx_buf_sz, VAR_11);

   FUNC_1(VAR_13->rx_buff[VAR_14]);
   VAR_13->rx_buff[VAR_14] = ((void*)0);
  }
  return VAR_0;
 }
 return VAR_10;
}
