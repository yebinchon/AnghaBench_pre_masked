
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfsioattr {int io_segreadcnt; int io_segwritecnt; scalar_t__ io_max_swappin_available; scalar_t__ io_flags; int io_devblocksize; void* io_maxsegwritesize; void* io_maxsegreadsize; void* io_maxwritecnt; void* io_maxreadcnt; int ** io_reserved; } ;
typedef TYPE_1__* mount_t ;
struct TYPE_3__ {int mnt_segreadcnt; int mnt_segwritecnt; scalar_t__ mnt_max_swappin_available; scalar_t__ mnt_ioflags; int mnt_devblocksize; void* mnt_maxsegwritesize; void* mnt_maxsegreadsize; void* mnt_maxwritecnt; void* mnt_maxreadcnt; } ;


 int VAR_0 ;
 void* VAR_1 ;

void
FUNC_0(mount_t VAR_2, struct vfsioattr *VAR_3)
{
 VAR_3->io_reserved[0] = ((void*)0);
 VAR_3->io_reserved[1] = ((void*)0);
 if (VAR_2 == ((void*)0)) {
  VAR_3->io_maxreadcnt = VAR_1;
  VAR_3->io_maxwritecnt = VAR_1;
  VAR_3->io_segreadcnt = 32;
  VAR_3->io_segwritecnt = 32;
  VAR_3->io_maxsegreadsize = VAR_1;
  VAR_3->io_maxsegwritesize = VAR_1;
  VAR_3->io_devblocksize = VAR_0;
  VAR_3->io_flags = 0;
  VAR_3->io_max_swappin_available = 0;
 } else {
  VAR_3->io_maxreadcnt = VAR_2->mnt_maxreadcnt;
  VAR_3->io_maxwritecnt = VAR_2->mnt_maxwritecnt;
  VAR_3->io_segreadcnt = VAR_2->mnt_segreadcnt;
  VAR_3->io_segwritecnt = VAR_2->mnt_segwritecnt;
  VAR_3->io_maxsegreadsize = VAR_2->mnt_maxsegreadsize;
  VAR_3->io_maxsegwritesize = VAR_2->mnt_maxsegwritesize;
  VAR_3->io_devblocksize = VAR_2->mnt_devblocksize;
  VAR_3->io_flags = VAR_2->mnt_ioflags;
  VAR_3->io_max_swappin_available = VAR_2->mnt_max_swappin_available;
 }
}
