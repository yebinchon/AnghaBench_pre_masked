
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pmac_i2c_bus {int (* xfer ) (struct pmac_i2c_bus*,int ,int,int ,int *,int) ;TYPE_1__* busnode; int mode; int channel; int opened; } ;
struct TYPE_2__ {int full_name; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pmac_i2c_bus*,int ,int,int ,int *,int) ;

int FUNC_3(struct pmac_i2c_bus *VAR_0, u8 VAR_1, int VAR_2,
    u32 VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_1(!VAR_0->opened);

 FUNC_0("xfer() chan=%d, addrdir=0x%x, mode=%d, subsize=%d, subaddr=0x%x,"
     " %d bytes, bus %s\n", VAR_0->channel, VAR_1, VAR_0->mode, VAR_2,
     VAR_3, VAR_5, VAR_0->busnode->full_name);

 VAR_6 = VAR_0->xfer(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);





 return VAR_6;
}
