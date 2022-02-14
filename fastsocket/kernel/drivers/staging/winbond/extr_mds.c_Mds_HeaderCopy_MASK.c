
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wb35_mds {int** TxRate; } ;
struct wbsoft_priv {struct wb35_mds Mds; } ;
struct wb35_descriptor {int** buffer_address; size_t Descriptor_ID; int TxRate; int PreambleMode; int FragmentThreshold; int buffer_total_size; int * buffer_size; } ;
struct TYPE_4__ {size_t T00_tx_packet_id; int T00_header_length; scalar_t__ value; } ;
struct TYPE_3__ {int T01_retry_abort_ebable; int T01_modulation_type; int T01_transmit_rate; int T01_fall_back_rate; int T01_plcp_header_length; scalar_t__ T01_wep_id; scalar_t__ value; } ;
typedef TYPE_1__* PT01_DESCRIPTOR ;
typedef TYPE_2__* PT00_DESCRIPTOR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct wbsoft_priv * VAR_6, struct wb35_descriptor *VAR_7, u8 *VAR_8)
{
 struct wb35_mds *VAR_9 = &VAR_6->Mds;
 u8 *VAR_10 = VAR_7->buffer_address[0];
 PT00_DESCRIPTOR VAR_11;
 PT01_DESCRIPTOR VAR_12;
 u16 VAR_13;
 u8 VAR_14, VAR_15, VAR_16, VAR_17;
 u16 VAR_18 = VAR_0;


 VAR_13 = VAR_7->buffer_total_size;



 VAR_11 = (PT00_DESCRIPTOR)VAR_8;
 VAR_8 += 4;
 VAR_12 = (PT01_DESCRIPTOR)VAR_8;
 VAR_8 += 4;

 VAR_11->value = 0;
 VAR_12->value = 0;

 VAR_11->T00_tx_packet_id = VAR_7->Descriptor_ID;
 VAR_11->T00_header_length = 24;
 VAR_12->T01_retry_abort_ebable = 1;


 VAR_12->T01_wep_id = 0;

 VAR_18 = VAR_3;

 FUNC_0( VAR_8, VAR_10, VAR_4 );
 VAR_7->buffer_address[0] = VAR_10 + VAR_4;
 VAR_7->buffer_total_size -= VAR_4;
 VAR_7->buffer_size[0] = VAR_7->buffer_total_size;


 VAR_18 -= (VAR_4 + 4);
 VAR_7->FragmentThreshold = VAR_18;


 VAR_8[1] |= 0x04;




 VAR_13 = *(u16 *)(VAR_8+30);


 VAR_15 = VAR_17 = VAR_2;

 VAR_7->TxRate = VAR_15;




 VAR_12->T01_modulation_type = (VAR_15%3) ? 0 : 1;

 for( VAR_14=0; VAR_14<2; VAR_14++ ) {
  if( VAR_14 == 1 )
   VAR_15 = VAR_17;

  VAR_9->TxRate[VAR_7->Descriptor_ID][VAR_14] = VAR_15;

  if( VAR_15 == 108) VAR_16 = 7;
  else if( VAR_15 == 96 ) VAR_16 = 6;
  else if( VAR_15 == 72 ) VAR_16 = 5;
  else if( VAR_15 == 48 ) VAR_16 = 4;
  else if( VAR_15 == 36 ) VAR_16 = 3;
  else if( VAR_15 == 24 ) VAR_16 = 2;
  else if( VAR_15 == 18 ) VAR_16 = 1;
  else if( VAR_15 == 12 ) VAR_16 = 0;
  else if( VAR_15 == 22 ) VAR_16 = 3;
  else if( VAR_15 == 11 ) VAR_16 = 2;
  else if( VAR_15 == 4 ) VAR_16 = 1;
  else VAR_16 = 0;

  if( VAR_14 == 0 )
   VAR_12->T01_transmit_rate = VAR_16;
  else
   VAR_12->T01_fall_back_rate = VAR_16;
 }




 if ((VAR_12->T01_modulation_type == 0) && (VAR_12->T01_transmit_rate == 0))
  VAR_7->PreambleMode = VAR_5;
 else
  VAR_7->PreambleMode = VAR_1;
 VAR_12->T01_plcp_header_length = VAR_7->PreambleMode;

}
