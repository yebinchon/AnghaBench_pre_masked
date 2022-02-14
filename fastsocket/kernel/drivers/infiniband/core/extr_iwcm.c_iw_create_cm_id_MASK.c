
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_cm_id {int rem_ref; int add_ref; int event_handler; void* context; int cm_handler; struct ib_device* device; } ;
struct iwcm_id_private {struct iw_cm_id id; int work_free_list; int work_list; int destroy_comp; int connect_wait; int refcount; int lock; int state; } ;
struct ib_device {int dummy; } ;
typedef int iw_cm_handler ;


 int VAR_0 ;
 struct iw_cm_id* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct iwcm_id_private* FUNC_5 (int,int ) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;

struct iw_cm_id *FUNC_7(struct ib_device *VAR_6,
     iw_cm_handler VAR_7,
     void *VAR_8)
{
 struct iwcm_id_private *VAR_9;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->state = VAR_2;
 VAR_9->id.device = VAR_6;
 VAR_9->id.cm_handler = VAR_7;
 VAR_9->id.context = VAR_8;
 VAR_9->id.event_handler = VAR_4;
 VAR_9->id.add_ref = VAR_3;
 VAR_9->id.rem_ref = VAR_5;
 FUNC_6(&VAR_9->lock);
 FUNC_2(&VAR_9->refcount, 1);
 FUNC_4(&VAR_9->connect_wait);
 FUNC_3(&VAR_9->destroy_comp);
 FUNC_1(&VAR_9->work_list);
 FUNC_1(&VAR_9->work_free_list);

 return &VAR_9->id;
}
