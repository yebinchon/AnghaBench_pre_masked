
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* dev; } ;
struct pgpath {TYPE_5__ path; int fail_count; scalar_t__ is_active; TYPE_2__* pg; } ;
struct multipath {int lock; int trigger_event; int nr_valid_paths; int ti; struct pgpath* current_pgpath; } ;
struct TYPE_9__ {TYPE_1__* type; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {TYPE_4__ ps; struct multipath* m; } ;
struct TYPE_6__ {int (* fail_path ) (TYPE_4__*,TYPE_5__*) ;} ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_6(struct pgpath *VAR_1)
{
 unsigned long VAR_2;
 struct multipath *VAR_3 = VAR_1->pg->m;

 FUNC_3(&VAR_3->lock, VAR_2);

 if (!VAR_1->is_active)
  goto out;

 FUNC_0("Failing path %s.", VAR_1->path.dev->name);

 VAR_1->pg->ps.type->fail_path(&VAR_1->pg->ps, &VAR_1->path);
 VAR_1->is_active = 0;
 VAR_1->fail_count++;

 VAR_3->nr_valid_paths--;

 if (VAR_1 == VAR_3->current_pgpath)
  VAR_3->current_pgpath = ((void*)0);

 FUNC_1(VAR_0, VAR_3->ti,
        VAR_1->path.dev->name, VAR_3->nr_valid_paths);

 FUNC_2(&VAR_3->trigger_event);

out:
 FUNC_4(&VAR_3->lock, VAR_2);

 return 0;
}
