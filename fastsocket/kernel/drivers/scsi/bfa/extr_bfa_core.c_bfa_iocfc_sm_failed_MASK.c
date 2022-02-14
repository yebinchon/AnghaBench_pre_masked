
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocfc_s {int bfa; } ;
typedef enum iocfc_event { ____Placeholder_iocfc_event } iocfc_event ;






 int FUNC_0 (struct bfa_iocfc_s*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_iocfc_s *VAR_3, enum iocfc_event VAR_4)
{
 FUNC_2(VAR_3->bfa, VAR_4);

 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_3, VAR_1);
  break;
 case 131:
  FUNC_0(VAR_3, VAR_2);
  break;
 case 130:
  FUNC_0(VAR_3, VAR_0);
  break;
 case 129:
  break;
 default:
  FUNC_1(VAR_3->bfa, VAR_4);
  break;
 }
}
