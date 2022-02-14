
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct usb_cpia {int ** buffers; int * workbuff; TYPE_1__* curbuff; int wq_stream; scalar_t__ open; scalar_t__ present; } ;
struct cam_data {int * lowlevel_data; int cam_data_list; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cam_data*) ;
 int FUNC_1 (int *) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_cpia*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct cam_data* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct usb_interface*,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct usb_interface *VAR_2)
{
 struct cam_data *VAR_3 = FUNC_7(VAR_2);
 struct usb_cpia *VAR_4;
 struct usb_device *VAR_5;

 FUNC_8(VAR_2, ((void*)0));
 if (!VAR_3)
  return;

 VAR_4 = (struct usb_cpia *) VAR_3->lowlevel_data;
 FUNC_5( &VAR_1 );
 FUNC_4(&VAR_3->cam_data_list);
 FUNC_6( &VAR_1 );

 VAR_4->present = 0;

 FUNC_0(VAR_3);
 if(VAR_4->open)
  FUNC_1(VAR_3->lowlevel_data);

 VAR_4->curbuff->status = VAR_0;

 if (FUNC_10(&VAR_4->wq_stream))
  FUNC_11(&VAR_4->wq_stream);

 VAR_5 = FUNC_2(VAR_2);

 VAR_4->curbuff = VAR_4->workbuff = ((void*)0);

 FUNC_9(VAR_4->buffers[2]);
 VAR_4->buffers[2] = ((void*)0);

 FUNC_9(VAR_4->buffers[1]);
 VAR_4->buffers[1] = ((void*)0);

 FUNC_9(VAR_4->buffers[0]);
 VAR_4->buffers[0] = ((void*)0);

 VAR_3->lowlevel_data = ((void*)0);
 FUNC_3(VAR_4);
}
