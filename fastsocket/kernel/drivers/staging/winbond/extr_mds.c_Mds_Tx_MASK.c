
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct TYPE_2__ {int len; } ;
struct wb35_mds {size_t TxFillIndex; int* TxOwner; size_t* pTxBuffer; size_t TxDesIndex; int* TxDesFrom; int TxToggle; scalar_t__ TxTsc; int* TxBufferSize; size_t* TxCountInBuffer; int TxThreadCount; int TxTsc_2; scalar_t__ TxPause; } ;
struct hw_data {int IsKeyPreSet; } ;
struct wbsoft_priv {TYPE_1__ sMlmeFrame; struct wb35_mds Mds; struct hw_data sHwData; } ;
struct wb35_descriptor {size_t Descriptor_ID; scalar_t__ EapFix; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hw_data*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct wbsoft_priv*,struct wb35_descriptor*) ;
 int FUNC_2 (struct wbsoft_priv*,int ,int) ;
 int FUNC_3 (struct wbsoft_priv*,struct wb35_descriptor*,size_t*) ;
 int FUNC_4 (struct wbsoft_priv*,struct wb35_descriptor*,size_t*) ;
 int FUNC_5 (struct wbsoft_priv*,struct wb35_descriptor*,size_t*) ;
 int FUNC_6 (struct wbsoft_priv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct hw_data*) ;
 int FUNC_10 (size_t*,int ,int) ;
 int FUNC_11 (char*,...) ;

void
FUNC_12(struct wbsoft_priv * VAR_6)
{
 struct hw_data * VAR_7 = &VAR_6->sHwData;
 struct wb35_mds *VAR_8 = &VAR_6->Mds;
 struct wb35_descriptor VAR_9;
 struct wb35_descriptor *VAR_10 = &VAR_9;
 u8 *VAR_11;
 u16 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u8 VAR_17, VAR_18, VAR_19, VAR_20;
 unsigned char VAR_21 = 0;


 if (VAR_8->TxPause)
  return;
 if (!FUNC_9(VAR_7))
  return;


 if (FUNC_8(&VAR_8->TxThreadCount) != 1)
  goto cleanup;


 do {
  VAR_17 = VAR_8->TxFillIndex;
  if (VAR_8->TxOwner[VAR_17]) {



   break;
  }

  VAR_11 = VAR_8->pTxBuffer + (VAR_3 * VAR_17);
  VAR_12 = 0;
  VAR_20 = 0;
  do {
   VAR_13 = VAR_6->sMlmeFrame.len;
   if (!VAR_13)
    break;


   VAR_16 = VAR_0;

   VAR_19 = VAR_13/VAR_16 + 1;
   VAR_14 = VAR_13 + VAR_19*32 + 8;
   if ((VAR_12 + VAR_14) >= VAR_3) {
    FUNC_11("[Mds_Tx] Excess max tx buffer.\n");
    break;
   }





   VAR_21 = 1;


   FUNC_10((u8 *)VAR_10 + 1, 0, sizeof(struct wb35_descriptor) - 1);

   VAR_18 = VAR_8->TxDesIndex;
   VAR_10->Descriptor_ID = VAR_18;
   VAR_8->TxDesFrom[ VAR_18 ] = 2;
   VAR_8->TxDesIndex++;
   VAR_8->TxDesIndex %= VAR_5;

   FUNC_1( VAR_6, VAR_10 );


   FUNC_5( VAR_6, VAR_10, VAR_11 );


   if (VAR_10->EapFix) {



    VAR_7->IsKeyPreSet = 1;
   }


   VAR_15 = FUNC_3(VAR_6, VAR_10, VAR_11);


   FUNC_4(VAR_6, VAR_10, VAR_11);


   VAR_12 += VAR_15;
   VAR_11 += VAR_15;




    VAR_8->TxToggle = 1;


   FUNC_2(VAR_6, 0, 1);


   VAR_8->TxTsc++;
   if (VAR_8->TxTsc == 0)
    VAR_8->TxTsc_2++;

   VAR_20++;
  } while (FUNC_0(VAR_7));


  if (VAR_21) {

   VAR_8->TxBufferSize[ VAR_17 ] = VAR_12;


   VAR_8->TxCountInBuffer[VAR_17] = VAR_20;


   VAR_8->TxOwner[VAR_17] = 1;

   VAR_8->TxFillIndex++;
   VAR_8->TxFillIndex %= VAR_4;
   VAR_21 = 0;
  } else
   break;

  if (!VAR_13)
   break;

 } while(1);




 if (!VAR_7->IsKeyPreSet)
  FUNC_6(VAR_6);

 cleanup:
 FUNC_7(&VAR_8->TxThreadCount);
}
