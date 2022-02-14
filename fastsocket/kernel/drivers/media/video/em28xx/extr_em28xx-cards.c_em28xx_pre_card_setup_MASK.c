
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xclk; int i2c_speed; int tuner_gpio; } ;
struct em28xx {int model; int i2s_speed; TYPE_1__ board; } ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct em28xx*,int ) ;
 int FUNC_1 (struct em28xx*,int ) ;
 int FUNC_2 (struct em28xx*,int,int) ;
 int FUNC_3 (struct em28xx*,int,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

void FUNC_6(struct em28xx *VAR_6)
{


 FUNC_2(VAR_6, VAR_4, VAR_6->board.xclk & 0x7f);
 FUNC_2(VAR_6, VAR_2, VAR_6->board.i2c_speed);
 FUNC_5(50);


 switch (VAR_6->model) {
 case 133:

  VAR_6->i2s_speed = 2048000;
  break;
 case 134:
 case 129:
  FUNC_2(VAR_6, VAR_3, 0x6d);
  FUNC_5(10);
  FUNC_2(VAR_6, VAR_3, 0x7d);
  FUNC_5(10);
  break;
 case 132:


  FUNC_2(VAR_6, VAR_0, 0x00);
  FUNC_5(10);
  FUNC_2(VAR_6, VAR_0, 0x01);
  FUNC_5(10);
  FUNC_2(VAR_6, VAR_3, 0xfd);
  FUNC_4(70);
  FUNC_2(VAR_6, VAR_3, 0xfc);
  FUNC_4(70);
  FUNC_2(VAR_6, VAR_3, 0xdc);
  FUNC_4(70);
  FUNC_2(VAR_6, VAR_3, 0xfc);
  FUNC_4(70);
  break;
 case 130:


  FUNC_2(VAR_6, VAR_3, 0xfe);
  FUNC_4(70);
  FUNC_2(VAR_6, VAR_3, 0xde);
  FUNC_4(70);
  FUNC_2(VAR_6, VAR_3, 0xfe);
  FUNC_4(70);
  break;
 case 131:


  FUNC_2(VAR_6, VAR_3, 0xfe);
  FUNC_4(70);
  FUNC_2(VAR_6, VAR_3, 0xde);
  FUNC_4(70);
  FUNC_2(VAR_6, VAR_3, 0xfe);
  FUNC_4(70);
  break;
 case 139:
 case 137:

  FUNC_2(VAR_6, VAR_3, 0xfd);
  break;

 case 128:
  FUNC_2(VAR_6, VAR_3, 0xff);
  FUNC_5(10);
  FUNC_2(VAR_6, VAR_3, 0xfe);
  FUNC_5(10);
  FUNC_2(VAR_6, VAR_0, 0x00);
  FUNC_5(10);
  FUNC_2(VAR_6, VAR_0, 0x08);
  FUNC_5(10);
  break;

 case 135:
  FUNC_3(VAR_6, VAR_4, "\x07", 1);
  FUNC_3(VAR_6, VAR_2, "\x40", 1);
  FUNC_3(VAR_6, 0x0d, "\x42", 1);
  FUNC_3(VAR_6, 0x08, "\xfd", 1);
  FUNC_5(10);
  FUNC_3(VAR_6, 0x08, "\xff", 1);
  FUNC_5(10);
  FUNC_3(VAR_6, 0x08, "\x7f", 1);
  FUNC_5(10);
  FUNC_3(VAR_6, 0x08, "\x6b", 1);

  break;
 case 136:
  FUNC_3(VAR_6, 0x08, "\xf8", 1);
  break;

 case 138:
  FUNC_2(VAR_6, VAR_3, 0xff);
  FUNC_5(70);
  FUNC_2(VAR_6, VAR_3, 0xf7);
  FUNC_5(10);
  FUNC_2(VAR_6, VAR_3, 0xfe);
  FUNC_5(70);
  FUNC_2(VAR_6, VAR_3, 0xfd);
  FUNC_5(70);
  break;
 }

 FUNC_0(VAR_6, VAR_6->board.tuner_gpio);
 FUNC_1(VAR_6, VAR_1);


 FUNC_1(VAR_6, VAR_5);
}
