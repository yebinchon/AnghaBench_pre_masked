
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_skel {int ongoing_read; size_t bulk_in_copied; int processed_urb; int errors; size_t bulk_in_filled; size_t bulk_in_buffer; int io_mutex; int bulk_in_completion; int err_lock; int interface; int bulk_in_urb; } ;
struct file {int f_flags; scalar_t__ private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*,size_t,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_skel*,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static ssize_t FUNC_9(struct file *VAR_6, char *VAR_7, size_t VAR_8,
    loff_t *VAR_9)
{
 struct usb_skel *VAR_10;
 int VAR_11;
 bool VAR_12;

 VAR_10 = (struct usb_skel *)VAR_6->private_data;


 if (!VAR_10->bulk_in_urb || !VAR_8)
  return 0;


 VAR_11 = FUNC_2(&VAR_10->io_mutex);
 if (VAR_11 < 0)
  return VAR_11;

 if (!VAR_10->interface) {
  VAR_11 = -VAR_3;
  goto exit;
 }


retry:
 FUNC_5(&VAR_10->err_lock);
 VAR_12 = VAR_10->ongoing_read;
 FUNC_6(&VAR_10->err_lock);

 if (VAR_12) {

  if (VAR_6->f_flags & VAR_5) {
   VAR_11 = -VAR_0;
   goto exit;
  }




  VAR_11 = FUNC_8(&VAR_10->bulk_in_completion);
  if (VAR_11 < 0)
   goto exit;




  VAR_10->bulk_in_copied = 0;
  VAR_10->processed_urb = 1;
 }

 if (!VAR_10->processed_urb) {




  FUNC_7(&VAR_10->bulk_in_completion);
  VAR_10->bulk_in_copied = 0;
  VAR_10->processed_urb = 1;
 }


 VAR_11 = VAR_10->errors;
 if (VAR_11 < 0) {

  VAR_10->errors = 0;

  VAR_11 = (VAR_11 == -VAR_4) ? VAR_11 : -VAR_2;

  VAR_10->bulk_in_filled = 0;

  goto exit;
 }






 if (VAR_10->bulk_in_filled) {

  size_t VAR_13 = VAR_10->bulk_in_filled - VAR_10->bulk_in_copied;
  size_t VAR_14 = FUNC_1(VAR_13, VAR_8);

  if (!VAR_13) {




   VAR_11 = FUNC_4(VAR_10, VAR_8);
   if (VAR_11 < 0)
    goto exit;
   else
    goto retry;
  }





  if (FUNC_0(VAR_7,
     VAR_10->bulk_in_buffer + VAR_10->bulk_in_copied,
     VAR_14))
   VAR_11 = -VAR_1;
  else
   VAR_11 = VAR_14;

  VAR_10->bulk_in_copied += VAR_14;





  if (VAR_13 < VAR_8)
   FUNC_4(VAR_10, VAR_8 - VAR_14);
 } else {

  VAR_11 = FUNC_4(VAR_10, VAR_8);
  if (VAR_11 < 0)
   goto exit;
  else if (!(VAR_6->f_flags & VAR_5))
   goto retry;
  VAR_11 = -VAR_0;
 }
exit:
 FUNC_3(&VAR_10->io_mutex);
 return VAR_11;
}
