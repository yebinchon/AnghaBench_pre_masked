
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_hba {int fast_event_count; } ;
struct TYPE_2__ {int evt; int evt_listp; } ;
struct lpfc_fast_path_event {TYPE_1__ work_evt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct lpfc_fast_path_event* FUNC_3 (int,int ) ;

struct lpfc_fast_path_event *
FUNC_4(struct lpfc_hba *VAR_3) {
 struct lpfc_fast_path_event *VAR_4;


 if (FUNC_2(&VAR_3->fast_event_count) > VAR_2)
  return ((void*)0);

 VAR_4 = FUNC_3(sizeof(struct lpfc_fast_path_event),
   VAR_0);
 if (VAR_4) {
  FUNC_1(&VAR_3->fast_event_count);
  FUNC_0(&VAR_4->work_evt.evt_listp);
  VAR_4->work_evt.evt = VAR_1;
 }
 return VAR_4;
}
