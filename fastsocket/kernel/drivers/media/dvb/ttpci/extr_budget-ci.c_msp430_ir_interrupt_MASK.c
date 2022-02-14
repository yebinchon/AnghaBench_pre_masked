
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rc_dev {int dummy; } ;
struct TYPE_2__ {int have_command; int ir_key; int rc5_device; struct rc_dev* dev; } ;
struct budget_ci {TYPE_1__ ir; int budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct rc_dev*,int,int) ;
 int FUNC_2 (int *,int ,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_4)
{
 struct budget_ci *VAR_5 = (struct budget_ci *) VAR_4;
 struct rc_dev *VAR_6 = VAR_5->ir.dev;
 u32 VAR_7 = FUNC_2(&VAR_5->budget, VAR_1, VAR_0, 2, 1, 0) >> 8;
 if (VAR_3)
  FUNC_0("budget_ci: received byte 0x%02x\n", VAR_7);


 VAR_7 = VAR_7 & 0x7f;


 if (VAR_7 & 0x40) {
  VAR_5->ir.have_command = 1;
  VAR_5->ir.ir_key = VAR_7 & 0x3f;
  return;
 }


 if (!VAR_5->ir.have_command)
  return;
 VAR_5->ir.have_command = 0;


 if (VAR_5->ir.rc5_device != VAR_2 &&
     VAR_5->ir.rc5_device != (VAR_7 & 0x1f))
  return;

 FUNC_1(VAR_6, VAR_5->ir.ir_key, (VAR_7 & 0x20) ? 1 : 0);
}
