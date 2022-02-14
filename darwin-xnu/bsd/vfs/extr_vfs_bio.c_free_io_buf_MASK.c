
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct bufattr {int dummy; } ;
typedef TYPE_2__* mount_t ;
typedef TYPE_3__* buf_t ;
struct TYPE_12__ {scalar_t__ bufs_iobufinuse; int bufs_iobufinuse_vdev; } ;
struct TYPE_11__ {int b_lflags; int b_attr; int b_flags; TYPE_1__* b_vp; } ;
struct TYPE_10__ {int mnt_iobufinuse; } ;
struct TYPE_9__ {TYPE_2__* v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int *,int) ;
 TYPE_7__ VAR_4 ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (char*,TYPE_3__*) ;
 int FUNC_5 (scalar_t__*) ;

void
FUNC_6(buf_t VAR_9)
{
 int VAR_10 = 0;
 int VAR_11 = VAR_2;
 mount_t VAR_12 = ((void*)0);


 if (VAR_9->b_lflags & VAR_0) {
  VAR_11 = VAR_3;
  if (VAR_9->b_vp)
   VAR_12 = VAR_9->b_vp->v_mount;
 }




 VAR_9->b_vp = ((void*)0);
 VAR_9->b_flags = VAR_1;


 FUNC_1 (&VAR_9->b_attr, sizeof(struct bufattr));

 FUNC_2(VAR_6);

 FUNC_0(VAR_9, &VAR_7, -1);

 if (VAR_8) {
  VAR_8 = 0;
  VAR_10 = 1;
 }
 if (VAR_4.bufs_iobufinuse <= 0)
  FUNC_4("free_io_buf: bp(%p) - bufstats.bufs_iobufinuse < 0", VAR_9);

 VAR_4.bufs_iobufinuse--;

 if (VAR_11) {
  VAR_4.bufs_iobufinuse_vdev--;
  if (VAR_12 && VAR_12 != VAR_5)
   VAR_12->mnt_iobufinuse--;
 }

 FUNC_3(VAR_6);

 if (VAR_10)
         FUNC_5(&VAR_8);
}
