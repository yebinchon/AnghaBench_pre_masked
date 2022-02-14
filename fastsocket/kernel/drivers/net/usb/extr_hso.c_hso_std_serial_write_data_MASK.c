
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hso_serial {int tx_data_count; TYPE_2__* parent; int tx_urb; int tx_data; TYPE_1__* out_endp; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {TYPE_3__* usb; } ;
struct TYPE_5__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_3__*,int ,int ,int,int ,struct hso_serial*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hso_serial *VAR_2)
{
 int VAR_3 = VAR_2->tx_data_count;
 int VAR_4;

 FUNC_1(VAR_2->tx_urb,
     VAR_2->parent->usb,
     FUNC_2(VAR_2->parent->usb,
       VAR_2->out_endp->
       bEndpointAddress & 0x7F),
     VAR_2->tx_data, VAR_2->tx_data_count,
     VAR_1, VAR_2);

 VAR_4 = FUNC_3(VAR_2->tx_urb, VAR_0);
 if (VAR_4) {
  FUNC_0(&VAR_2->parent->usb->dev,
    "Failed to submit urb - res %d\n", VAR_4);
  return VAR_4;
 }

 return VAR_3;
}
