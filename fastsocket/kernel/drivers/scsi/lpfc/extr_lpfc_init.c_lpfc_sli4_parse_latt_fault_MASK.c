
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct lpfc_hba {int dummy; } ;
struct lpfc_acqe_link {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,struct lpfc_acqe_link*) ;
 int VAR_3 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int) ;

__attribute__((used)) static uint16_t
FUNC_2(struct lpfc_hba *VAR_4,
      struct lpfc_acqe_link *VAR_5)
{
 uint16_t VAR_6;

 switch (FUNC_0(VAR_3, VAR_5)) {
 case 129:
 case 130:
 case 128:
  VAR_6 = 0;
  break;
 default:
  FUNC_1(VAR_4, VAR_0, VAR_1,
    "0398 Invalid link fault code: x%x\n",
    FUNC_0(VAR_3, VAR_5));
  VAR_6 = VAR_2;
  break;
 }
 return VAR_6;
}
