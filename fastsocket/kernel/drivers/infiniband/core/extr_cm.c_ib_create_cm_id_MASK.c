
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dummy; } ;
struct ib_cm_id {int remote_cm_qpn; void* context; int cm_handler; struct ib_device* device; int state; } ;
struct cm_id_private {struct ib_cm_id id; int refcount; int work_count; int work_list; int comp; int lock; } ;
typedef int ib_cm_handler ;


 int VAR_0 ;
 struct ib_cm_id* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct cm_id_private*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cm_id_private*) ;
 struct cm_id_private* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;

struct ib_cm_id *FUNC_8(struct ib_device *VAR_3,
     ib_cm_handler VAR_4,
     void *VAR_5)
{
 struct cm_id_private *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(sizeof *VAR_6, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->id.state = VAR_2;
 VAR_6->id.device = VAR_3;
 VAR_6->id.cm_handler = VAR_4;
 VAR_6->id.context = VAR_5;
 VAR_6->id.remote_cm_qpn = 1;
 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  goto error;

 FUNC_7(&VAR_6->lock);
 FUNC_4(&VAR_6->comp);
 FUNC_1(&VAR_6->work_list);
 FUNC_2(&VAR_6->work_count, -1);
 FUNC_2(&VAR_6->refcount, 1);
 return &VAR_6->id;

error:
 FUNC_5(VAR_6);
 return FUNC_0(-VAR_0);
}
