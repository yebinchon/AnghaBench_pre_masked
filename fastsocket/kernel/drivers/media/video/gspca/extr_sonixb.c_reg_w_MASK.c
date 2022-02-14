
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int usb_buf; int dev; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,int ,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_6,
    __u16 VAR_7,
    const __u8 *VAR_8,
    int VAR_9)
{






 FUNC_1(VAR_6->usb_buf, VAR_8, VAR_9);
 FUNC_2(VAR_6->dev,
   FUNC_3(VAR_6->dev, 0),
   0x08,
   VAR_3 | VAR_5 | VAR_4,
   VAR_7,
   0,
   VAR_6->usb_buf, VAR_9,
   500);
}
