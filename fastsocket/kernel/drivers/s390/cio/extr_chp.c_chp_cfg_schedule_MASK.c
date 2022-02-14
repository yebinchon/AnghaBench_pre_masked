
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int id; int cssid; } ;


 int FUNC_0 (int,char*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct chp_id,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct chp_id VAR_6, int VAR_7)
{
 FUNC_0(2, "chp_cfg_sched%x.%02x=%d\n", VAR_6.cssid, VAR_6.id,
        VAR_7);
 FUNC_2(&VAR_3);
 FUNC_1(VAR_6, VAR_7 ? VAR_1 : VAR_2);
 VAR_0 = 1;
 FUNC_3(&VAR_3);
 FUNC_4(VAR_5, &VAR_4);
}
