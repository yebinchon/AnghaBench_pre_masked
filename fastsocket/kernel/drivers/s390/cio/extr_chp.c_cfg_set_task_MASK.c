
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {size_t cssid; size_t id; } ;
typedef enum cfg_task_t { ____Placeholder_cfg_task_t } cfg_task_t ;


 int** VAR_0 ;

__attribute__((used)) static void FUNC_0(struct chp_id VAR_1, enum cfg_task_t VAR_2)
{
 VAR_0[VAR_1.cssid][VAR_1.id] = VAR_2;
}
