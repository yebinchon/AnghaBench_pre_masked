
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_ring_info {int dummy; } ;
struct niu {int num_tx_rings; TYPE_1__* dev; struct tx_ring_info* tx_rings; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct niu*) ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (struct niu*) ;
 int FUNC_3 (struct niu*) ;
 int FUNC_4 (struct niu*,struct tx_ring_info*) ;
 int FUNC_5 (struct niu*) ;
 int FUNC_6 (struct niu*) ;
 int FUNC_7 (struct niu*) ;
 int FUNC_8 (struct niu*) ;
 int FUNC_9 (struct niu*) ;
 int FUNC_10 (struct niu*) ;
 int FUNC_11 (struct niu*,int) ;
 int FUNC_12 (struct niu*,int) ;
 int FUNC_13 (struct niu*,int ) ;
 int FUNC_14 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_15(struct niu *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_14(VAR_0, "%s: Initialize TXC\n", VAR_1->dev->name);
 FUNC_11(VAR_1, 1);
 FUNC_12(VAR_1, 1);
 FUNC_13(VAR_1, 0);

 FUNC_14(VAR_0, "%s: Initialize TX channels\n", VAR_1->dev->name);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_tx_rings; VAR_2++) {
  struct tx_ring_info *VAR_4 = &VAR_1->tx_rings[VAR_2];

  VAR_3 = FUNC_4(VAR_1, VAR_4);
  if (VAR_3)
   return VAR_3;
 }

 FUNC_14(VAR_0, "%s: Initialize RX channels\n", VAR_1->dev->name);
 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  goto out_uninit_tx_channels;

 FUNC_14(VAR_0, "%s: Initialize classifier\n", VAR_1->dev->name);
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  goto out_uninit_rx_channels;

 FUNC_14(VAR_0, "%s: Initialize ZCP\n", VAR_1->dev->name);
 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3)
  goto out_uninit_rx_channels;

 FUNC_14(VAR_0, "%s: Initialize IPP\n", VAR_1->dev->name);
 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  goto out_uninit_rx_channels;

 FUNC_14(VAR_0, "%s: Initialize MAC\n", VAR_1->dev->name);
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  goto out_uninit_ipp;

 return 0;

out_uninit_ipp:
 FUNC_14(VAR_0, "%s: Uninit IPP\n", VAR_1->dev->name);
 FUNC_0(VAR_1);

out_uninit_rx_channels:
 FUNC_14(VAR_0, "%s: Uninit RX channels\n", VAR_1->dev->name);
 FUNC_9(VAR_1);
 FUNC_7(VAR_1);

out_uninit_tx_channels:
 FUNC_14(VAR_0, "%s: Uninit TX channels\n", VAR_1->dev->name);
 FUNC_10(VAR_1);
 FUNC_8(VAR_1);

 return VAR_3;
}
