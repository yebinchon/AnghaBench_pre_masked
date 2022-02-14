
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int speed; } ;
struct s3c_hsotg {scalar_t__ regs; int dev; TYPE_1__ gadget; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct s3c_hsotg*) ;
 int FUNC_4 (struct s3c_hsotg*,int,int) ;

__attribute__((used)) static void FUNC_5(struct s3c_hsotg *VAR_9)
{
 u32 VAR_10 = FUNC_2(VAR_9->regs + VAR_3);
 int VAR_11 = 0, VAR_12;





 FUNC_0(VAR_9->dev, "EnumDone (DSTS=0x%08x)\n", VAR_10);






 switch (VAR_10 & VAR_4) {
 case 131:
 case 130:
  VAR_9->gadget.speed = VAR_6;
  FUNC_1(VAR_9->dev, "new device is full-speed\n");

  VAR_11 = VAR_0;
  VAR_12 = 64;
  break;

 case 129:
  FUNC_1(VAR_9->dev, "new device is high-speed\n");
  VAR_9->gadget.speed = VAR_7;

  VAR_11 = VAR_0;
  VAR_12 = 512;
  break;

 case 128:
  VAR_9->gadget.speed = VAR_8;
  FUNC_1(VAR_9->dev, "new device is low-speed\n");





  break;
 }




 if (VAR_11) {
  int VAR_13;
  FUNC_4(VAR_9, 0, VAR_11);
  for (VAR_13 = 1; VAR_13 < VAR_5; VAR_13++)
   FUNC_4(VAR_9, VAR_13, VAR_12);
 }



 FUNC_3(VAR_9);

 FUNC_0(VAR_9->dev, "EP0: DIEPCTL0=0x%08x, DOEPCTL0=0x%08x\n",
  FUNC_2(VAR_9->regs + VAR_1),
  FUNC_2(VAR_9->regs + VAR_2));
}
