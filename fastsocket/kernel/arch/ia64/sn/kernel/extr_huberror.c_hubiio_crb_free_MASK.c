
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hubdev_info {int hdi_nasid; } ;
struct TYPE_2__ {int ii_icrb0_b_regval; scalar_t__ b_mark; } ;
typedef TYPE_1__ ii_icrb0_b_u_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 () ;

void FUNC_4(struct hubdev_info *VAR_2, int VAR_3)
{
 ii_icrb0_b_u_t VAR_4;





 VAR_4.ii_icrb0_b_regval = FUNC_1(VAR_2->hdi_nasid,
            FUNC_0(VAR_3));
 VAR_4.b_mark = 0;
 FUNC_2(VAR_2->hdi_nasid, FUNC_0(VAR_3),
       VAR_4.ii_icrb0_b_regval);



 FUNC_2(VAR_2->hdi_nasid, VAR_0, (VAR_1 | VAR_3));
 while (FUNC_1(VAR_2->hdi_nasid, VAR_0) & VAR_1)
  FUNC_3();

}
