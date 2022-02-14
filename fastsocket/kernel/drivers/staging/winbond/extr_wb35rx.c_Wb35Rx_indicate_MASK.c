
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct wb35_rx {size_t RxProcessIndex; int* RxOwner; int* RxBufferSize; int Ep3ErrorCount2; int EP3vm_state; int * pDRx; } ;
struct hw_data {struct wb35_rx Wb35Rx; } ;
struct wbsoft_priv {struct hw_data sHwData; } ;
struct TYPE_4__ {void* value; } ;
struct TYPE_3__ {scalar_t__ R00_receive_byte_count; void* value; } ;
struct wb35_descriptor {int* buffer_size; int buffer_number; int buffer_total_size; scalar_t__ buffer_start_index; int ** buffer_address; TYPE_2__ R01; TYPE_1__ R00; } ;
struct ieee80211_hw {struct wbsoft_priv* priv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wb35_descriptor*) ;
 int FUNC_1 (size_t) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (struct ieee80211_hw*,int *,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static u16 FUNC_5(struct ieee80211_hw *VAR_4)
{
 struct wbsoft_priv *VAR_5 = VAR_4->priv;
 struct hw_data * VAR_6 = &VAR_5->sHwData;
 struct wb35_descriptor VAR_7;
 struct wb35_rx *VAR_8 = &VAR_6->Wb35Rx;
 u8 * VAR_9;
 u16 VAR_10;
 u16 VAR_11, VAR_12, VAR_13 = 0;
 u32 VAR_14;


 do {
  VAR_14 = VAR_8->RxProcessIndex;
  if (VAR_8->RxOwner[ VAR_14 ])
   break;

  VAR_8->RxProcessIndex++;
  VAR_8->RxProcessIndex %= VAR_1;

  VAR_9 = VAR_8->pDRx;
  VAR_12 = VAR_8->RxBufferSize[ VAR_14 ];


  while (VAR_12 >= 4) {
   if ((FUNC_1(*(u32 *)VAR_9) & 0x0fffffff) == VAR_2)
    break;


   VAR_7.R00.value = FUNC_2(*(u32 *)VAR_9);
   VAR_10 = (u16)VAR_7.R00.R00_receive_byte_count;
   VAR_7.R01.value = FUNC_2(*((u32 *)(VAR_9+4)));

   if ((VAR_10 & 0x03) > 0)
    VAR_10 -= 4;


   if (VAR_10 > VAR_0) {




    VAR_8->EP3vm_state = VAR_3;
    VAR_8->Ep3ErrorCount2++;
    break;
   }



   VAR_12 -= 8;
   VAR_9 += 8;

   VAR_7.buffer_address[0] = VAR_9;
   VAR_7.buffer_size[0] = VAR_10;
   VAR_7.buffer_number = 1;
   VAR_7.buffer_start_index = 0;
   VAR_7.buffer_total_size = VAR_7.buffer_size[0];
   FUNC_0(&VAR_7);

   FUNC_3(VAR_4, VAR_9, VAR_10);


   VAR_11 = VAR_10 + 3;
   VAR_11 &= ~0x03;
   VAR_9 += VAR_11;
   VAR_12 -= VAR_11;
   VAR_13 += VAR_11;
  }


  VAR_8->RxOwner[ VAR_14 ] = 1;
 } while (1);

 return VAR_13;
}
