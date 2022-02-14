
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* dev; } ;
struct TYPE_9__ {int work; } ;
struct pgpath {int is_active; TYPE_6__ path; TYPE_3__ activate_path; TYPE_2__* pg; } ;
struct multipath {int lock; int trigger_event; int nr_valid_paths; int ti; int pg_init_in_progress; TYPE_2__* current_pg; scalar_t__ hw_handler_name; int process_queued_ios; int * current_pgpath; scalar_t__ queue_size; } ;
struct TYPE_11__ {TYPE_1__* type; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_8__ {TYPE_5__ ps; struct multipath* m; } ;
struct TYPE_7__ {int (* reinstate_path ) (TYPE_5__*,TYPE_6__*) ;int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_7(struct pgpath *VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;
 struct multipath *VAR_7 = VAR_4->pg->m;

 FUNC_4(&VAR_7->lock, VAR_6);

 if (VAR_4->is_active)
  goto out;

 if (!VAR_4->pg->ps.type->reinstate_path) {
  FUNC_0("Reinstate path not supported by path selector %s",
         VAR_4->pg->ps.type->name);
  VAR_5 = -VAR_1;
  goto out;
 }

 VAR_5 = VAR_4->pg->ps.type->reinstate_path(&VAR_4->pg->ps, &VAR_4->path);
 if (VAR_5)
  goto out;

 VAR_4->is_active = 1;

 if (!VAR_7->nr_valid_paths++ && VAR_7->queue_size) {
  VAR_7->current_pgpath = ((void*)0);
  FUNC_2(VAR_3, &VAR_7->process_queued_ios);
 } else if (VAR_7->hw_handler_name && (VAR_7->current_pg == VAR_4->pg)) {
  if (FUNC_2(VAR_2, &VAR_4->activate_path.work))
   VAR_7->pg_init_in_progress++;
 }

 FUNC_1(VAR_0, VAR_7->ti,
        VAR_4->path.dev->name, VAR_7->nr_valid_paths);

 FUNC_3(&VAR_7->trigger_event);

out:
 FUNC_5(&VAR_7->lock, VAR_6);

 return VAR_5;
}
