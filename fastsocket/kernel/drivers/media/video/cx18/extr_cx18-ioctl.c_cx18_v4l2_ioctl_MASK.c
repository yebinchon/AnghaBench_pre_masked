
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int debug; } ;
struct file {struct cx18_open_id* private_data; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int serialize_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct video_device* FUNC_2 (struct file*) ;
 long FUNC_3 (struct file*,unsigned int,unsigned long) ;

long FUNC_4(struct file *VAR_4, unsigned int VAR_5,
      unsigned long VAR_6)
{
 struct video_device *VAR_7 = FUNC_2(VAR_4);
 struct cx18_open_id *VAR_8 = VAR_4->private_data;
 struct cx18 *VAR_9 = VAR_8->cx;
 long VAR_10;

 FUNC_0(&VAR_9->serialize_lock);



 if (VAR_3 & VAR_0)
  VAR_7->debug = VAR_1 | VAR_2;
 VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6);
 VAR_7->debug = 0;
 FUNC_1(&VAR_9->serialize_lock);
 return VAR_10;
}
