
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int kref; int disc_mutex; scalar_t__ disconnected; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct usb_serial** VAR_0 ;
 int VAR_1 ;

struct usb_serial *FUNC_3(unsigned VAR_2)
{
 struct usb_serial *VAR_3;

 FUNC_1(&VAR_1);
 VAR_3 = VAR_0[VAR_2];

 if (VAR_3) {
  FUNC_1(&VAR_3->disc_mutex);
  if (VAR_3->disconnected) {
   FUNC_2(&VAR_3->disc_mutex);
   VAR_3 = ((void*)0);
  } else {
   FUNC_0(&VAR_3->kref);
  }
 }
 FUNC_2(&VAR_1);
 return VAR_3;
}
