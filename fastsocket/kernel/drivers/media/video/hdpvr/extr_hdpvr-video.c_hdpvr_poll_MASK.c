
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct hdpvr_device {scalar_t__ status; int wait_data; int io_mutex; int v4l2_dev; int video_dev; } ;
struct hdpvr_buffer {scalar_t__ status; } ;
struct file {struct hdpvr_fh* private_data; } ;
typedef int poll_table ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct hdpvr_buffer* FUNC_0 (struct hdpvr_device*) ;
 scalar_t__ FUNC_1 (struct hdpvr_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*,int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int *,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static unsigned int FUNC_8(struct file *VAR_7, poll_table *VAR_8)
{
 struct hdpvr_buffer *VAR_9 = ((void*)0);
 struct hdpvr_fh *VAR_10 = VAR_7->private_data;
 struct hdpvr_device *VAR_11 = VAR_10->dev;
 unsigned int VAR_12 = 0;

 FUNC_2(&VAR_11->io_mutex);

 if (!FUNC_7(VAR_11->video_dev)) {
  FUNC_3(&VAR_11->io_mutex);
  return -VAR_1;
 }

 if (VAR_11->status == VAR_5) {
  if (FUNC_1(VAR_11)) {
   FUNC_6(VAR_2, VAR_6, &VAR_11->v4l2_dev,
     "start_streaming failed\n");
   VAR_11->status = VAR_5;
  }

  FUNC_5();
 }
 FUNC_3(&VAR_11->io_mutex);

 VAR_9 = FUNC_0(VAR_11);

 if (!VAR_9 || VAR_9->status != VAR_0) {
  FUNC_4(VAR_7, &VAR_11->wait_data, VAR_8);
  VAR_9 = FUNC_0(VAR_11);
 }
 if (VAR_9 && VAR_9->status == VAR_0)
  VAR_12 |= VAR_3 | VAR_4;

 return VAR_12;
}
