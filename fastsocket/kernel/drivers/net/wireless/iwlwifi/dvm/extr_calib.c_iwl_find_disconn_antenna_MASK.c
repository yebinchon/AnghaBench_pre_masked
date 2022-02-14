
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int active_chains; } ;
struct TYPE_4__ {scalar_t__ tx_chains_num; } ;
struct iwl_priv {TYPE_3__* nvm_data; TYPE_2__ chain_noise_data; TYPE_1__ hw_params; } ;
struct iwl_chain_noise_data {int chain_signal_a; int chain_signal_b; int chain_signal_c; int* disconn_array; int active_chains; } ;
typedef int s32 ;
struct TYPE_6__ {int valid_rx_ant; scalar_t__ valid_tx_ant; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct iwl_priv *VAR_3, u32* VAR_4,
         struct iwl_chain_noise_data *VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7;
 u16 VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 u16 VAR_11 = 0;

 VAR_4[0] = VAR_5->chain_signal_a / VAR_0;
 VAR_4[1] = VAR_5->chain_signal_b / VAR_0;
 VAR_4[2] = VAR_5->chain_signal_c / VAR_0;

 if (VAR_4[0] >= VAR_4[1]) {
  VAR_7 = VAR_4[0];
  VAR_8 = 0;
  VAR_6 = (1 << VAR_8);
 } else {
  VAR_7 = VAR_4[1];
  VAR_8 = 1;
  VAR_6 = (1 << VAR_8);
 }

 if (VAR_4[2] >= VAR_7) {
  VAR_7 = VAR_4[2];
  VAR_8 = 2;
  VAR_6 = (1 << VAR_8);
 }

 FUNC_1(VAR_3, "average_sig: a %d b %d c %d\n",
       VAR_4[0], VAR_4[1], VAR_4[2]);
 FUNC_1(VAR_3, "max_average_sig = %d, antenna %d\n",
       VAR_7, VAR_8);


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (VAR_11 != VAR_8) {
   s32 VAR_12 = (VAR_7 - VAR_4[VAR_11]);



   if (VAR_12 > VAR_1)
    VAR_5->disconn_array[VAR_11] = 1;
   else
    VAR_6 |= (1 << VAR_11);
   FUNC_1(VAR_3, "i = %d  rssiDelta = %d  "
        "disconn_array[i] = %d\n",
        VAR_11, VAR_12, VAR_5->disconn_array[VAR_11]);
  }
 }
 VAR_6 &= VAR_3->nvm_data->valid_rx_ant;

 VAR_9 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {


  u8 VAR_13 = (1 << VAR_11);
  if (!(VAR_3->nvm_data->valid_tx_ant & VAR_13))
   continue;

  VAR_9++;
  if (VAR_5->disconn_array[VAR_11] == 0)

   break;
  if (VAR_9 == VAR_3->hw_params.tx_chains_num &&
      VAR_5->disconn_array[VAR_11]) {




   VAR_10 =
    FUNC_2(VAR_3->nvm_data->valid_tx_ant);
   VAR_5->disconn_array[VAR_10] = 0;
   VAR_6 |= FUNC_0(VAR_10);
   FUNC_1(VAR_3,
     "All Tx chains are disconnected W/A - declare %d as connected\n",
     VAR_10);
   break;
  }
 }

 if (VAR_6 != VAR_3->nvm_data->valid_rx_ant &&
     VAR_6 != VAR_3->chain_noise_data.active_chains)
  FUNC_1(VAR_3,
    "Detected that not all antennas are connected! "
    "Connected: %#x, valid: %#x.\n",
    VAR_6,
    VAR_3->nvm_data->valid_rx_ant);


 VAR_5->active_chains = VAR_6;
 FUNC_1(VAR_3, "active_chains (bitwise) = 0x%x\n",
   VAR_6);
}
