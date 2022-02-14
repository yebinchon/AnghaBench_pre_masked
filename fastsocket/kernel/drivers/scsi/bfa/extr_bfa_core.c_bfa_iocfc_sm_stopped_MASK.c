
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocfc_s {int bfa; } ;
typedef enum iocfc_event { ____Placeholder_iocfc_event } iocfc_event ;




 int FUNC_0 (struct bfa_iocfc_s*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_iocfc_s *VAR_1, enum iocfc_event VAR_2)
{
 FUNC_2(VAR_1->bfa, VAR_2);

 switch (VAR_2) {
 case 128:
 case 129:
  FUNC_0(VAR_1, VAR_0);
  break;
 default:
  FUNC_1(VAR_1->bfa, VAR_2);
  break;
 }
}
