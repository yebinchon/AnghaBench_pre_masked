
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct TYPE_2__ {unsigned int video_input; } ;
struct hdpvr_device {TYPE_1__ options; } ;
struct file {struct hdpvr_fh* private_data; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1,
     unsigned int *VAR_2)
{
 struct hdpvr_fh *VAR_3 = VAR_0->private_data;
 struct hdpvr_device *VAR_4 = VAR_3->dev;

 *VAR_2 = VAR_4->options.video_input;
 return 0;
}
