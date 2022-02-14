
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {scalar_t__ supported_classes; int unit_list_head; int status; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zfcp_port*,int ,char*,int *) ;
 int FUNC_4 (struct zfcp_adapter*) ;
 int FUNC_5 (struct zfcp_port*) ;
 int FUNC_6 (struct zfcp_port*) ;

__attribute__((used)) static void FUNC_7(struct zfcp_port *VAR_1)
{
 struct zfcp_adapter *VAR_2 = VAR_1->adapter;

 if (!(FUNC_1(&VAR_1->status) & VAR_0))
  return;

 FUNC_0(VAR_0, &VAR_1->status);

 if ((VAR_1->supported_classes != 0) ||
     !FUNC_2(&VAR_1->unit_list_head)) {
  FUNC_6(VAR_1);
  return;
 }
 FUNC_3(VAR_1, 0, "fcpval1", ((void*)0));
 FUNC_4(VAR_2);
 FUNC_6(VAR_1);
 FUNC_5(VAR_1);
}
