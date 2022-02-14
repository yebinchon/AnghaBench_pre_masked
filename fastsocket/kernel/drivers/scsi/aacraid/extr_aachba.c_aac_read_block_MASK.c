
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sgentry {int dummy; } ;
struct scsi_cmnd {int dummy; } ;
struct fib {TYPE_1__* dev; } ;
struct TYPE_4__ {int count; } ;
struct aac_read {TYPE_2__ sg; void* count; void* block; void* cid; void* command; } ;
struct aac_fibhdr {int dummy; } ;
typedef int fib_callback ;
struct TYPE_3__ {int max_fib_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct scsi_cmnd*,TYPE_2__*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (int ,struct fib*,int,int ,int ,int,int ,void*) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct fib*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_8(struct fib * VAR_4, struct scsi_cmnd * VAR_5, u64 VAR_6, u32 VAR_7)
{
 u16 VAR_8;
 struct aac_read *VAR_9;
 FUNC_2(VAR_4);
 VAR_9 = (struct aac_read *) FUNC_5(VAR_4);
 VAR_9->command = FUNC_4(VAR_2);
 VAR_9->cid = FUNC_4(FUNC_7(VAR_5));
 VAR_9->block = FUNC_4((u32)(VAR_6&0xffffffff));
 VAR_9->count = FUNC_4(VAR_7 * 512);

 FUNC_1(VAR_5, &VAR_9->sg);
 VAR_8 = sizeof(struct aac_read) +
   ((FUNC_6(VAR_9->sg.count) - 1) *
    sizeof (struct sgentry));
 FUNC_0 (VAR_8 > (VAR_4->dev->max_fib_size -
    sizeof(struct aac_fibhdr)));



 return FUNC_3(VAR_0,
     VAR_4,
     VAR_8,
     VAR_1,
     0, 1,
     (fib_callback) VAR_3,
     (void *) VAR_5);
}
