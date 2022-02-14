
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iTCO_version; int io_lock; int smi_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void)
{
 FUNC_3(&VAR_3.io_lock);

 FUNC_0(VAR_3.smi_res, VAR_2);


 if (VAR_3.iTCO_version == 2)
  FUNC_2(0x01, VAR_1);
 else if (VAR_3.iTCO_version == 1) {


  FUNC_2(0x0008, VAR_0);

  FUNC_1(0x01, VAR_1);
 }

 FUNC_4(&VAR_3.io_lock);
 return 0;
}
