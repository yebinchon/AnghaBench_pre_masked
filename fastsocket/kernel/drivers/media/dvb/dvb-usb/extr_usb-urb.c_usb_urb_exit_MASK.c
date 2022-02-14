
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_data_stream {int urbs_initialized; int ** urb_list; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct usb_data_stream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_data_stream*) ;

int FUNC_4(struct usb_data_stream *VAR_0)
{
 int VAR_1;

 FUNC_3(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->urbs_initialized; VAR_1++) {
  if (VAR_0->urb_list[VAR_1] != ((void*)0)) {
   FUNC_0("freeing URB no. %d.\n",VAR_1);

   FUNC_2(VAR_0->urb_list[VAR_1]);
  }
 }
 VAR_0->urbs_initialized = 0;

 FUNC_1(VAR_0);
 return 0;
}
