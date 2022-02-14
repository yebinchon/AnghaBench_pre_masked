
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {int vidq; struct cx231xx* dev; } ;
struct TYPE_4__ {int max_pkt_size; } ;
struct TYPE_3__ {int max_pkt_size; } ;
struct cx231xx {TYPE_2__ ts1_mode; TYPE_1__ video_mode; scalar_t__ USE_ISO; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cx231xx*,int,int,int ,int ) ;
 int FUNC_1 (struct cx231xx*,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct cx231xx*,int ,int ) ;
 int FUNC_3 (struct cx231xx*,int ) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_6, void *VAR_7,
    enum v4l2_buf_type VAR_8)
{
 struct cx231xx_fh *VAR_9 = VAR_6->private_data;

 struct cx231xx *VAR_10 = VAR_9->dev;
 int VAR_11 = 0;
 FUNC_4(3, "enter vidioc_streamon()\n");
  FUNC_2(VAR_10, VAR_3, 0);
  VAR_11 = FUNC_3(VAR_10, VAR_0);
  if (VAR_10->USE_ISO)
   VAR_11 = FUNC_1(VAR_10, VAR_2,
           VAR_1,
           VAR_10->video_mode.max_pkt_size,
           VAR_5);
  else {
   VAR_11 = FUNC_0(VAR_10, 320,
           5,
           VAR_10->ts1_mode.max_pkt_size,
           VAR_4);
  }
 FUNC_4(3, "exit vidioc_streamon()\n");
 return FUNC_5(&VAR_9->vidq);
}
