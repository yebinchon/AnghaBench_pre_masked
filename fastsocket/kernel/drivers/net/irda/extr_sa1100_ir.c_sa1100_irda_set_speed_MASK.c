
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sa1100_irda {int speed; int hscr0; int dev; TYPE_1__* pdata; int rxdma; } ;
struct TYPE_2__ {int (* set_speed ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sa1100_irda*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct sa1100_irda*) ;
 int FUNC_4 (struct sa1100_irda*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct sa1100_irda *VAR_15, int VAR_16)
{
 unsigned long VAR_17;
 int VAR_18, VAR_19 = -VAR_0;

 switch (VAR_16) {
 case 9600: case 19200: case 38400:
 case 57600: case 115200:
  VAR_18 = 3686400 / (16 * VAR_16) - 1;




  if (FUNC_0(VAR_15))
   FUNC_5(VAR_15->rxdma);

  FUNC_2(VAR_17);

  VAR_7 = 0;
  VAR_3 = VAR_2;

  VAR_5 = VAR_18 >> 8;
  VAR_6 = VAR_18;




  VAR_8 = VAR_13 | VAR_12 | VAR_14;
  VAR_7 = VAR_9 | VAR_10 | VAR_11;

  if (VAR_15->pdata->set_speed)
   VAR_15->pdata->set_speed(VAR_15->dev, VAR_16);

  VAR_15->speed = VAR_16;

  FUNC_1(VAR_17);
  VAR_19 = 0;
  break;

 case 4000000:
  FUNC_2(VAR_17);

  VAR_15->hscr0 = 0;

  VAR_4 = 0xff;
  VAR_3 = VAR_15->hscr0 | VAR_1;
  VAR_7 = 0;

  VAR_15->speed = VAR_16;

  if (VAR_15->pdata->set_speed)
   VAR_15->pdata->set_speed(VAR_15->dev, VAR_16);

  FUNC_3(VAR_15);
  FUNC_4(VAR_15);

  FUNC_1(VAR_17);

  break;

 default:
  break;
 }

 return VAR_19;
}
