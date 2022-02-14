
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (int *,char*,unsigned char,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,unsigned char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_serial *VAR_4, unsigned char VAR_5)
{
 int VAR_6;
 VAR_6 = FUNC_2(VAR_4->dev, FUNC_3(VAR_4->dev, 0),
   VAR_0,
   VAR_2,
   0, 0, &VAR_5, VAR_1,
   VAR_3);
 if (VAR_6 < 0)
  FUNC_1(&VAR_4->dev->dev,
   "Set LINE CTRL 0x%x failed (error = %d)\n", VAR_5, VAR_6);
 FUNC_0("set_line_ctrl: 0x%x", VAR_5);
 return VAR_6;
}
