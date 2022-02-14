
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; int rx_reset; } ;
struct efx_channel {int channel; struct efx_nic* efx; } ;
typedef int efx_qword_t ;


 unsigned int FUNC_0 (int ,int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct efx_nic*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct efx_nic*,int *) ;
 int FUNC_4 (struct efx_nic*,int *) ;
 int FUNC_5 (struct efx_nic*,int ) ;
 int FUNC_6 (struct efx_nic*,unsigned int) ;
 int FUNC_7 (struct efx_nic*,int *) ;
 int FUNC_8 (struct efx_nic*,int *) ;
 int VAR_7 ;
 int FUNC_9 (struct efx_nic*,int ,int ,char*,int ,unsigned int) ;
 int FUNC_10 (struct efx_nic*,int ,int ,char*,unsigned int,...) ;
 int FUNC_11 (struct efx_nic*,int ,int ,char*,int ,...) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_12(struct efx_channel *VAR_10, efx_qword_t *VAR_11)
{
 struct efx_nic *VAR_12 = VAR_10->efx;
 unsigned int VAR_13;
 unsigned int VAR_14;

 VAR_13 = FUNC_0(*VAR_11, VAR_1);
 VAR_14 = FUNC_0(*VAR_11, VAR_2);

 switch (VAR_13) {
 case 131:
  FUNC_11(VAR_12, VAR_7, VAR_12->net_dev, "channel %d TXQ %d flushed\n",
      VAR_10->channel, VAR_14);
  FUNC_4(VAR_12, VAR_11);
  FUNC_8(VAR_12, VAR_11);
  break;
 case 134:
  FUNC_11(VAR_12, VAR_7, VAR_12->net_dev, "channel %d RXQ %d flushed\n",
      VAR_10->channel, VAR_14);
  FUNC_3(VAR_12, VAR_11);
  FUNC_7(VAR_12, VAR_11);
  break;
 case 135:
  FUNC_9(VAR_12, VAR_7, VAR_12->net_dev,
     "channel %d EVQ %d initialised\n",
     VAR_10->channel, VAR_14);
  break;
 case 133:
  FUNC_11(VAR_12, VAR_7, VAR_12->net_dev,
      "channel %d SRAM update done\n", VAR_10->channel);
  break;
 case 130:
  FUNC_11(VAR_12, VAR_7, VAR_12->net_dev,
      "channel %d RXQ %d wakeup event\n",
      VAR_10->channel, VAR_14);
  break;
 case 132:
  FUNC_11(VAR_12, VAR_7, VAR_12->net_dev,
      "channel %d RX queue %d timer expired\n",
      VAR_10->channel, VAR_14);
  break;
 case 136:
  FUNC_10(VAR_12, VAR_8, VAR_12->net_dev,
     "channel %d seen DRIVER RX_RESET event. "
   "Resetting.\n", VAR_10->channel);
  FUNC_2(&VAR_12->rx_reset);
  FUNC_5(VAR_12,
       FUNC_1(VAR_12) ?
       VAR_5 :
       VAR_3);
  break;
 case 129:
  if (VAR_14 < VAR_0) {
   FUNC_10(VAR_12, VAR_8, VAR_12->net_dev,
      "RX DMA Q %d reports descriptor fetch error."
      " RX Q %d is disabled.\n", VAR_14,
      VAR_14);
   FUNC_5(VAR_12, VAR_4);
  } else
   FUNC_6(VAR_12, VAR_14);
  break;
 case 128:
  if (VAR_14 < VAR_0) {
   FUNC_10(VAR_12, VAR_9, VAR_12->net_dev,
      "TX DMA Q %d reports descriptor fetch error."
      " TX Q %d is disabled.\n", VAR_14,
      VAR_14);
   FUNC_5(VAR_12, VAR_6);
  } else
   FUNC_6(VAR_12, VAR_14);
  break;
 default:
  FUNC_11(VAR_12, VAR_7, VAR_12->net_dev,
      "channel %d unknown driver event code %d "
      "data %04x\n", VAR_10->channel, VAR_13,
      VAR_14);
  break;
 }
}
