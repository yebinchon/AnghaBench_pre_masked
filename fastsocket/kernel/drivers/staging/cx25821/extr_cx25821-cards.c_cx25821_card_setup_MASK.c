
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cx25821_dev {TYPE_1__* i2c_bus; } ;
typedef int eeprom ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {scalar_t__ i2c_rc; TYPE_2__ i2c_client; } ;


 int FUNC_0 (TYPE_2__*,int *,int) ;

void FUNC_1(struct cx25821_dev *VAR_0)
{
 static u8 VAR_1[256];

 if (VAR_0->i2c_bus[0].i2c_rc == 0) {
  VAR_0->i2c_bus[0].i2c_client.addr = 0xa0 >> 1;
  FUNC_0(&VAR_0->i2c_bus[0].i2c_client, VAR_1,
         sizeof(VAR_1));
 }
}
