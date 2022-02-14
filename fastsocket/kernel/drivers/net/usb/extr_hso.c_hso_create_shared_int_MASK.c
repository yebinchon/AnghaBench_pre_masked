
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct hso_shared_int {int shared_intr_urb; struct hso_shared_int* shared_intr_buf; int shared_int_lock; TYPE_1__* intr_endp; } ;
struct TYPE_2__ {int wMaxPacketSize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__* FUNC_1 (struct usb_interface*,int ,int ) ;
 int FUNC_2 (struct hso_shared_int*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static
struct hso_shared_int *FUNC_7(struct usb_interface *VAR_3)
{
 struct hso_shared_int *VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);

 if (!VAR_4)
  return ((void*)0);

 VAR_4->intr_endp = FUNC_1(VAR_3, VAR_2,
        VAR_1);
 if (!VAR_4->intr_endp) {
  FUNC_0(&VAR_3->dev, "Can't find INT IN endpoint\n");
  goto exit;
 }

 VAR_4->shared_intr_urb = FUNC_5(0, VAR_0);
 if (!VAR_4->shared_intr_urb) {
  FUNC_0(&VAR_3->dev, "Could not allocate intr urb?");
  goto exit;
 }
 VAR_4->shared_intr_buf = FUNC_3(VAR_4->intr_endp->wMaxPacketSize,
           VAR_0);
 if (!VAR_4->shared_intr_buf) {
  FUNC_0(&VAR_3->dev, "Could not allocate intr buf?");
  goto exit;
 }

 FUNC_4(&VAR_4->shared_int_lock);

 return VAR_4;

exit:
 FUNC_2(VAR_4->shared_intr_buf);
 FUNC_6(VAR_4->shared_intr_urb);
 FUNC_2(VAR_4);
 return ((void*)0);
}
