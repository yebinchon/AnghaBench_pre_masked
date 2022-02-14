
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct wb35_tx {scalar_t__ EP2VM_status; void* EP2vm_state; int TxResultCount; scalar_t__ tx_halt; scalar_t__ EP2_buf; } ;
struct hw_data {scalar_t__ HwStop; scalar_t__ SurpriseRemove; struct wb35_tx Wb35Tx; } ;
struct wbsoft_priv {struct hw_data sHwData; } ;
struct urb {scalar_t__ status; int actual_length; struct wbsoft_priv* context; } ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ T02_DESCRIPTOR ;


 int FUNC_0 (struct wbsoft_priv*,TYPE_1__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct urb * VAR_2)
{
 struct wbsoft_priv *VAR_3 = VAR_2->context;
 struct hw_data * VAR_4 = &VAR_3->sHwData;
 T02_DESCRIPTOR VAR_5, VAR_6;
 struct wb35_tx *VAR_7 = &VAR_4->Wb35Tx;
 u32 * VAR_8 = (u32 *)VAR_7->EP2_buf;
 u32 VAR_9;
 u16 VAR_10;



 VAR_7->EP2vm_state = VAR_0;
 VAR_7->EP2VM_status = VAR_2->status;


 if (VAR_4->SurpriseRemove || VAR_4->HwStop)
  goto error;

 if (VAR_7->tx_halt)
  goto error;


 if (VAR_7->EP2VM_status != 0) {
  FUNC_3("EP2 IoCompleteRoutine return error\n");
  VAR_7->EP2vm_state= VAR_1;
  goto error;
 }


 VAR_10 = VAR_2->actual_length;

 VAR_5 = FUNC_2(VAR_8[0]) >> 8;
 VAR_10 -= 1;
 VAR_10 >>= 2;
 for (VAR_9 = 1; VAR_9 <= VAR_10; VAR_9++) {
  VAR_5 |= ((FUNC_2(VAR_8[VAR_9]) & 0xff) << 24);

  VAR_6.value = VAR_5;
  FUNC_0( VAR_3, &VAR_6 );
  VAR_5 = FUNC_2(VAR_8[VAR_9]) >> 8;
 }

 return;
error:
 FUNC_1(&VAR_7->TxResultCount);
 VAR_7->EP2vm_state = VAR_1;
}
