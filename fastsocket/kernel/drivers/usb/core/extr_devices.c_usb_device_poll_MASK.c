
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_status {scalar_t__ lastev; } ;
struct poll_table_struct {int dummy; } ;
struct file {int f_mode; struct usb_device_status* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device_status*) ;
 struct usb_device_status* FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_4 () ;

__attribute__((used)) static unsigned int FUNC_5(struct file *VAR_5,
        struct poll_table_struct *VAR_6)
{
 struct usb_device_status *VAR_7 = VAR_5->private_data;
 unsigned int VAR_8 = 0;

 FUNC_2();
 if (!VAR_7) {
  VAR_7 = FUNC_1(sizeof(struct usb_device_status), VAR_1);



  if (VAR_5->private_data) {
   FUNC_0(VAR_7);
   VAR_7 = VAR_5->private_data;
   goto lost_race;
  }

  if (!VAR_7) {
   FUNC_4();
   return VAR_2;
  }






  VAR_7->lastev = VAR_3;
  VAR_5->private_data = VAR_7;
  VAR_8 = VAR_2;
 }
lost_race:
 if (VAR_5->f_mode & VAR_0)
  FUNC_3(VAR_5, &VAR_4, VAR_6);
 if (VAR_7->lastev != VAR_3)
  VAR_8 |= VAR_2;
 VAR_7->lastev = VAR_3;
 FUNC_4();
 return VAR_8;
}
