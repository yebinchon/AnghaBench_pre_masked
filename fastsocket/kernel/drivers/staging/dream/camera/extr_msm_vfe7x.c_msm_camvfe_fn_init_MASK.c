
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_camvfe_fn {int vfe_release; int vfe_disable; int vfe_config; int vfe_enable; int vfe_init; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;

void FUNC_1(struct msm_camvfe_fn *VAR_7, void *VAR_8)
{
 FUNC_0(&VAR_5);
 VAR_7->vfe_init = VAR_3;
 VAR_7->vfe_enable = VAR_2;
 VAR_7->vfe_config = VAR_0;
 VAR_7->vfe_disable = VAR_1;
 VAR_7->vfe_release = VAR_4;
 VAR_6 = VAR_8;
}
