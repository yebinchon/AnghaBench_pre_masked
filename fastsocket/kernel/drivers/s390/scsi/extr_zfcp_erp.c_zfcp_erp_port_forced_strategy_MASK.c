
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {int status; } ;
struct zfcp_erp_action {int step; struct zfcp_port* port; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zfcp_erp_action*) ;
 int FUNC_2 (struct zfcp_port*) ;

__attribute__((used)) static int FUNC_3(struct zfcp_erp_action *VAR_4)
{
 struct zfcp_port *VAR_5 = VAR_4->port;
 int VAR_6 = FUNC_0(&VAR_5->status);

 switch (VAR_4->step) {
 case 128:
  FUNC_2(VAR_5);
  if ((VAR_6 & VAR_3) &&
      (VAR_6 & VAR_2))
   return FUNC_1(VAR_4);
  else
   return VAR_0;

 case 129:
  if (!(VAR_6 & VAR_3))
   return VAR_1;
 }
 return VAR_0;
}
