
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (struct usb_device*,int ,int ,int,int,int,unsigned char*,int,int ) ;
 int FUNC_5 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_6, u8 VAR_7, u16 VAR_8,
       u16 VAR_9, unsigned char *VAR_10, u16 VAR_11)
{
 int VAR_12;

 unsigned char *VAR_13 = FUNC_2(VAR_11, VAR_2);
 if (!VAR_13) {
  FUNC_0(&VAR_6->dev, "kmalloc(%d) failed\n", VAR_11);
  return -VAR_1;
 }

 FUNC_3(VAR_13, VAR_10, VAR_11);

 VAR_12 = FUNC_4(VAR_6,
     FUNC_5(VAR_6, 0),
     VAR_7,
     VAR_3 | VAR_5 |
     VAR_4, VAR_8, VAR_9,
     VAR_13, VAR_11, VAR_0);

 FUNC_1(VAR_13);

 if (VAR_12 < 0)
  FUNC_0(&VAR_6->dev,
   "Failed sending control message, error %d.\n", VAR_12);

 return VAR_12;
}
