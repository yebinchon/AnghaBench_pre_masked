
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_s {int fabric; } ;
typedef enum bfa_port_linkstate { ____Placeholder_bfa_port_linkstate } bfa_port_linkstate ;




 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bfa_fcs_s*,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0, enum bfa_port_linkstate VAR_1)
{
 struct bfa_fcs_s *VAR_2 = VAR_0;

 FUNC_3(VAR_2, VAR_1);

 switch (VAR_1) {
 case 128:
  FUNC_2(&VAR_2->fabric);
  break;

 case 129:
  FUNC_1(&VAR_2->fabric);
  break;

 default:
  FUNC_0(1);
 }
}
