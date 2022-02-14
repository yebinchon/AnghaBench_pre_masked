
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc4xx_edac_pdata {int dcr_host; } ;
struct ppc4xx_ecc_status {int ecces; } ;
struct mem_ctl_info {struct ppc4xx_edac_pdata* pvt_info; } ;





 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,size_t,char*,char const*) ;

__attribute__((used)) static int
FUNC_2(const struct mem_ctl_info *VAR_3,
          const struct ppc4xx_ecc_status *VAR_4,
          char *VAR_5,
          size_t VAR_6)
{
 const struct ppc4xx_edac_pdata *VAR_7 = VAR_3->pvt_info;
 const char *VAR_8 = ((void*)0);

 switch (VAR_4->ecces & VAR_0) {
 case 130:
  VAR_8 = "None";
  break;
 case 133:
  VAR_8 = "ECC0:3";
  break;
 case 131:
  switch (FUNC_0(&VAR_7->dcr_host, VAR_1) &
   VAR_2) {
  case 129:
   VAR_8 = "ECC0:3";
   break;
  case 128:
   VAR_8 = "ECC4:8";
   break;
  default:
   VAR_8 = "Unknown";
   break;
  }
  break;
 case 132:
  VAR_8 = "ECC0:8";
  break;
 default:
  VAR_8 = "Unknown";
  break;
 }

 return FUNC_1(VAR_5, VAR_6, "Checkbit Error: %s", VAR_8);
}
