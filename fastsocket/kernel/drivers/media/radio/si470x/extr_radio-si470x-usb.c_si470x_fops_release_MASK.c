
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {scalar_t__ users; int disconnect_lock; int intf; int read_queue; struct si470x_device* buffer; struct si470x_device* int_in_buffer; int videodev; scalar_t__ disconnected; scalar_t__ int_in_urb; scalar_t__ int_in_running; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct si470x_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct si470x_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 struct si470x_device* FUNC_6 (struct file*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_1)
{
 struct si470x_device *VAR_2 = FUNC_6(VAR_1);
 int VAR_3 = 0;


 if (!VAR_2) {
  VAR_3 = -VAR_0;
  goto done;
 }

 FUNC_1(&VAR_2->disconnect_lock);
 VAR_2->users--;
 if (VAR_2->users == 0) {

  if (VAR_2->int_in_running) {
   VAR_2->int_in_running = 0;
  if (VAR_2->int_in_urb)
   FUNC_5(VAR_2->int_in_urb);
  }

  if (VAR_2->disconnected) {
   FUNC_7(VAR_2->videodev);
   FUNC_0(VAR_2->int_in_buffer);
   FUNC_0(VAR_2->buffer);
   FUNC_0(VAR_2);
   goto unlock;
  }


  FUNC_8(&VAR_2->read_queue);


  VAR_3 = FUNC_3(VAR_2);
  FUNC_4(VAR_2->intf);
 }
unlock:
 FUNC_2(&VAR_2->disconnect_lock);
done:
 return VAR_3;
}
