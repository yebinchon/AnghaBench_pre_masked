
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8180_priv {int* txmapring; int txringcount; int* txbkpring; int* txbepring; int* txvipring; int* txvopring; int* txhpring; } ;
struct net_device {int dummy; } ;


 struct r8180_priv* FUNC_0 (struct net_device*) ;

short FUNC_1(struct net_device *VAR_0){

 struct r8180_priv *VAR_1 = FUNC_0(VAR_0);
 u32* VAR_2;

 for (VAR_2 = VAR_1->txmapring;
  VAR_2 < VAR_1->txmapring + VAR_1->txringcount;VAR_2+=8)
   if(*VAR_2 & (1<<31)) return 0;

 for (VAR_2 = VAR_1->txbkpring;
  VAR_2 < VAR_1->txbkpring + VAR_1->txringcount;VAR_2+=8)
   if(*VAR_2 & (1<<31)) return 0;

 for (VAR_2 = VAR_1->txbepring;
  VAR_2 < VAR_1->txbepring + VAR_1->txringcount;VAR_2+=8)
   if(*VAR_2 & (1<<31)) return 0;

 for (VAR_2 = VAR_1->txvipring;
  VAR_2 < VAR_1->txvipring + VAR_1->txringcount;VAR_2+=8)
   if(*VAR_2 & (1<<31)) return 0;

 for (VAR_2 = VAR_1->txvopring;
  VAR_2 < VAR_1->txvopring + VAR_1->txringcount;VAR_2+=8)
   if(*VAR_2 & (1<<31)) return 0;

 for (VAR_2 = VAR_1->txhpring;
  VAR_2 < VAR_1->txhpring + VAR_1->txringcount;VAR_2+=8)
   if(*VAR_2 & (1<<31)) return 0;
 return 1;
}
