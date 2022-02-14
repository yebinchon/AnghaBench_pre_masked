
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct bufattr {int dummy; } ;
typedef TYPE_2__* mount_t ;
typedef TYPE_3__* buf_t ;
struct TYPE_15__ {scalar_t__ bufs_iobufinuse_vdev; scalar_t__ bufs_iobufinuse; scalar_t__ bufs_iobufmax; int bufs_iobufsleeps; } ;
struct TYPE_14__ {TYPE_3__* tqh_first; } ;
struct TYPE_13__ {int b_lflags; int b_tag; int b_dev; int b_attr; TYPE_1__* b_vp; void* b_fsprivate; int * b_upl; scalar_t__ b_bufsize; scalar_t__ b_bcount; scalar_t__ b_resid; scalar_t__ b_error; int * b_iodone; int b_owner; scalar_t__ b_lblkno; scalar_t__ b_blkno; scalar_t__ b_redundancy_flags; scalar_t__ b_flags; scalar_t__ b_datap; int * b_proc; scalar_t__ b_timestamp; } ;
struct TYPE_12__ {int mnt_kern_flag; scalar_t__ mnt_iobufinuse; } ;
struct TYPE_11__ {scalar_t__ v_type; int v_rdev; TYPE_2__* v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 TYPE_6__ VAR_15 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 TYPE_2__* VAR_16 ;
 int VAR_17 ;
 TYPE_4__ VAR_18 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int ,int,char const*,int *) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;

buf_t
FUNC_6(vnode_t VAR_21, int VAR_22)
{
 buf_t VAR_23;
 mount_t VAR_24 = ((void*)0);
 int VAR_25 = VAR_3;

 FUNC_3(VAR_17);
 if (VAR_21 && ((VAR_24 = VAR_21->v_mount)) && VAR_24 != VAR_16 &&
     VAR_24->mnt_kern_flag & VAR_4) {
  VAR_25 = VAR_10;
  while ((!VAR_22 && VAR_24->mnt_iobufinuse > VAR_5) ||
      VAR_15.bufs_iobufinuse_vdev > VAR_13) {
   VAR_15.bufs_iobufsleeps++;

   VAR_19 = 1;
   (void)FUNC_5(&VAR_19, VAR_17,
       VAR_9 | (VAR_8+1), (const char *)"alloc_io_buf (1)",
       ((void*)0));
  }
 }

 while (((VAR_20 - VAR_7 < VAR_15.bufs_iobufinuse) && !VAR_22) ||
        (VAR_23 = VAR_18.tqh_first) == ((void*)0)) {
  VAR_15.bufs_iobufsleeps++;

  VAR_19 = 1;
  (void)FUNC_5(&VAR_19, VAR_17, VAR_9 | (VAR_8+1),
      (const char *)"alloc_io_buf (2)", ((void*)0));
 }
 FUNC_0(&VAR_18, VAR_23, VAR_14);

 VAR_15.bufs_iobufinuse++;
 if (VAR_15.bufs_iobufinuse > VAR_15.bufs_iobufmax)
  VAR_15.bufs_iobufmax = VAR_15.bufs_iobufinuse;

 if (VAR_25) {
  VAR_24->mnt_iobufinuse++;
  VAR_15.bufs_iobufinuse_vdev++;
 }

 FUNC_4(VAR_17);







 VAR_23->b_timestamp = 0;
 VAR_23->b_proc = ((void*)0);

 VAR_23->b_datap = 0;
 VAR_23->b_flags = 0;
 VAR_23->b_lflags = VAR_0 | VAR_1;
 if (VAR_25)
  VAR_23->b_lflags |= VAR_2;
 VAR_23->b_redundancy_flags = 0;
 VAR_23->b_blkno = VAR_23->b_lblkno = 0;




 VAR_23->b_iodone = ((void*)0);
 VAR_23->b_error = 0;
 VAR_23->b_resid = 0;
 VAR_23->b_bcount = 0;
 VAR_23->b_bufsize = 0;
 VAR_23->b_upl = ((void*)0);
 VAR_23->b_fsprivate = (void *)((void*)0);
 VAR_23->b_vp = VAR_21;
 FUNC_1(&VAR_23->b_attr, sizeof(struct bufattr));

 if (VAR_21 && (VAR_21->v_type == VAR_11 || VAR_21->v_type == VAR_12))
  VAR_23->b_dev = VAR_21->v_rdev;
 else
  VAR_23->b_dev = VAR_6;

 return (VAR_23);
}
