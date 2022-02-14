
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fw_event_work {struct MPT2SAS_ADAPTER* ioc; int device_handle; int event; } ;
struct MPT2SAS_ADAPTER {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT2SAS_ADAPTER*,struct fw_event_work*) ;
 struct fw_event_work* FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(struct MPT2SAS_ADAPTER *VAR_2, u16 VAR_3)
{
 struct fw_event_work *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct fw_event_work), VAR_0);
 if (!VAR_4)
  return;
 VAR_4->event = VAR_1;
 VAR_4->device_handle = VAR_3;
 VAR_4->ioc = VAR_2;
 FUNC_0(VAR_2, VAR_4);
}
