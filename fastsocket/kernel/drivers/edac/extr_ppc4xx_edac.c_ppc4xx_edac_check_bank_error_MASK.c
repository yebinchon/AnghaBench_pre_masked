
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc4xx_ecc_status {int ecces; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(const struct ppc4xx_ecc_status *VAR_2,
        unsigned int VAR_3)
{
 switch (VAR_3) {
 case 0:
  return VAR_2->ecces & VAR_0;
 case 1:
  return VAR_2->ecces & VAR_1;
 default:
  return 0;
 }
}
