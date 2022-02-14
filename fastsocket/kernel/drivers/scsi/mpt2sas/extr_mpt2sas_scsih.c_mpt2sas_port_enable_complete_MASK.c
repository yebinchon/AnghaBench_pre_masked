
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_event_work {struct MPT2SAS_ADAPTER* ioc; int event; } ;
struct MPT2SAS_ADAPTER {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT2SAS_ADAPTER*,struct fw_event_work*) ;
 struct fw_event_work* FUNC_1 (int,int ) ;

void
FUNC_2(struct MPT2SAS_ADAPTER *VAR_2)
{
 struct fw_event_work *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct fw_event_work), VAR_0);
 if (!VAR_3)
  return;
 VAR_3->event = VAR_1;
 VAR_3->ioc = VAR_2;
 FUNC_0(VAR_2, VAR_3);
}
