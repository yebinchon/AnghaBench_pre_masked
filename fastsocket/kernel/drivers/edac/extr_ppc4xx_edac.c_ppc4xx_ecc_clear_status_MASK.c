
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc4xx_edac_pdata {int dcr_host; } ;
struct ppc4xx_ecc_status {int ecces; int wmirq; int besr; } ;
struct mem_ctl_info {struct ppc4xx_edac_pdata* pvt_info; } ;
typedef int dcr_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int const*,int ,int) ;

__attribute__((used)) static void
FUNC_1(const struct mem_ctl_info *VAR_8,
   const struct ppc4xx_ecc_status *VAR_9)
{
 const struct ppc4xx_edac_pdata *VAR_10 = VAR_8->pvt_info;
 const dcr_host_t *VAR_11 = &VAR_10->dcr_host;

 FUNC_0(VAR_11, VAR_4, VAR_9->ecces & VAR_5);
 FUNC_0(VAR_11, VAR_6, VAR_9->wmirq & VAR_7);
 FUNC_0(VAR_11, VAR_2, VAR_9->besr & VAR_3);
 FUNC_0(VAR_11, VAR_1, 0);
 FUNC_0(VAR_11, VAR_0, 0);
}
