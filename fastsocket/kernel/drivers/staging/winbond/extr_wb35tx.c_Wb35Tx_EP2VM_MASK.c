
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int udev; } ;
struct wb35_tx {int TxResultCount; int EP2vm_state; scalar_t__ tx_halt; scalar_t__ EP2_buf; scalar_t__ Tx2Urb; } ;
struct hw_data {TYPE_1__ WbUsb; scalar_t__ HwStop; scalar_t__ SurpriseRemove; struct wb35_tx Wb35Tx; } ;
struct wbsoft_priv {struct hw_data sHwData; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct urb*,int ,int ,int *,int ,int ,struct wbsoft_priv*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_5(struct wbsoft_priv *VAR_5)
{
 struct hw_data * VAR_6 = &VAR_5->sHwData;
 struct wb35_tx *VAR_7 = &VAR_6->Wb35Tx;
 struct urb * VAR_8 = (struct urb *)VAR_7->Tx2Urb;
 u32 * VAR_9 = (u32 *)VAR_7->EP2_buf;
 int VAR_10;

 if (VAR_6->SurpriseRemove || VAR_6->HwStop)
  goto error;

 if (VAR_7->tx_halt)
  goto error;




 FUNC_2( VAR_8, VAR_6->WbUsb.udev, FUNC_3(VAR_6->WbUsb.udev,2),
     VAR_9, VAR_1, VAR_4, VAR_5, 32);

 VAR_7->EP2vm_state = VAR_2;
 VAR_10 = FUNC_4(VAR_8, VAR_0);

 if (VAR_10 < 0) {



  goto error;
 }

 return;
error:
 VAR_7->EP2vm_state = VAR_3;
 FUNC_0(&VAR_7->TxResultCount);
}
