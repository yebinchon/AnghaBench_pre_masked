
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_port {struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int erp_lock; } ;
struct TYPE_2__ {int config_lock; } ;


 int FUNC_0 (struct zfcp_port*,int,char*,void*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_5(struct zfcp_port *VAR_1, int VAR_2, char *VAR_3,
     void *VAR_4)
{
 unsigned long VAR_5;
 struct zfcp_adapter *VAR_6 = VAR_1->adapter;

 FUNC_1(&VAR_0.config_lock, VAR_5);
 FUNC_3(&VAR_6->erp_lock);
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_4(&VAR_6->erp_lock);
 FUNC_2(&VAR_0.config_lock, VAR_5);
}
