
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u8 ;
struct flexcop_device {int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_3__) ;TYPE_3__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;} ;
struct TYPE_8__ {void* MAC8; void* MAC7; } ;
struct TYPE_7__ {void* MAC6; void* MAC3; void* MAC2; void* MAC1; } ;
struct TYPE_9__ {TYPE_2__ mac_address_41c; TYPE_1__ mac_address_418; } ;
typedef TYPE_3__ flexcop_ibi_value ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ FUNC_0 (struct flexcop_device*,int ) ;
 int FUNC_1 (struct flexcop_device*,int ,TYPE_3__) ;
 int FUNC_2 (struct flexcop_device*,int ,TYPE_3__) ;

void FUNC_3(struct flexcop_device *VAR_2, u8 VAR_3[6])
{
 flexcop_ibi_value VAR_4, VAR_5;
 VAR_5 = VAR_2->read_ibi_reg(VAR_2, VAR_1);

 VAR_4 = VAR_3[0];
 VAR_4 = VAR_3[1];
 VAR_4 = VAR_3[2];
 VAR_4 = VAR_3[3];
 VAR_5.mac_address_41c.MAC7 = VAR_3[4];
 VAR_5.mac_address_41c.MAC8 = VAR_3[5];

 VAR_2->write_ibi_reg(VAR_2, VAR_0, VAR_4);
 VAR_2->write_ibi_reg(VAR_2, VAR_1, VAR_5);
}
