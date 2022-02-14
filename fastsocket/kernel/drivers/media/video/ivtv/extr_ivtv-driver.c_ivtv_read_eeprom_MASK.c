
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tveeprom {int dummy; } ;
struct TYPE_3__ {int addr; } ;
struct ivtv {TYPE_1__ i2c_client; } ;
typedef int eedata ;


 int FUNC_0 (TYPE_1__*,struct tveeprom*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

void FUNC_2(struct ivtv *VAR_0, struct tveeprom *VAR_1)
{
 u8 VAR_2[256];

 VAR_0->i2c_client.addr = 0xA0 >> 1;
 FUNC_1(&VAR_0->i2c_client, VAR_2, sizeof(VAR_2));
 FUNC_0(&VAR_0->i2c_client, VAR_1, VAR_2);
}
