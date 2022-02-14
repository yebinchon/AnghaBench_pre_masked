
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct pvr2_context {void (* setup_func ) (struct pvr2_context*) ;int hdw; struct pvr2_context* exist_next; struct pvr2_context* exist_prev; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pvr2_context* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pvr2_context*) ;
 struct pvr2_context* VAR_2 ;
 struct pvr2_context* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct pvr2_context*,int) ;
 int FUNC_6 (struct usb_interface*,struct usb_device_id const*) ;
 int FUNC_7 (int ,char*,struct pvr2_context*) ;

struct pvr2_context *FUNC_8(
 struct usb_interface *VAR_5,
 const struct usb_device_id *VAR_6,
 void (*VAR_7)(struct pvr2_context *))
{
 struct pvr2_context *VAR_8 = ((void*)0);
 VAR_8 = FUNC_0(sizeof(*VAR_8),VAR_0);
 if (!VAR_8) goto done;
 FUNC_7(VAR_1,"pvr2_context %p (create)",VAR_8);
 VAR_8->setup_func = VAR_7;
 FUNC_1(&VAR_8->mutex);
 FUNC_2(&VAR_4);
 VAR_8->exist_prev = VAR_3;
 VAR_8->exist_next = ((void*)0);
 VAR_3 = VAR_8;
 if (VAR_8->exist_prev) {
  VAR_8->exist_prev->exist_next = VAR_8;
 } else {
  VAR_2 = VAR_8;
 }
 FUNC_3(&VAR_4);
 VAR_8->hdw = FUNC_6(VAR_5,VAR_6);
 if (!VAR_8->hdw) {
  FUNC_4(VAR_8);
  VAR_8 = ((void*)0);
  goto done;
 }
 FUNC_5(VAR_8, !0);
 done:
 return VAR_8;
}
