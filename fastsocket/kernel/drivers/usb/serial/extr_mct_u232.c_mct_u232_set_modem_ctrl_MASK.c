
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,unsigned int,unsigned char) ;
 int FUNC_1 (int *,char*,unsigned char,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,unsigned char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_serial *VAR_9,
       unsigned int VAR_10)
{
 int VAR_11;
 unsigned char VAR_12 = VAR_1;

 if (VAR_10 & VAR_6)
  VAR_12 |= VAR_0;
 if (VAR_10 & VAR_7)
  VAR_12 |= VAR_2;

 VAR_11 = FUNC_2(VAR_9->dev, FUNC_3(VAR_9->dev, 0),
   VAR_3,
   VAR_5,
   0, 0, &VAR_12, VAR_4,
   VAR_8);
 if (VAR_11 < 0)
  FUNC_1(&VAR_9->dev->dev,
   "Set MODEM CTRL 0x%x failed (error = %d)\n", VAR_12, VAR_11);
 FUNC_0("set_modem_ctrl: state=0x%x ==> mcr=0x%x", VAR_10, VAR_12);

 return VAR_11;
}
