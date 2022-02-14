
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9966_dev {scalar_t__ dev_state; int brightness; int contrast; int color; struct parport* pport; int vdev; int * pdev; void* ppmode; scalar_t__ hue; } ;
struct video_device {int dummy; } ;
struct parport {int modes; int name; } ;


 int FUNC_0 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_7 ;
 int * FUNC_2 (struct parport*,char*,int *,int *,int *,int ,int *) ;
 int FUNC_3 (char*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,struct w9966_dev*) ;
 int FUNC_6 (struct w9966_dev*) ;
 int FUNC_7 (struct w9966_dev*) ;
 int FUNC_8 (struct w9966_dev*,int ,int ) ;
 scalar_t__ FUNC_9 (struct w9966_dev*,int ,int ,int,int,int,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct w9966_dev* VAR_10, struct parport* VAR_11)
{
 if (VAR_10->dev_state != 0)
  return -1;

 VAR_10->pport = VAR_11;
 VAR_10->brightness = 128;
 VAR_10->contrast = 64;
 VAR_10->color = 64;
 VAR_10->hue = 0;


 switch(VAR_7)
 {
 default:
 case 0:
  if (VAR_11->modes & VAR_2)
   VAR_10->ppmode = VAR_0;
  else if (VAR_11->modes & VAR_3)
   VAR_10->ppmode = VAR_1;
  else
   VAR_10->ppmode = VAR_0;
  break;
 case 1:
  VAR_10->ppmode = VAR_0;
  break;
 case 2:
  VAR_10->ppmode = VAR_1;
 break;
 }


 VAR_10->pdev = FUNC_2(VAR_11, "w9966", ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
 if (VAR_10->pdev == ((void*)0)) {
  FUNC_0("parport_register_device() failed\n");
  return -1;
 }
 FUNC_8(VAR_10, VAR_5, VAR_5);

 FUNC_6(VAR_10);


 if (FUNC_9(VAR_10, 0, 0, 1023, 1023, 200, 160) != 0) {
  FUNC_0("w9966_setup() failed.\n");
  return -1;
 }

 FUNC_7(VAR_10);


 FUNC_1(&VAR_10->vdev, &VAR_9, sizeof(struct video_device));
 FUNC_5(&VAR_10->vdev, VAR_10);

 if (FUNC_4(&VAR_10->vdev, VAR_4, VAR_8) < 0)
  return -1;

 FUNC_8(VAR_10, VAR_6, VAR_6);


 FUNC_3(
  "w9966cf: Found and initialized a webcam on %s.\n",
  VAR_10->pport->name
 );
 return 0;
}
