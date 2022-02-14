
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_event_work {int delayed_work; int list; } ;
struct MPT2SAS_ADAPTER {int fw_event_lock; int * firmware_event_thread; int fw_event_list; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct MPT2SAS_ADAPTER *VAR_1, struct fw_event_work *VAR_2)
{
 unsigned long VAR_3;

 if (VAR_1->firmware_event_thread == ((void*)0))
  return;

 FUNC_3(&VAR_1->fw_event_lock, VAR_3);
 FUNC_1(&VAR_2->list, &VAR_1->fw_event_list);
 FUNC_0(&VAR_2->delayed_work, VAR_0);
 FUNC_2(VAR_1->firmware_event_thread,
     &VAR_2->delayed_work, 0);
 FUNC_4(&VAR_1->fw_event_lock, VAR_3);
}
