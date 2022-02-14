
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct flexcop_device {scalar_t__ rev; int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_2__) ;TYPE_2__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;} ;
typedef scalar_t__ flexcop_sram_dest_target_t ;
typedef int flexcop_sram_dest_t ;
struct TYPE_5__ {scalar_t__ MEDIA_Dest; scalar_t__ CAO_Dest; scalar_t__ CAI_Dest; scalar_t__ NET_Dest; } ;
struct TYPE_6__ {TYPE_1__ sram_dest_reg_714; } ;
typedef TYPE_2__ flexcop_ibi_value ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int,scalar_t__) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 TYPE_2__ FUNC_2 (struct flexcop_device*,int ) ;
 int FUNC_3 (struct flexcop_device*,int ,TYPE_2__) ;
 int FUNC_4 (int) ;

int FUNC_5(struct flexcop_device *VAR_8, flexcop_sram_dest_t VAR_9,
   flexcop_sram_dest_target_t VAR_10)
{
 flexcop_ibi_value VAR_11;
 VAR_11 = VAR_8->read_ibi_reg(VAR_8, VAR_7);

 if (VAR_8->rev != VAR_6 && VAR_10 == VAR_5) {
  FUNC_1("SRAM destination target to available on FlexCopII(b)\n");
  return -VAR_0;
 }
 FUNC_0("sram dest: %x target: %x\n", VAR_9, VAR_10);

 if (VAR_9 & VAR_4)
  VAR_11.sram_dest_reg_714.NET_Dest = VAR_10;
 if (VAR_9 & VAR_1)
  VAR_11.sram_dest_reg_714.CAI_Dest = VAR_10;
 if (VAR_9 & VAR_2)
  VAR_11.sram_dest_reg_714.CAO_Dest = VAR_10;
 if (VAR_9 & VAR_3)
  VAR_11.sram_dest_reg_714.MEDIA_Dest = VAR_10;

 VAR_8->write_ibi_reg(VAR_8,VAR_7,VAR_11);
 FUNC_4(1000);

 return 0;
}
