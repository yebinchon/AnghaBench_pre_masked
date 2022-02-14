
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8180_priv {int* txmapring; int txringcount; int* txbkpring; int* txbepring; int* txvipring; int* txvopring; int* txhpring; int* txbeaconring; int txbeaconcount; int* txmapringtail; int* txmapringhead; int* txbkpringtail; int* txbkpringhead; int* txbepringtail; int* txbepringhead; int* txvipringtail; int* txvipringhead; int* txvopringtail; int* txvopringhead; int* txhpringtail; int* txhpringhead; int* txbeaconringtail; scalar_t__ ack_tx_to_ieee; int ieee80211; int txbeaconbufs; int txbeaconbufstail; int txhpbufs; int txhpbufstail; int txvopbufs; int txvopbufstail; int txvipbufs; int txvipbufstail; int txbepbufs; int txbepbufstail; int txbkpbufs; int txbkpbufstail; int txmapbufs; int txmapbufstail; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_0)
{
 struct r8180_priv *VAR_1 = (struct r8180_priv *)FUNC_0(VAR_0);
 u32 *VAR_2;
 int VAR_3;

 for (VAR_2=VAR_1->txmapring, VAR_3=0;
      VAR_3 < VAR_1->txringcount;
      VAR_2+=8, VAR_3++){
  *VAR_2 = *VAR_2 &~ (1<<31);
 }

 for (VAR_2=VAR_1->txbkpring, VAR_3=0;
      VAR_3 < VAR_1->txringcount;
      VAR_2+=8, VAR_3++) {
  *VAR_2 = *VAR_2 &~ (1<<31);
 }

 for (VAR_2=VAR_1->txbepring, VAR_3=0;
      VAR_3 < VAR_1->txringcount;
      VAR_2+=8, VAR_3++){
  *VAR_2 = *VAR_2 &~ (1<<31);
 }
 for (VAR_2=VAR_1->txvipring, VAR_3=0;
      VAR_3 < VAR_1->txringcount;
      VAR_2+=8, VAR_3++) {
  *VAR_2 = *VAR_2 &~ (1<<31);
 }

 for (VAR_2=VAR_1->txvopring, VAR_3=0;
      VAR_3 < VAR_1->txringcount;
      VAR_2+=8, VAR_3++){
  *VAR_2 = *VAR_2 &~ (1<<31);
 }

 for (VAR_2=VAR_1->txhpring, VAR_3=0;
      VAR_3 < VAR_1->txringcount;
      VAR_2+=8,VAR_3++){
  *VAR_2 = *VAR_2 &~ (1<<31);
 }

 for (VAR_2=VAR_1->txbeaconring, VAR_3=0;
      VAR_3 < VAR_1->txbeaconcount;
      VAR_2+=8, VAR_3++){
  *VAR_2 = *VAR_2 &~ (1<<31);
 }

 VAR_1->txmapringtail = VAR_1->txmapring;
 VAR_1->txmapringhead = VAR_1->txmapring;
 VAR_1->txmapbufstail = VAR_1->txmapbufs;

 VAR_1->txbkpringtail = VAR_1->txbkpring;
 VAR_1->txbkpringhead = VAR_1->txbkpring;
 VAR_1->txbkpbufstail = VAR_1->txbkpbufs;

 VAR_1->txbepringtail = VAR_1->txbepring;
 VAR_1->txbepringhead = VAR_1->txbepring;
 VAR_1->txbepbufstail = VAR_1->txbepbufs;

 VAR_1->txvipringtail = VAR_1->txvipring;
 VAR_1->txvipringhead = VAR_1->txvipring;
 VAR_1->txvipbufstail = VAR_1->txvipbufs;

 VAR_1->txvopringtail = VAR_1->txvopring;
 VAR_1->txvopringhead = VAR_1->txvopring;
 VAR_1->txvopbufstail = VAR_1->txvopbufs;

 VAR_1->txhpringtail = VAR_1->txhpring;
 VAR_1->txhpringhead = VAR_1->txhpring;
 VAR_1->txhpbufstail = VAR_1->txhpbufs;

 VAR_1->txbeaconringtail = VAR_1->txbeaconring;
 VAR_1->txbeaconbufstail = VAR_1->txbeaconbufs;
 FUNC_2(VAR_0);

 FUNC_1(VAR_1->ieee80211);
 VAR_1->ack_tx_to_ieee = 0;
}
