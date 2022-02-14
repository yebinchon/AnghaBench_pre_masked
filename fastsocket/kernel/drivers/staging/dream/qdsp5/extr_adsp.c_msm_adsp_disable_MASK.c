
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {int lock; int name; } ;


 int FUNC_0 (struct msm_adsp_module*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;

int FUNC_4(struct msm_adsp_module *VAR_0)
{
 int VAR_1;
 FUNC_3("msm_adsp_disable() '%s'\n", VAR_0->name);
 FUNC_1(&VAR_0->lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->lock);
 return VAR_1;
}
