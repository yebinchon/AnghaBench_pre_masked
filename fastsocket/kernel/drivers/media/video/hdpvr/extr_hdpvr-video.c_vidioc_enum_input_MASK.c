
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {unsigned int index; char* name; int audioset; int std; int type; } ;
struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct hdpvr_device {TYPE_1__* video_dev; } ;
struct file {struct hdpvr_fh* private_data; } ;
struct TYPE_2__ {int tvnorms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_7, void *VAR_8,
    struct v4l2_input *VAR_9)
{
 struct hdpvr_fh *VAR_10 = VAR_7->private_data;
 struct hdpvr_device *VAR_11 = VAR_10->dev;
 unsigned int VAR_12;

 VAR_12 = VAR_9->index;
 if (VAR_12 >= VAR_4)
  return -VAR_0;

 VAR_9->type = VAR_5;

 FUNC_0(VAR_9->name, VAR_6[VAR_12], sizeof(VAR_9->name) - 1);
 VAR_9->name[sizeof(VAR_9->name) - 1] = '\0';

 VAR_9->audioset = 1<<VAR_2 | 1<<VAR_1 | 1<<VAR_3;

 VAR_9->std = VAR_11->video_dev->tvnorms;

 return 0;
}
