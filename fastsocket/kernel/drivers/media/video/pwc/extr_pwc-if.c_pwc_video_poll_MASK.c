
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct pwc_device {int * full_frames; scalar_t__ error_status; int frameq; int modlock; } ;
struct file {struct video_device* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;
 int FUNC_3 (struct pwc_device*) ;
 struct pwc_device* FUNC_4 (struct video_device*) ;

__attribute__((used)) static unsigned int FUNC_5(struct file *VAR_4, poll_table *VAR_5)
{
 struct video_device *VAR_6 = VAR_4->private_data;
 struct pwc_device *VAR_7;
 int VAR_8;

 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7 == ((void*)0))
  return -VAR_0;


 FUNC_0(&VAR_7->modlock);
 VAR_8 = FUNC_3(VAR_7);
 FUNC_1(&VAR_7->modlock);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_4, &VAR_7->frameq, VAR_5);
 if (VAR_7->error_status)
  return VAR_1;
 if (VAR_7->full_frames != ((void*)0))
  return (VAR_2 | VAR_3);

 return 0;
}
