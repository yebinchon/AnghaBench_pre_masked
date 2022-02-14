
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc4xx_ecc_status {int ecces; } ;
struct mem_ctl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mem_ctl_info*,struct ppc4xx_ecc_status*) ;
 int FUNC_1 (struct mem_ctl_info*,struct ppc4xx_ecc_status*) ;
 int FUNC_2 (struct mem_ctl_info*,struct ppc4xx_ecc_status*) ;
 int FUNC_3 (struct mem_ctl_info*,struct ppc4xx_ecc_status*) ;
 int FUNC_4 (struct mem_ctl_info*,struct ppc4xx_ecc_status*) ;

__attribute__((used)) static void
FUNC_5(struct mem_ctl_info *VAR_2)
{



 struct ppc4xx_ecc_status VAR_3;

 FUNC_2(VAR_2, &VAR_3);






 if (VAR_3.ecces & VAR_1)
  FUNC_4(VAR_2, &VAR_3);

 if (VAR_3.ecces & VAR_0)
  FUNC_3(VAR_2, &VAR_3);

 FUNC_0(VAR_2, &VAR_3);
}
