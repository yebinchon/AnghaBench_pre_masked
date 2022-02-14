
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_unit {TYPE_1__* port; int status; } ;
struct zfcp_adapter {int dummy; } ;
struct TYPE_2__ {struct zfcp_adapter* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct zfcp_adapter*,TYPE_1__*,struct zfcp_unit*,char*,void*) ;
 int FUNC_2 (struct zfcp_unit*,int) ;

__attribute__((used)) static void FUNC_3(struct zfcp_unit *VAR_2, int VAR_3, char *VAR_4,
      void *VAR_5)
{
 struct zfcp_adapter *VAR_6 = VAR_2->port->adapter;

 FUNC_2(VAR_2, VAR_3);

 if (FUNC_0(&VAR_2->status) & VAR_1)
  return;

 FUNC_1(VAR_0,
    VAR_6, VAR_2->port, VAR_2, VAR_4, VAR_5);
}
