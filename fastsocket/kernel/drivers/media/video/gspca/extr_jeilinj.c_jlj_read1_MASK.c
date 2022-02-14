
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {unsigned char* usb_buf; int dev; } ;


 int FUNC_0 (char*,unsigned char,int) ;
 int FUNC_1 (int ,int ,unsigned char*,int,int *,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0, unsigned char VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->dev,
 FUNC_2(VAR_0->dev, 0x84),
    VAR_0->usb_buf, 1, ((void*)0), 500);
 VAR_1 = VAR_0->usb_buf[0];
 if (VAR_2 < 0)
  FUNC_0("read command [%02x] error %d",
    VAR_0->usb_buf[0], VAR_2);
 return VAR_2;
}
