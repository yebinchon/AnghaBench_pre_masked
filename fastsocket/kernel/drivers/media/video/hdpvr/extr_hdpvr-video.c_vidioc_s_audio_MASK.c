
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_audio {scalar_t__ index; } ;
struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct TYPE_2__ {scalar_t__ audio_input; int audio_codec; } ;
struct hdpvr_device {scalar_t__ status; TYPE_1__ options; } ;
struct file {struct hdpvr_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hdpvr_device*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
     struct v4l2_audio *VAR_6)
{
 struct hdpvr_fh *VAR_7 = VAR_4->private_data;
 struct hdpvr_device *VAR_8 = VAR_7->dev;
 int VAR_9;

 if (VAR_6->index >= VAR_2)
  return -VAR_1;

 if (VAR_8->status != VAR_3)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_8, VAR_6->index+1, VAR_8->options.audio_codec);
 if (!VAR_9)
  VAR_8->options.audio_input = VAR_6->index;

 return VAR_9;
}
