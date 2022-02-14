
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {scalar_t__ sd_log_sequence; int sd_flags; TYPE_2__* sd_jdesc; } ;
struct gfs2_log_header_host {int lh_flags; int lh_blkno; scalar_t__ lh_sequence; } ;
struct gfs2_inode {struct gfs2_glock* i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_glock {TYPE_1__* gl_ops; struct gfs2_sbd* gl_sbd; } ;
struct TYPE_4__ {int jd_inode; } ;
struct TYPE_3__ {int (* go_inval ) (struct gfs2_glock*,int ) ;} ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gfs2_sbd*) ;
 int FUNC_2 (TYPE_2__*,struct gfs2_log_header_host*) ;
 int FUNC_3 (struct gfs2_sbd*,int ) ;
 int FUNC_4 (struct gfs2_glock*,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct gfs2_glock *VAR_4, struct gfs2_holder *VAR_5)
{
 struct gfs2_sbd *VAR_6 = VAR_4->gl_sbd;
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_6->sd_jdesc->jd_inode);
 struct gfs2_glock *VAR_8 = VAR_7->i_gl;
 struct gfs2_log_header_host VAR_9;
 int VAR_10;

 if (FUNC_5(VAR_2, &VAR_6->sd_flags)) {
  VAR_8->gl_ops->go_inval(VAR_8, VAR_0);

  VAR_10 = FUNC_2(VAR_6->sd_jdesc, &VAR_9);
  if (VAR_10)
   FUNC_1(VAR_6);
  if (!(VAR_9.lh_flags & VAR_1))
   FUNC_1(VAR_6);


  if (!FUNC_5(VAR_3, &VAR_6->sd_flags)) {
   VAR_6->sd_log_sequence = VAR_9.lh_sequence + 1;
   FUNC_3(VAR_6, VAR_9.lh_blkno);
  }
 }
 return 0;
}
