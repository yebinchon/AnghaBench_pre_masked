
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; int phase; } ;
struct scsi_cmnd {TYPE_3__* device; TYPE_1__ SCp; } ;
struct fsa_dev_info {int valid; } ;
struct fib {int dummy; } ;
struct aac_query_mount {void* type; void* count; void* command; } ;
struct aac_dev {struct fsa_dev_info* fsa_dev; } ;
struct TYPE_6__ {TYPE_2__* host; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct fib* FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (int ,struct fib*,int,int ,int ,int,int ,void*) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct fib*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd * VAR_8, int (*VAR_9)(struct scsi_cmnd *))
{
 struct fib * VAR_10;
 int VAR_11 = -VAR_3;

 if ((VAR_10 = FUNC_0((struct aac_dev *)VAR_8->device->host->hostdata))) {
  struct aac_query_mount *VAR_12;

  FUNC_3(VAR_10);

  VAR_12 = (struct aac_query_mount *)FUNC_6(VAR_10);

  VAR_12->command = FUNC_5(VAR_6);
  VAR_12->count = FUNC_5(FUNC_7(VAR_8));
  VAR_12->type = FUNC_5(VAR_4);
  VAR_8->SCp.ptr = (char *)VAR_9;

  VAR_11 = FUNC_4(VAR_1,
     VAR_10,
     sizeof(struct aac_query_mount),
     VAR_5,
     0, 1,
     VAR_7,
     (void *) VAR_8);



  if (VAR_11 == -VAR_2) {
   VAR_8->SCp.phase = VAR_0;
   return 0;
  }
  if (VAR_11 < 0) {
   VAR_8->SCp.ptr = ((void*)0);
   FUNC_1(VAR_10);
   FUNC_2(VAR_10);
  }
 }
 if (VAR_11 < 0) {
  struct fsa_dev_info *VAR_13 = ((struct aac_dev *)(VAR_8->device->host->hostdata))->fsa_dev;
  if (VAR_13) {
   VAR_13 += FUNC_7(VAR_8);
   if ((VAR_13->valid & 1) == 0) {
    VAR_13->valid = 0;
    return (*VAR_9)(VAR_8);
   }
  }
 }
 return VAR_11;
}
