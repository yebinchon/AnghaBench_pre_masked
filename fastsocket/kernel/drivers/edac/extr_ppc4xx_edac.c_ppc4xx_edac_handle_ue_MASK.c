
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ppc4xx_ecc_status {int bearl; scalar_t__ bearh; } ;
struct mem_ctl_info {int nr_csrows; } ;
typedef int message ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mem_ctl_info*,unsigned long const,unsigned long const,int,char*) ;
 scalar_t__ FUNC_1 (struct ppc4xx_ecc_status const*,int) ;
 int FUNC_2 (struct mem_ctl_info*,struct ppc4xx_ecc_status const*,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct mem_ctl_info *VAR_3,
        const struct ppc4xx_ecc_status *VAR_4)
{
 const u64 VAR_5 = ((u64)VAR_4->bearh << 32 | VAR_4->bearl);
 const unsigned long VAR_6 = VAR_5 >> VAR_1;
 const unsigned long VAR_7 = VAR_5 & ~VAR_0;
 int VAR_8;
 char VAR_9[VAR_2];

 FUNC_2(VAR_3, VAR_4, VAR_9, sizeof(VAR_9));

 for (VAR_8 = 0; VAR_8 < VAR_3->nr_csrows; VAR_8++)
  if (FUNC_1(VAR_4, VAR_8))
   FUNC_0(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
}
