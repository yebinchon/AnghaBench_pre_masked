
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cypress {unsigned char* port; TYPE_1__* udev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;

 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,unsigned char) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,unsigned int,unsigned char,int,unsigned char,unsigned char,unsigned char*,int ,int ) ;
 unsigned int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(struct cypress *VAR_9, unsigned char VAR_10,
     unsigned char VAR_11, unsigned char VAR_12)
{
 int VAR_13 = 0;
 unsigned int VAR_14;
 unsigned char *VAR_15;


 VAR_15 = FUNC_3(VAR_0, VAR_4);
 if (!VAR_15) {
  FUNC_1(&VAR_9->udev->dev, "Out of memory!\n");
  VAR_13 = -VAR_3;
  goto error;
 }

 FUNC_0(&VAR_9->udev->dev, "Sending usb_control_msg (data: %d)\n", VAR_12);


 VAR_14 = FUNC_5(VAR_9->udev, 0);
 VAR_13 = FUNC_4(VAR_9->udev, VAR_14, VAR_10,
     VAR_6 | VAR_8 | VAR_7,
     VAR_11, VAR_12, VAR_15, VAR_0,
     VAR_5);


 switch (VAR_10) {
  case 128:
   if (VAR_11 == VAR_1) {
    VAR_9->port[0] = VAR_15[1];
    FUNC_0(&VAR_9->udev->dev,
     "READ_PORT0 returned: %d\n",
     VAR_9->port[0]);
   }
   else if (VAR_11 == VAR_2) {
    VAR_9->port[1] = VAR_15[1];
    FUNC_0(&VAR_9->udev->dev,
     "READ_PORT1 returned: %d\n",
     VAR_9->port[1]);
   }
   break;
 }

 FUNC_2(VAR_15);
error:
 return VAR_13;
}
