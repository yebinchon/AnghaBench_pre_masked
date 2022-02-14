
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct pwc_device {int vframe_count; int modlock; struct video_device* vopen; int unplugged; int type; int vframes_error; int vframes_dumped; } ;
struct file {struct video_device* private_data; } ;
struct TYPE_2__ {struct pwc_device* pdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,struct video_device*) ;
 int FUNC_3 (char*,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct pwc_device*,int ) ;
 int FUNC_7 (struct pwc_device*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct pwc_device*) ;
 int FUNC_11 (struct pwc_device*) ;
 scalar_t__ FUNC_12 (struct pwc_device*,int ,int ) ;
 struct pwc_device* FUNC_13 (struct video_device*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_3)
{
 struct video_device *VAR_4 = VAR_3->private_data;
 struct pwc_device *VAR_5;
 int VAR_6, VAR_7;

 FUNC_2(">> video_close called(vdev = 0x%p).\n", VAR_4);

 VAR_5 = FUNC_13(VAR_4);
 FUNC_4(&VAR_5->modlock);
 if (VAR_5->vopen == 0)
  FUNC_1("video_close() called on closed device?\n");





 if (VAR_5->vframe_count > 20)
  FUNC_1("Closing video device: %d frames received, dumped %d frames, %d frames with errors.\n", VAR_5->vframe_count, VAR_5->vframes_dumped, VAR_5->vframes_error);

 if (FUNC_0(VAR_5->type))
     FUNC_8();
 else
     FUNC_9();

 FUNC_11(VAR_5);
 FUNC_10(VAR_5);


 if (!VAR_5->unplugged) {

  if (FUNC_12(VAR_5, 0, 0) < 0)
   FUNC_1("Failed to set LED on/off time.\n");
  if (VAR_2) {
   VAR_6 = FUNC_6(VAR_5, 0);
   if (VAR_6 < 0)
    FUNC_3("Failed to power down camera (%d)\n", VAR_6);
  }
  VAR_5->vopen--;
  FUNC_2("<< video_close() vopen=%d\n", VAR_5->vopen);
 } else {
  FUNC_7(VAR_5);

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   if (VAR_1[VAR_7].pdev == VAR_5)
    VAR_1[VAR_7].pdev = ((void*)0);
 }
 FUNC_5(&VAR_5->modlock);

 return 0;
}
