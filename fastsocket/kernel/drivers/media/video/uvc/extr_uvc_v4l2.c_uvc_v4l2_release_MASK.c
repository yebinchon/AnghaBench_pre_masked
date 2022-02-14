
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {TYPE_1__* dev; int queue; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {struct uvc_fh* private_data; } ;
struct TYPE_2__ {int intf; int users; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct uvc_fh*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uvc_fh*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct uvc_fh*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct uvc_streaming*,int ) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_2)
{
 struct uvc_fh *VAR_3 = VAR_2->private_data;
 struct uvc_streaming *VAR_4 = VAR_3->stream;

 FUNC_8(VAR_1, "uvc_v4l2_release\n");


 if (FUNC_5(VAR_3)) {
  FUNC_9(VAR_4, 0);

  if (FUNC_4(&VAR_4->queue) < 0)
   FUNC_6(VAR_0, "uvc_v4l2_release: Unable to "
     "free buffers.\n");
 }


 FUNC_3(VAR_3);
 FUNC_1(VAR_3);
 VAR_2->private_data = ((void*)0);

 if (FUNC_0(&VAR_4->dev->users) == 0)
  FUNC_7(VAR_4->dev);

 FUNC_2(VAR_4->dev->intf);
 return 0;
}
