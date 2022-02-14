
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct flexcop_device {int has_32_hw_pid_filter; int rev; TYPE_2__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;} ;
struct TYPE_4__ {int Rev_N_sig_revision_hi; int Rev_N_sig_caps; } ;
struct TYPE_5__ {TYPE_1__ misc_204; } ;
typedef TYPE_2__ flexcop_ibi_value ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 TYPE_2__ FUNC_2 (struct flexcop_device*,int ) ;

void FUNC_3(struct flexcop_device *VAR_4)
{
 flexcop_ibi_value VAR_5 = VAR_4->read_ibi_reg(VAR_4,VAR_3);

 switch (VAR_5.misc_204.Rev_N_sig_revision_hi) {
 case 0x2:
  FUNC_0("found a FlexCopII.\n");
  VAR_4->rev = VAR_0;
  break;
 case 0x3:
  FUNC_0("found a FlexCopIIb.\n");
  VAR_4->rev = VAR_1;
  break;
 case 0x0:
  FUNC_0("found a FlexCopIII.\n");
  VAR_4->rev = VAR_2;
  break;
 default:
  FUNC_1("unknown FlexCop Revision: %x. Please report this to "
    "linux-dvb@linuxtv.org.",
    VAR_5.misc_204.Rev_N_sig_revision_hi);
  break;
 }

 if ((VAR_4->has_32_hw_pid_filter = VAR_5.misc_204.Rev_N_sig_caps))
  FUNC_0("this FlexCop has "
    "the additional 32 hardware pid filter.\n");
 else
  FUNC_0("this FlexCop has "
    "the 6 basic main hardware pid filter.\n");

}
