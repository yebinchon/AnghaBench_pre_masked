
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 int FUNC_0 (struct device*,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1)
{
 FUNC_0(VAR_1, ((void*)0), VAR_0);
 FUNC_1(&VAR_1->kobj, "irm_id");
 FUNC_1(&VAR_1->kobj, "busmgr_id");
 FUNC_1(&VAR_1->kobj, "host_id");
}
