
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct flexcop_device {int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_2__) ;TYPE_2__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;} ;
struct TYPE_5__ {int ctrl_usb_wan; int ctrl_sramdma; int ctrl_maximumfill; } ;
struct TYPE_6__ {TYPE_1__ sram_dest_reg_714; } ;
typedef TYPE_2__ flexcop_ibi_value ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (struct flexcop_device*,int ) ;
 int FUNC_1 (struct flexcop_device*,int ,TYPE_2__) ;

void FUNC_2(struct flexcop_device *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 flexcop_ibi_value VAR_5 = VAR_1->read_ibi_reg(VAR_1,VAR_0);
 VAR_5.sram_dest_reg_714.ctrl_usb_wan = VAR_2;
 VAR_5.sram_dest_reg_714.ctrl_sramdma = VAR_3;
 VAR_5.sram_dest_reg_714.ctrl_maximumfill = VAR_4;
 VAR_1->write_ibi_reg(VAR_1,VAR_0,VAR_5);
}
