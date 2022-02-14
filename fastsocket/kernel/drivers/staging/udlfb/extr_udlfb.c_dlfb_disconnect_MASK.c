
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct dlfb_data {TYPE_1__* info; struct dlfb_data* backing_buffer; int screen_size; int udev; int tx_urb; int bulk_mutex; } ;
struct TYPE_3__ {int screen_base; int cmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct dlfb_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 struct dlfb_data* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_12(struct usb_interface *VAR_0)
{
 struct dlfb_data *VAR_1 = FUNC_8(VAR_0);

 FUNC_3(&VAR_1->bulk_mutex);

 FUNC_9(VAR_1->tx_urb);
 FUNC_7(VAR_1->tx_urb);
 FUNC_11(VAR_0, ((void*)0));
 FUNC_10(VAR_1->udev);

 if (VAR_1->info) {
  FUNC_6(VAR_1->info);
  FUNC_0(&VAR_1->info->cmap);
  FUNC_5(VAR_1->info->screen_base, VAR_1->screen_size);
  FUNC_2(VAR_1->backing_buffer);
  FUNC_1(VAR_1->info);

 }

 FUNC_2(VAR_1);

 FUNC_4("DisplayLink device disconnected\n");
}
