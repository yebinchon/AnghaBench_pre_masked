
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_data_stream {int urbs_initialized; int urbs_submitted; int * urb_list; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct usb_data_stream*) ;

int FUNC_4(struct usb_data_stream *VAR_1)
{
 int VAR_2,VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_1->urbs_initialized; VAR_2++) {
  FUNC_0("submitting URB no. %d\n",VAR_2);
  if ((VAR_3 = FUNC_2(VAR_1->urb_list[VAR_2],VAR_0))) {
   FUNC_1("could not submit URB no. %d - get them all back",VAR_2);
   FUNC_3(VAR_1);
   return VAR_3;
  }
  VAR_1->urbs_submitted++;
 }
 return 0;
}
