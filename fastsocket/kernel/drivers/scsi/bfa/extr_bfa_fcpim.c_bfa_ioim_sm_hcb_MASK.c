
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioim_s {int bfa; } ;
typedef enum bfa_ioim_event { ____Placeholder_bfa_ioim_event } bfa_ioim_event ;





 int FUNC_0 (struct bfa_ioim_s*) ;
 int FUNC_1 (struct bfa_ioim_s*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_ioim_s*,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_ioim_s *VAR_1, enum bfa_ioim_event VAR_2)
{
 switch (VAR_2) {
 case 129:
  FUNC_3(VAR_1, VAR_0);
  FUNC_0(VAR_1);
  break;

 case 130:
  FUNC_1(VAR_1);
  break;

 case 128:
  break;

 default:
  FUNC_2(VAR_1->bfa, VAR_2);
 }
}
