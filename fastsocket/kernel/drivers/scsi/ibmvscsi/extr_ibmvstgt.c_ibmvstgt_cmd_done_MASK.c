
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
struct scsi_cmnd {scalar_t__ result; TYPE_1__ SCp; } ;
struct iu_entry {int ilist; struct srp_target* target; } ;
struct TYPE_8__ {int * cdb; } ;
struct TYPE_6__ {TYPE_4__ cmd; } ;
struct TYPE_7__ {TYPE_2__ srp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct iu_entry*,struct srp_target*,int ,scalar_t__) ;
 int FUNC_1 (char*,struct iu_entry*,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct iu_entry*,struct scsi_cmnd*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct iu_entry*) ;
 int FUNC_8 (struct scsi_cmnd*,TYPE_4__*,int ,int,int) ;
 TYPE_3__* FUNC_9 (struct iu_entry*) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_4,
        void (*VAR_5)(struct scsi_cmnd *))
{
 unsigned long VAR_6;
 struct iu_entry *VAR_7 = (struct iu_entry *) VAR_4->SCp.ptr;
 struct srp_target *VAR_8 = VAR_7->target;
 int VAR_9 = 0;

 FUNC_0("%p %p %x %u\n", VAR_7, VAR_8, FUNC_9(VAR_7)->srp.cmd.cdb[0],
  FUNC_3(VAR_4));

 if (FUNC_3(VAR_4))
  VAR_9 = FUNC_8(VAR_4, &FUNC_9(VAR_7)->srp.cmd, VAR_3, 1, 1);

 FUNC_5(&VAR_8->lock, VAR_6);
 FUNC_2(&VAR_7->ilist);
 FUNC_6(&VAR_8->lock, VAR_6);

 if (VAR_9|| VAR_4->result != VAR_2) {
  FUNC_1("operation failed %p %d %x\n",
   VAR_7, VAR_4->result, FUNC_9(VAR_7)->srp.cmd.cdb[0]);
  FUNC_4(VAR_7, VAR_4, VAR_0, 0x00);
 } else
  FUNC_4(VAR_7, VAR_4, VAR_1, 0x00);

 VAR_5(VAR_4);
 FUNC_7(VAR_7);
 return 0;
}
