
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct srp_target {int lock; } ;
struct TYPE_5__ {scalar_t__ ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct iu_entry {int ilist; struct srp_target* target; } ;
struct TYPE_7__ {int * cdb; } ;
struct TYPE_6__ {TYPE_3__ cmd; } ;
struct TYPE_8__ {TYPE_2__ srp; } ;


 int FUNC_0 (char*,struct iu_entry*,struct srp_target*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct iu_entry*) ;
 TYPE_4__* FUNC_5 (struct iu_entry*) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_0)
{
 unsigned long VAR_1;
 struct iu_entry *VAR_2 = (struct iu_entry *) VAR_0->SCp.ptr;
 struct srp_target *VAR_3 = VAR_2->target;

 FUNC_0("%p %p %x\n", VAR_2, VAR_3, FUNC_5(VAR_2)->srp.cmd.cdb[0]);

 FUNC_2(&VAR_3->lock, VAR_1);
 FUNC_1(&VAR_2->ilist);
 FUNC_3(&VAR_3->lock, VAR_1);

 FUNC_4(VAR_2);

 return 0;
}
