
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct saved_mount_fields {int mnt_ioscale; int mnt_ioqueue_depth; int mnt_segwritecnt; int mnt_segreadcnt; int mnt_maxwritecnt; int mnt_maxreadcnt; } ;
typedef TYPE_1__* mount_t ;
struct TYPE_3__ {int mnt_ioscale; int mnt_ioqueue_depth; int mnt_segwritecnt; int mnt_segreadcnt; int mnt_maxwritecnt; int mnt_maxreadcnt; } ;



__attribute__((used)) static inline void
FUNC_0(mount_t VAR_0, struct saved_mount_fields *VAR_1) {
 VAR_0->mnt_maxreadcnt = VAR_1->mnt_maxreadcnt;
 VAR_0->mnt_maxwritecnt = VAR_1->mnt_maxwritecnt;
 VAR_0->mnt_segreadcnt = VAR_1->mnt_segreadcnt;
 VAR_0->mnt_segwritecnt = VAR_1->mnt_segwritecnt;
 VAR_0->mnt_ioqueue_depth = VAR_1->mnt_ioqueue_depth;
 VAR_0->mnt_ioscale = VAR_1->mnt_ioscale;
}
