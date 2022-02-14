
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wb35_mds {int MicAdd; int** MicWriteAddress; size_t MicWriteIndex; int* MicWriteSize; } ;
struct wbsoft_priv {struct wb35_mds Mds; } ;
struct wb35_descriptor {int buffer_total_size; int buffer_start_index; int FragmentThreshold; int** buffer_address; int* buffer_size; int FragmentCount; } ;
struct TYPE_2__ {int T00_frame_length; int T00_first_mpdu; int T00_last_mpdu; int T00_IsLastMpdu; } ;
typedef TYPE_1__* PT00_DESCRIPTOR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static u16 FUNC_1(struct wbsoft_priv *VAR_2, struct wb35_descriptor *VAR_3, u8 *VAR_4)
{
 PT00_DESCRIPTOR VAR_5;
 struct wb35_mds *VAR_6 = &VAR_2->Mds;
 u8 *VAR_7;
 u8 *VAR_8;
 u8 *VAR_9;
 u16 VAR_10 = 0;
 u16 VAR_11, VAR_12, VAR_13, VAR_14;
 u8 VAR_15, VAR_16 = 0;



 VAR_7 = VAR_4;
 VAR_11 = VAR_3->buffer_total_size;
 VAR_15 = VAR_3->buffer_start_index;

 VAR_5 = (PT00_DESCRIPTOR)VAR_7;
 while (VAR_11) {
  VAR_5 = (PT00_DESCRIPTOR)VAR_7;
  VAR_12 = VAR_11;
  if (VAR_11 > VAR_3->FragmentThreshold) {
   VAR_12 = VAR_3->FragmentThreshold;
   VAR_5->T00_frame_length = 24 + VAR_12;
  } else
   VAR_5->T00_frame_length = 24 + VAR_11;

  VAR_11 -= VAR_12;


  VAR_9 = (u8 *)( VAR_7 + 8 + VAR_0 );
  *VAR_9 &= 0xf0;
  *VAR_9 |= VAR_16;
  if( !VAR_16 )
   VAR_5->T00_first_mpdu = 1;

  VAR_7 += 32;
  VAR_10 += 32;


  VAR_14 = VAR_12 + 3;
  VAR_14 &= ~0x03;
  VAR_10 += VAR_14;

  while (VAR_12) {

   VAR_8 = VAR_3->buffer_address[VAR_15];
   VAR_13 = VAR_12;
   if (VAR_12 >= VAR_3->buffer_size[VAR_15]) {
    VAR_13 = VAR_3->buffer_size[VAR_15];


    VAR_15++;
    VAR_15 %= VAR_1;
   } else {
    u8 *VAR_17 = VAR_3->buffer_address[VAR_15];
    VAR_17 += VAR_12;
    VAR_3->buffer_address[VAR_15] = VAR_17;
    VAR_3->buffer_size[VAR_15] -= VAR_12;
   }

   FUNC_0(VAR_7, VAR_8, VAR_13);
   VAR_7 += VAR_13;
   VAR_12 -= VAR_13;
  }


  if (VAR_6->MicAdd) {
   if (!VAR_11) {
    VAR_6->MicWriteAddress[ VAR_6->MicWriteIndex ] = VAR_7 - VAR_6->MicAdd;
    VAR_6->MicWriteSize[ VAR_6->MicWriteIndex ] = VAR_6->MicAdd;
    VAR_6->MicAdd = 0;
   }
   else if( VAR_11 < 8 )
   {
    VAR_6->MicAdd = VAR_11;
    VAR_6->MicWriteAddress[ VAR_6->MicWriteIndex ] = VAR_7 - ( 8 - VAR_11 );
    VAR_6->MicWriteSize[ VAR_6->MicWriteIndex ] = 8 - VAR_11;
    VAR_6->MicWriteIndex++;
   }
  }


  if (VAR_11) {
   VAR_7 = VAR_4 + VAR_10;
   FUNC_0( VAR_7, VAR_4, 32 );
   VAR_5 = (PT00_DESCRIPTOR)VAR_7;
   VAR_5->T00_first_mpdu = 0;
  }

  VAR_16++;
 }

 VAR_5->T00_last_mpdu = 1;
 VAR_5->T00_IsLastMpdu = 1;
 VAR_7 = (u8 *)VAR_5 + 8;
 VAR_7[1] &= ~0x04;
 VAR_3->FragmentCount = VAR_16;
 return VAR_10;
}
