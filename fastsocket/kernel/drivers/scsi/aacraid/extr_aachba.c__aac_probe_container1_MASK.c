
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int phase; } ;
struct scsi_cmnd {TYPE_2__ SCp; } ;
struct fib {int dummy; } ;
struct aac_query_mount {void* type; void* count; void* command; } ;
struct aac_mount {void* status; TYPE_1__* mnt; } ;
struct TYPE_3__ {void* vol; scalar_t__ capacityhigh; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (void*,struct fib*) ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (int ,struct fib*,int,int ,int ,int,int (*) (void*,struct fib*),void*) ;
 int FUNC_3 (struct scsi_cmnd*,struct fib*) ;
 void* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct fib*) ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_8(void * VAR_8, struct fib * VAR_9)
{
 struct scsi_cmnd * VAR_10;
 struct aac_mount * VAR_11;
 struct aac_query_mount *VAR_12;
 int VAR_13;

 VAR_11 = (struct aac_mount *) FUNC_5(VAR_9);
 VAR_11->mnt[0].capacityhigh = 0;
 if ((FUNC_6(VAR_11->status) != VAR_6) ||
     (FUNC_6(VAR_11->mnt[0].vol) != VAR_1)) {
  FUNC_0(VAR_8, VAR_9);
  return;
 }
 VAR_10 = (struct scsi_cmnd *) VAR_8;

 if (!FUNC_3(VAR_10, VAR_9))
  return;

 FUNC_1(VAR_9);

 VAR_12 = (struct aac_query_mount *)FUNC_5(VAR_9);

 VAR_12->command = FUNC_4(VAR_7);
 VAR_12->count = FUNC_4(FUNC_7(VAR_10));
 VAR_12->type = FUNC_4(VAR_4);

 VAR_13 = FUNC_2(VAR_2,
     VAR_9,
     sizeof(struct aac_query_mount),
     VAR_5,
     0, 1,
     FUNC_0,
     (void *) VAR_10);



 if (VAR_13 == -VAR_3)
  VAR_10->SCp.phase = VAR_0;
 else if (VAR_13 < 0) {

  VAR_11->status = FUNC_4(VAR_6);
  FUNC_0(VAR_8, VAR_9);
 }
}
