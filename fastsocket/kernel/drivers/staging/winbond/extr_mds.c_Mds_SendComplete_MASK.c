
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct hw_data {size_t dto_tx_retry_count; size_t* tx_retry_count; size_t dto_tx_frag_count; int tx_ETR_count; int tx_Null_key_count; int tx_WepOn_false_count; int tx_TBTT_start_count; } ;
struct wb35_mds {size_t** TxRate; int * TxResult; } ;
struct wbsoft_priv {struct hw_data sHwData; struct wb35_mds Mds; } ;
struct TYPE_3__ {int value; scalar_t__ T02_effective_transmission_rate; scalar_t__ T02_discard_due_to_null_wep_key; scalar_t__ T02_transmit_without_encryption_due_to_wep_on_false; scalar_t__ T02_transmit_abort_due_to_TBTT; scalar_t__ T02_out_of_MaxTxMSDULiftTime; scalar_t__ T02_transmit_abort; scalar_t__ T02_MPDU_Cnt; scalar_t__ T02_IsLastMpdu; scalar_t__ T02_IgnoreResult; scalar_t__ T02_Tx_PktID; } ;
typedef TYPE_1__* PT02_DESCRIPTOR ;


 int VAR_0 ;
 int FUNC_0 (struct wbsoft_priv*,size_t,size_t) ;
 int FUNC_1 (char*,size_t) ;

void
FUNC_2(struct wbsoft_priv * VAR_1, PT02_DESCRIPTOR VAR_2)
{
 struct wb35_mds *VAR_3 = &VAR_1->Mds;
 struct hw_data * VAR_4 = &VAR_1->sHwData;
 u8 VAR_5 = (u8)VAR_2->T02_Tx_PktID;
 unsigned char VAR_6 = 1;
 u8 VAR_7, VAR_8;

 if (VAR_2->T02_IgnoreResult)
  return;
 if (VAR_2->T02_IsLastMpdu) {


  VAR_8 = VAR_3->TxRate[ VAR_5 ][ 0 ];
  VAR_7 = (u8)VAR_2->T02_MPDU_Cnt;
  if (VAR_2->value & VAR_0) {
   VAR_6 = 0;

   if (VAR_2->T02_transmit_abort || VAR_2->T02_out_of_MaxTxMSDULiftTime) {

    VAR_4->dto_tx_retry_count += (VAR_7+1);

    if (VAR_7<7)
     VAR_4->tx_retry_count[VAR_7] += VAR_7;
    else
     VAR_4->tx_retry_count[7] += VAR_7;



    FUNC_0(VAR_1, VAR_8, VAR_7);
   }
   VAR_4->dto_tx_frag_count += (VAR_7+1);


   if (VAR_2->T02_transmit_abort_due_to_TBTT)
    VAR_4->tx_TBTT_start_count++;
   if (VAR_2->T02_transmit_without_encryption_due_to_wep_on_false)
    VAR_4->tx_WepOn_false_count++;
   if (VAR_2->T02_discard_due_to_null_wep_key)
    VAR_4->tx_Null_key_count++;
  } else {
   if (VAR_2->T02_effective_transmission_rate)
    VAR_4->tx_ETR_count++;
   FUNC_0(VAR_1, VAR_8, VAR_7);
  }


  VAR_3->TxResult[ VAR_5 ] = 0;
 } else
  VAR_3->TxResult[ VAR_5 ] |= ((u16)(VAR_2->value & 0x0ffff));
}
