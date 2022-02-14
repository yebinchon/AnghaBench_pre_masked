
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int fc_linkspeed; } ;
 int FUNC_0 (struct lpfc_hba*) ;

uint32_t
FUNC_1(struct lpfc_hba *VAR_0)
{
 uint32_t VAR_1;

 if (!FUNC_0(VAR_0))
  return 0;

 switch (VAR_0->fc_linkspeed) {
 case 131:
  VAR_1 = 1000;
  break;
 case 130:
  VAR_1 = 2000;
  break;
 case 129:
  VAR_1 = 4000;
  break;
 case 128:
  VAR_1 = 8000;
  break;
 case 133:
  VAR_1 = 10000;
  break;
 case 132:
  VAR_1 = 16000;
  break;
 default:
  VAR_1 = 0;
 }
 return VAR_1;
}
