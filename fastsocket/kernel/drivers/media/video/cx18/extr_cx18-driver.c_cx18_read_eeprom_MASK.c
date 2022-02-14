
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tveeprom {int addr; int model; int * adapter; int name; } ;
struct i2c_client {int addr; int model; int * adapter; int name; } ;
struct cx18 {TYPE_1__* card; int * i2c_adap; } ;
typedef int eedata ;
typedef int c ;
struct TYPE_2__ {int type; } ;







 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct cx18*,int *,int) ;
 int FUNC_2 (struct tveeprom*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct tveeprom*,struct tveeprom*,int *) ;
 scalar_t__ FUNC_5 (struct tveeprom*,int *,int) ;

void FUNC_6(struct cx18 *VAR_0, struct tveeprom *VAR_1)
{
 struct i2c_client VAR_2;
 u8 VAR_3[256];

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 FUNC_3(VAR_2.name, "cx18 tveeprom tmp", sizeof(VAR_2.name));
 VAR_2.adapter = &VAR_0->i2c_adap[0];
 VAR_2.addr = 0xA0 >> 1;

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 if (FUNC_5(&VAR_2, VAR_3, sizeof(VAR_3)))
  return;

 switch (VAR_0->card->type) {
 case 131:
 case 129:
 case 130:
  FUNC_4(&VAR_2, VAR_1, VAR_3);
  break;
 case 128:
 case 132:
  VAR_1->model = 0x718;
  FUNC_1(VAR_0, VAR_3, sizeof(VAR_3));
  FUNC_0("eeprom PCI ID: %02x%02x:%02x%02x\n",
     VAR_3[2], VAR_3[1], VAR_3[4], VAR_3[3]);
  break;
 default:
  VAR_1->model = 0xffffffff;
  FUNC_1(VAR_0, VAR_3, sizeof(VAR_3));
  break;
 }
}
