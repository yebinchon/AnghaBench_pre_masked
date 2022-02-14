
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {int dummy; } ;
struct file {int dummy; } ;
struct cx88_core {int dummy; } ;
struct TYPE_2__ {int field; } ;
struct cx8802_fh {TYPE_1__ mpegq; struct cx8802_dev* dev; } ;
struct cx8802_dev {int height; int width; struct cx88_core* core; scalar_t__ mpeg_active; } ;


 int FUNC_0 (struct cx8802_dev*) ;
 int FUNC_1 (struct cx8802_dev*) ;
 int FUNC_2 (struct cx88_core*,struct v4l2_frequency*) ;
 int FUNC_3 (struct cx88_core*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4 (struct file *VAR_0, void *VAR_1,
    struct v4l2_frequency *VAR_2)
{
 struct cx8802_fh *VAR_3 = VAR_1;
 struct cx8802_dev *VAR_4 = VAR_3->dev;
 struct cx88_core *VAR_5 = VAR_4->core;

 if (VAR_4->mpeg_active)
  FUNC_1(VAR_4);

 FUNC_2 (VAR_5,VAR_2);
 FUNC_0(VAR_4);
 FUNC_3(VAR_4->core, VAR_4->width, VAR_4->height,
   VAR_3->mpegq.field);
 return 0;
}
