
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct scsi_cmnd {TYPE_1__* request; } ;
struct fnic {int * io_req_lock; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int tag; } ;


 int VAR_0 ;

__attribute__((used)) static inline spinlock_t *FUNC_0(struct fnic *VAR_1,
         struct scsi_cmnd *VAR_2)
{
 u32 VAR_3 = VAR_2->request->tag & (VAR_0 - 1);

 return &VAR_1->io_req_lock[VAR_3];
}
