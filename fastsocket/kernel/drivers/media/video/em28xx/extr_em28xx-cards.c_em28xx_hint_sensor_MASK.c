
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int xclk; } ;
struct TYPE_6__ {int addr; } ;
struct em28xx {size_t model; int sensor_xres; int sensor_yres; int sensor_xtal; int vinmode; int vinctl; int em28xx_sensor; TYPE_1__ board; TYPE_2__ i2c_client; } ;
typedef int __be16 ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 TYPE_4__* VAR_8 ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (struct em28xx*) ;
 int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (struct em28xx*) ;
 int FUNC_5 (struct em28xx*) ;
 int FUNC_6 (TYPE_2__*,char*,int) ;
 int FUNC_7 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int FUNC_9(struct em28xx *VAR_9)
{
 int VAR_10;
 char *VAR_11;
 unsigned char VAR_12;
 __be16 VAR_13;
 u16 VAR_14;


 VAR_9->i2c_client.addr = 0xba >> 1;
 VAR_12 = 0;
 FUNC_7(&VAR_9->i2c_client, &VAR_12, 1);
 VAR_10 = FUNC_6(&VAR_9->i2c_client, (char *)&VAR_13, 2);
 if (VAR_10 != 2)
  return -VAR_0;

 VAR_14 = FUNC_0(VAR_13);
 switch (VAR_14) {
 case 0x8232:
 case 0x8243:
  VAR_9->model = VAR_2;
  FUNC_5(VAR_9);

  VAR_11 = "mt9v011";
  VAR_9->em28xx_sensor = VAR_5;
  VAR_9->sensor_xres = 640;
  VAR_9->sensor_yres = 480;
  VAR_9->board.xclk = VAR_7;
  VAR_9->sensor_xtal = 4300000;


  VAR_9->vinmode = 0x0d;
  VAR_9->vinctl = 0x00;

  break;

 case 0x143a:
  VAR_9->model = VAR_1;
  FUNC_5(VAR_9);

  VAR_11 = "mt9m111";
  VAR_9->board.xclk = VAR_6;
  VAR_9->em28xx_sensor = VAR_4;
  FUNC_3(VAR_9);
  VAR_9->sensor_xres = 640;
  VAR_9->sensor_yres = 512;

  VAR_9->vinmode = 0x0a;
  VAR_9->vinctl = 0x00;

  break;

 case 0x8431:
  VAR_9->model = VAR_1;
  FUNC_5(VAR_9);

  VAR_11 = "mt9m001";
  VAR_9->em28xx_sensor = VAR_3;
  FUNC_2(VAR_9);
  VAR_9->sensor_xres = 1280;
  VAR_9->sensor_yres = 1024;


  VAR_9->vinmode = 0x0c;
  VAR_9->vinctl = 0x00;

  break;
 default:
  FUNC_8("Unknown Micron Sensor 0x%04x\n", VAR_14);
  return -VAR_0;
 }


 FUNC_4(VAR_9);

 FUNC_1("Sensor is %s, using model %s entry.\n",
        VAR_11, VAR_8[VAR_9->model].name);

 return 0;
}
