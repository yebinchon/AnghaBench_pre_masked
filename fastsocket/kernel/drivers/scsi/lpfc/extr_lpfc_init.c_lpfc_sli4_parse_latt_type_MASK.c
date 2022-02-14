
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lpfc_hba {int dummy; } ;
struct lpfc_acqe_link {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct lpfc_acqe_link*) ;
 int VAR_5 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int) ;

__attribute__((used)) static uint8_t
FUNC_2(struct lpfc_hba *VAR_6,
     struct lpfc_acqe_link *VAR_7)
{
 uint8_t VAR_8;

 switch (FUNC_0(VAR_5, VAR_7)) {
 case 131:
 case 130:
  VAR_8 = VAR_2;
  break;
 case 128:

  VAR_8 = VAR_4;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 default:
  FUNC_1(VAR_6, VAR_0, VAR_1,
    "0399 Invalid link attention type: x%x\n",
    FUNC_0(VAR_5, VAR_7));
  VAR_8 = VAR_4;
  break;
 }
 return VAR_8;
}
