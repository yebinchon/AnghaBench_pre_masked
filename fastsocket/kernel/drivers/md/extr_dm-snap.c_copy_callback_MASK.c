
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_snapshot {TYPE_2__* store; } ;
struct dm_snap_pending_exception {int e; struct dm_snapshot* snap; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* commit_exception ) (TYPE_2__*,int *,int ,struct dm_snap_pending_exception*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dm_snap_pending_exception*,int ) ;
 int FUNC_1 (TYPE_2__*,int *,int ,struct dm_snap_pending_exception*) ;

__attribute__((used)) static void FUNC_2(int VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct dm_snap_pending_exception *VAR_4 = VAR_3;
 struct dm_snapshot *VAR_5 = VAR_4->snap;

 if (VAR_1 || VAR_2)
  FUNC_0(VAR_4, 0);

 else

  VAR_5->store->type->commit_exception(VAR_5->store, &VAR_4->e,
       VAR_0, VAR_4);
}
