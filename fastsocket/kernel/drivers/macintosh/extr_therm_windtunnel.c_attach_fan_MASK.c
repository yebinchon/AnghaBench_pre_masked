
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int addr; } ;
struct TYPE_2__ {struct i2c_client* fan; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_2( struct i2c_client *VAR_1 )
{
 if( VAR_0.fan )
  goto out;


 if( FUNC_1(VAR_1, 0x3d, 1) != 0x30 || FUNC_1(VAR_1, 0x3e, 1) != 0x41 )
  goto out;
 FUNC_0("ADM1030 fan controller [@%02x]\n", VAR_1->addr );

 VAR_0.fan = VAR_1;
 out:
 return 0;
}
