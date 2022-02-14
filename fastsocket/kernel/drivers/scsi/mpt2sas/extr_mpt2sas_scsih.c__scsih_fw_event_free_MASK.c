
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_event_work {struct fw_event_work* event_data; int list; } ;
struct MPT2SAS_ADAPTER {int fw_event_lock; } ;


 int FUNC_0 (struct fw_event_work*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct MPT2SAS_ADAPTER *VAR_0, struct fw_event_work
    *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->fw_event_lock, VAR_2);
 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1->event_data);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_0->fw_event_lock, VAR_2);
}
