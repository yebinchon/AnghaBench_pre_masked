
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int event; int id; int uid; } ;
struct ib_ucm_event {int ctx_list; int file_list; TYPE_1__ resp; struct ib_cm_id* cm_id; struct ib_ucm_context* ctx; } ;
struct ib_ucm_context {TYPE_2__* file; int events; int id; int uid; } ;
struct ib_cm_id {struct ib_ucm_context* context; } ;
struct ib_cm_event {int event; } ;
struct TYPE_4__ {int file_mutex; int poll_wait; int events; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_cm_event*,struct ib_ucm_event*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_ucm_event*) ;
 struct ib_ucm_event* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ib_cm_id *VAR_1,
    struct ib_cm_event *VAR_2)
{
 struct ib_ucm_event *VAR_3;
 struct ib_ucm_context *VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_1->context;

 VAR_3 = FUNC_3(sizeof *VAR_3, VAR_0);
 if (!VAR_3)
  goto err1;

 VAR_3->ctx = VAR_4;
 VAR_3->cm_id = VAR_1;
 VAR_3->resp.uid = VAR_4->uid;
 VAR_3->resp.id = VAR_4->id;
 VAR_3->resp.event = VAR_2->event;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5)
  goto err2;

 FUNC_5(&VAR_4->file->file_mutex);
 FUNC_4(&VAR_3->file_list, &VAR_4->file->events);
 FUNC_4(&VAR_3->ctx_list, &VAR_4->events);
 FUNC_7(&VAR_4->file->poll_wait);
 FUNC_6(&VAR_4->file->file_mutex);
 return 0;

err2:
 FUNC_2(VAR_3);
err1:

 return FUNC_1(VAR_2->event);
}
