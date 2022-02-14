
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int minor; int usb_dev; int dev; } ;
struct usb_class_driver {int minor_base; char* name; int * fops; } ;
typedef int name ;
struct TYPE_2__ {int class; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int *,int ,struct usb_class_driver*,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 (char*,int,char*,int) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (int *) ;
 TYPE_1__* VAR_4 ;
 int ** VAR_5 ;

int FUNC_10(struct usb_interface *VAR_6,
       struct usb_class_driver *VAR_7)
{
 int VAR_8 = -VAR_0;
 int VAR_9 = VAR_7->minor_base;
 int VAR_10 = 0;
 char VAR_11[20];
 char *VAR_12;
 VAR_6->minor = -1;

 FUNC_3 ("looking for a minor, starting at %d", VAR_9);

 if (VAR_7->fops == ((void*)0))
  goto exit;

 FUNC_5(&VAR_3);
 for (VAR_10 = VAR_9; VAR_10 < VAR_1; ++VAR_10) {
  if (VAR_5[VAR_10])
   continue;

  VAR_5[VAR_10] = VAR_7->fops;

  VAR_8 = 0;
  break;
 }
 FUNC_9(&VAR_3);

 if (VAR_8)
  goto exit;

 VAR_8 = FUNC_6();
 if (VAR_8)
  goto exit;

 VAR_6->minor = VAR_10;


 FUNC_7(VAR_11, sizeof(VAR_11), VAR_7->name, VAR_10 - VAR_9);
 VAR_12 = FUNC_8(VAR_11, '/');
 if (VAR_12 && (VAR_12[1] != '\0'))
  ++VAR_12;
 else
  VAR_12 = VAR_11;
 VAR_6->usb_dev = FUNC_4(VAR_4->class, &VAR_6->dev,
          FUNC_1(VAR_2, VAR_10), VAR_7,
          "%s", VAR_12);
 if (FUNC_0(VAR_6->usb_dev)) {
  FUNC_5(&VAR_3);
  VAR_5[VAR_6->minor] = ((void*)0);
  FUNC_9(&VAR_3);
  VAR_8 = FUNC_2(VAR_6->usb_dev);
 }
exit:
 return VAR_8;
}
