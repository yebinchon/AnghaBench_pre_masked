
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int en; } ;
typedef TYPE_1__ reg_iop_mpu_rw_ctrl ;


 int FUNC_0 (unsigned int) ;
 TYPE_1__ FUNC_1 () ;
 TYPE_1__ FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,TYPE_1__) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;

int FUNC_6(unsigned int VAR_5)
{
 reg_iop_mpu_rw_ctrl VAR_6 = { .en = VAR_2 };
 int VAR_7;


 if ((VAR_7 = FUNC_5()) != 0)
  goto out;
 FUNC_3(VAR_0, VAR_1, VAR_4, FUNC_2());
 if ((VAR_7 = FUNC_5()) != 0)
  goto out;

 if ((VAR_7 = FUNC_5()) != 0)
  goto out;
 FUNC_4(VAR_0, VAR_1, VAR_4, FUNC_0(VAR_5));
 if ((VAR_7 = FUNC_5()) != 0)
  goto out;

 FUNC_3(VAR_0, VAR_1, VAR_4, FUNC_1());
 if ((VAR_7 = FUNC_5()) != 0)
  goto out;

 FUNC_3(VAR_0, VAR_1, VAR_3, VAR_6);
 out:
 return VAR_7;
}
