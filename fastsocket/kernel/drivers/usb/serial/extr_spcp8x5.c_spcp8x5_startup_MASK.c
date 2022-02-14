
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct usb_serial {int num_ports; int * port; TYPE_2__* dev; } ;
struct spcp8x5_private {int type; int * buf; int delta_msr_wait; int lock; } ;
typedef enum spcp8x5_type { ____Placeholder_spcp8x5_type } spcp8x5_type ;
struct TYPE_3__ {scalar_t__ idVendor; int idProduct; } ;
struct TYPE_4__ {int dev; TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spcp8x5_private*) ;
 struct spcp8x5_private* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 struct spcp8x5_private* FUNC_9 (int ) ;
 int FUNC_10 (int ,struct spcp8x5_private*) ;

__attribute__((used)) static int FUNC_11(struct usb_serial *VAR_8)
{
 struct spcp8x5_private *VAR_9;
 int VAR_10;
 enum spcp8x5_type VAR_11 = VAR_2;
 u16 VAR_12 = FUNC_7(VAR_8->dev->descriptor.idProduct);

 if (VAR_12 == 0x0201)
  VAR_11 = VAR_2;
 else if (VAR_12 == 0x0231)
  VAR_11 = VAR_6;
 else if (VAR_12 == 0x0235)
  VAR_11 = VAR_3;
 else if (VAR_12 == 0x0204)
  VAR_11 = VAR_4;
 else if (VAR_12 == 0x0471 &&
   VAR_8->dev->descriptor.idVendor == FUNC_1(0x081e))
  VAR_11 = VAR_5;
 FUNC_2(&VAR_8->dev->dev, "device type = %d\n", (int)VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_8->num_ports; ++VAR_10) {
  VAR_9 = FUNC_6(sizeof(struct spcp8x5_private), VAR_1);
  if (!VAR_9)
   goto cleanup;

  FUNC_8(&VAR_9->lock);
  VAR_9->buf = FUNC_0(VAR_7);
  if (VAR_9->buf == ((void*)0))
   goto cleanup2;

  FUNC_4(&VAR_9->delta_msr_wait);
  VAR_9->type = VAR_11;
  FUNC_10(VAR_8->port[VAR_10] , VAR_9);

 }

 return 0;

cleanup2:
 FUNC_5(VAR_9);
cleanup:
 for (--VAR_10; VAR_10 >= 0; --VAR_10) {
  VAR_9 = FUNC_9(VAR_8->port[VAR_10]);
  FUNC_3(VAR_9->buf);
  FUNC_5(VAR_9);
  FUNC_10(VAR_8->port[VAR_10] , ((void*)0));
 }
 return -VAR_0;
}
