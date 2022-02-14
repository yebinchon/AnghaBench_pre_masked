
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_unit {int status; } ;
struct zfcp_erp_action {int step; int status; struct zfcp_unit* unit; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zfcp_unit*) ;
 int FUNC_2 (struct zfcp_erp_action*) ;
 int FUNC_3 (struct zfcp_erp_action*) ;

__attribute__((used)) static int FUNC_4(struct zfcp_erp_action *VAR_5)
{
 struct zfcp_unit *VAR_6 = VAR_5->unit;

 switch (VAR_5->step) {
 case 130:
  FUNC_1(VAR_6);
  if (FUNC_0(&VAR_6->status) & VAR_3)
   return FUNC_2(VAR_5);

 case 129:
  if (FUNC_0(&VAR_6->status) & VAR_3)
   return VAR_1;
  if (VAR_5->status & VAR_4)
   return VAR_0;
  return FUNC_3(VAR_5);

 case 128:
  if (FUNC_0(&VAR_6->status) & VAR_3)
   return VAR_2;
 }
 return VAR_1;
}
