
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iTCO_version; int io_lock; int smi_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void)
{
 unsigned int VAR_5;

 FUNC_6(&VAR_4.io_lock);

 FUNC_0(VAR_4.smi_res, VAR_3);


 if (FUNC_1()) {
  FUNC_7(&VAR_4.io_lock);
  FUNC_5("failed to reset NO_REBOOT flag, reboot disabled by hardware/BIOS\n");
  return -VAR_0;
 }



 if (VAR_4.iTCO_version == 2)
  FUNC_4(0x01, VAR_2);
 else if (VAR_4.iTCO_version == 1)
  FUNC_3(0x01, VAR_2);


 VAR_5 = FUNC_2(VAR_1);
 VAR_5 &= 0xf7ff;
 FUNC_4(VAR_5, VAR_1);
 VAR_5 = FUNC_2(VAR_1);
 FUNC_7(&VAR_4.io_lock);

 if (VAR_5 & 0x0800)
  return -1;
 return 0;
}
