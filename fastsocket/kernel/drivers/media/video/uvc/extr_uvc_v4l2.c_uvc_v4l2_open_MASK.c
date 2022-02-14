
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {int chain; TYPE_1__* dev; } ;
struct uvc_fh {int state; struct uvc_streaming* stream; int chain; } ;
struct file {struct uvc_fh* private_data; } ;
struct TYPE_2__ {int state; int users; int intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uvc_fh*) ;
 struct uvc_fh* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*) ;
 struct uvc_streaming* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_6)
{
 struct uvc_streaming *VAR_7;
 struct uvc_fh *VAR_8;
 int VAR_9 = 0;

 FUNC_7(VAR_5, "uvc_v4l2_open\n");
 VAR_7 = FUNC_8(VAR_6);

 if (VAR_7->dev->state & VAR_3)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_7->dev->intf);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_8 = FUNC_3(sizeof *VAR_8, VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_5(VAR_7->dev->intf);
  return -VAR_1;
 }

 if (FUNC_1(&VAR_7->dev->users) == 1) {
  VAR_9 = FUNC_6(VAR_7->dev);
  if (VAR_9 < 0) {
   FUNC_5(VAR_7->dev->intf);
   FUNC_0(&VAR_7->dev->users);
   FUNC_2(VAR_8);
   return VAR_9;
  }
 }

 VAR_8->chain = VAR_7->chain;
 VAR_8->stream = VAR_7;
 VAR_8->state = VAR_4;
 VAR_6->private_data = VAR_8;

 return 0;
}
