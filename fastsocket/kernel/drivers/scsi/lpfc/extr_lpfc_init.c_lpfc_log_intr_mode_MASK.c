
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct lpfc_hba *VAR_3, uint32_t VAR_4)
{
 switch (VAR_4) {
 case 0:
  FUNC_0(VAR_3, VAR_1, VAR_2,
    "0470 Enable INTx interrupt mode.\n");
  break;
 case 1:
  FUNC_0(VAR_3, VAR_1, VAR_2,
    "0481 Enabled MSI interrupt mode.\n");
  break;
 case 2:
  FUNC_0(VAR_3, VAR_1, VAR_2,
    "0480 Enabled MSI-X interrupt mode.\n");
  break;
 default:
  FUNC_0(VAR_3, VAR_0, VAR_2,
    "0482 Illegal interrupt mode.\n");
  break;
 }
 return;
}
