
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfsioattr {int io_max_swappin_available; int io_flags; int io_devblocksize; int io_maxsegwritesize; int io_maxsegreadsize; int io_segwritecnt; int io_segreadcnt; int io_maxwritecnt; int io_maxreadcnt; } ;
typedef TYPE_1__* mount_t ;
struct TYPE_3__ {int mnt_max_swappin_available; int mnt_ioflags; int mnt_devblocksize; int mnt_maxsegwritesize; int mnt_maxsegreadsize; int mnt_segwritecnt; int mnt_segreadcnt; int mnt_maxwritecnt; int mnt_maxreadcnt; } ;



void
FUNC_0(mount_t VAR_0, struct vfsioattr * VAR_1)
{
        if (VAR_0 == ((void*)0))
         return;
        VAR_0->mnt_maxreadcnt = VAR_1->io_maxreadcnt;
 VAR_0->mnt_maxwritecnt = VAR_1->io_maxwritecnt;
 VAR_0->mnt_segreadcnt = VAR_1->io_segreadcnt;
 VAR_0->mnt_segwritecnt = VAR_1->io_segwritecnt;
 VAR_0->mnt_maxsegreadsize = VAR_1->io_maxsegreadsize;
 VAR_0->mnt_maxsegwritesize = VAR_1->io_maxsegwritesize;
 VAR_0->mnt_devblocksize = VAR_1->io_devblocksize;
 VAR_0->mnt_ioflags = VAR_1->io_flags;
 VAR_0->mnt_max_swappin_available = VAR_1->io_max_swappin_available;
}
