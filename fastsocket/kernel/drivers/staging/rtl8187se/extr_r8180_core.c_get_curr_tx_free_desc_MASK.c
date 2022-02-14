
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8180_priv {int txringcount; int * txhpringtail; int * txhpringhead; int * txvopringtail; int * txvopringhead; int * txvipringtail; int * txvipringhead; int * txbepringtail; int * txbepringhead; int * txbkpringtail; int * txbkpringhead; int * txmapringtail; int * txmapringhead; } ;
struct net_device {int dummy; } ;




 int FUNC_0 (char*) ;




 struct r8180_priv* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_0, int VAR_1)
{
 struct r8180_priv *VAR_2 = FUNC_1(VAR_0);
 u32* VAR_3;
 u32* VAR_4;
 int VAR_5;

 switch (VAR_1){
  case 130:
   VAR_4 = VAR_2->txmapringhead;
   VAR_3 = VAR_2->txmapringtail;
   break;
  case 132:
   VAR_4 = VAR_2->txbkpringhead;
   VAR_3 = VAR_2->txbkpringtail;
   break;
  case 133:
   VAR_4 = VAR_2->txbepringhead;
   VAR_3 = VAR_2->txbepringtail;
   break;
  case 129:
   VAR_4 = VAR_2->txvipringhead;
   VAR_3 = VAR_2->txvipringtail;
   break;
  case 128:
   VAR_4 = VAR_2->txvopringhead;
   VAR_3 = VAR_2->txvopringtail;
   break;
  case 131:
   VAR_4 = VAR_2->txhpringhead;
   VAR_3 = VAR_2->txhpringtail;
   break;
  default:
   return -1;
 }

 if (VAR_4 <= VAR_3)
  VAR_5 = VAR_2->txringcount - (VAR_3 - VAR_4)/8;
 else
  VAR_5 = (VAR_4 - VAR_3)/8;

 if (VAR_5 > VAR_2->txringcount)
  FUNC_0("BUG");

 return VAR_5;
}
