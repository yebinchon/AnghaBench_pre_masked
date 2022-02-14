
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int * usb_buf; int dev; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int ,int ,int *,int,int *,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_0, unsigned char *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0->usb_buf, VAR_1, 2);
 VAR_2 = FUNC_2(VAR_0->dev,
   FUNC_3(VAR_0->dev, 3),
   VAR_0->usb_buf, 2, ((void*)0), 500);
 if (VAR_2 < 0)
  FUNC_0("command write [%02x] error %d",
    VAR_0->usb_buf[0], VAR_2);
 return VAR_2;
}
