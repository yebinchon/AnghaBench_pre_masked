
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_event_work {void* event_data; struct MPT3SAS_ADAPTER* ioc; int event; } ;
struct SL_WH_TRIGGERS_EVENT_DATA_T {int dummy; } ;
struct MPT3SAS_ADAPTER {scalar_t__ is_driver_loading; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*,struct SL_WH_TRIGGERS_EVENT_DATA_T*,int) ;

void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_2,
 struct SL_WH_TRIGGERS_EVENT_DATA_T *VAR_3)
{
 struct fw_event_work *VAR_4;

 if (VAR_2->is_driver_loading)
  return;
 VAR_4 = FUNC_1(sizeof(struct fw_event_work), VAR_0);
 if (!VAR_4)
  return;
 VAR_4->event_data = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_4->event_data)
  return;
 VAR_4->event = VAR_1;
 VAR_4->ioc = VAR_2;
 FUNC_2(VAR_4->event_data, VAR_3, sizeof(*VAR_3));
 FUNC_0(VAR_2, VAR_4);
}
