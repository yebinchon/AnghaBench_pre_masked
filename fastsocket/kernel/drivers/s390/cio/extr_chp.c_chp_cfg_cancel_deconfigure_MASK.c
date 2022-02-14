
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int id; int cssid; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct chp_id) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct chp_id,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct chp_id VAR_3)
{
 FUNC_0(2, "chp_cfg_cancel:%x.%02x\n", VAR_3.cssid, VAR_3.id);
 FUNC_3(&VAR_1);
 if (FUNC_1(VAR_3) == VAR_0)
  FUNC_2(VAR_3, VAR_2);
 FUNC_4(&VAR_1);
}
