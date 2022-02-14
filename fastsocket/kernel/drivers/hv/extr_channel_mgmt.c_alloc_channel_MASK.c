
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int controlwq; int sc_list; int sc_lock; int inbound_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct vmbus_channel*) ;
 struct vmbus_channel* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct vmbus_channel *FUNC_5(void)
{
 struct vmbus_channel *VAR_1;

 VAR_1 = FUNC_3(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_4(&VAR_1->inbound_lock);
 FUNC_4(&VAR_1->sc_lock);

 FUNC_0(&VAR_1->sc_list);

 VAR_1->controlwq = FUNC_1("hv_vmbus_ctl");
 if (!VAR_1->controlwq) {
  FUNC_2(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
