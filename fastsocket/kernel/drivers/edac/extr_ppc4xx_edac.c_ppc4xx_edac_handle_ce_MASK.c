
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc4xx_ecc_status {int dummy; } ;
struct mem_ctl_info {int nr_csrows; } ;
typedef int message ;


 int VAR_0 ;
 int FUNC_0 (struct mem_ctl_info*,char*) ;
 scalar_t__ FUNC_1 (struct ppc4xx_ecc_status const*,int) ;
 int FUNC_2 (struct mem_ctl_info*,struct ppc4xx_ecc_status const*,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct mem_ctl_info *VAR_1,
        const struct ppc4xx_ecc_status *VAR_2)
{
 int VAR_3;
 char VAR_4[VAR_0];

 FUNC_2(VAR_1, VAR_2, VAR_4, sizeof(VAR_4));

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_csrows; VAR_3++)
  if (FUNC_1(VAR_2, VAR_3))
   FUNC_0(VAR_1, VAR_4);
}
