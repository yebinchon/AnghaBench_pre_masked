
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehca_mr {int galpas; int ipz_mr_handle; scalar_t__ fmr_map_cnt; scalar_t__ fmr_max_maps; scalar_t__ fmr_max_pages; scalar_t__ fmr_page_size; int * start; scalar_t__ acl; scalar_t__ num_hwpages; scalar_t__ num_kpages; scalar_t__ flags; } ;


 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct ehca_mr *VAR_0)
{
 VAR_0->flags = 0;
 VAR_0->num_kpages = 0;
 VAR_0->num_hwpages = 0;
 VAR_0->acl = 0;
 VAR_0->start = ((void*)0);
 VAR_0->fmr_page_size = 0;
 VAR_0->fmr_max_pages = 0;
 VAR_0->fmr_max_maps = 0;
 VAR_0->fmr_map_cnt = 0;
 FUNC_0(&VAR_0->ipz_mr_handle, 0, sizeof(VAR_0->ipz_mr_handle));
 FUNC_0(&VAR_0->galpas, 0, sizeof(VAR_0->galpas));
}
