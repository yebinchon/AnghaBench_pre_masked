
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_audio {size_t index; char* name; int capability; } ;
struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct TYPE_2__ {size_t audio_input; } ;
struct hdpvr_device {TYPE_1__ options; } ;
struct file {struct hdpvr_fh* private_data; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_audio *VAR_4)
{
 struct hdpvr_fh *VAR_5 = VAR_2->private_data;
 struct hdpvr_device *VAR_6 = VAR_5->dev;

 VAR_4->index = VAR_6->options.audio_input;
 VAR_4->capability = VAR_0;
 FUNC_0(VAR_4->name, VAR_1[VAR_4->index], sizeof(VAR_4->name));
 VAR_4->name[sizeof(VAR_4->name) - 1] = '\0';
 return 0;
}
