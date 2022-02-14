
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_mds {int TxPause; int pTxBuffer; int TxFragmentThreshold; int TxRTSThreshold; } ;
struct wbsoft_priv {int sHwData; struct wb35_mds Mds; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (int *,int *) ;

unsigned char
FUNC_1(struct wbsoft_priv * VAR_2)
{
 struct wb35_mds *VAR_3 = &VAR_2->Mds;

 VAR_3->TxPause = 0;
 VAR_3->TxRTSThreshold = VAR_1;
 VAR_3->TxFragmentThreshold = VAR_0;

 return FUNC_0( &VAR_2->sHwData, &VAR_3->pTxBuffer );
}
