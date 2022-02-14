
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int dummy; } ;
struct inode {int i_state; int i_mode; } ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_5__ {TYPE_1__* gh_gl; int gh_flags; } ;
struct gfs2_inode {struct gfs2_glock* i_gl; TYPE_2__ i_iopen_gh; int i_flags; int i_no_formal_ino; } ;
struct gfs2_glock {struct gfs2_inode* gl_object; } ;
struct TYPE_4__ {struct gfs2_inode* gl_object; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_1 (int) ;
 struct gfs2_inode* FUNC_2 (struct inode*) ;
 struct gfs2_sbd* FUNC_3 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct gfs2_sbd*,int ,int *,int ,struct gfs2_glock**) ;
 int FUNC_6 (struct gfs2_glock*,int ,int ,TYPE_2__*) ;
 int FUNC_7 (struct gfs2_glock*) ;
 struct inode* FUNC_8 (struct super_block*,int ,int) ;
 int VAR_8 ;
 int FUNC_9 (struct gfs2_inode*) ;
 int VAR_9 ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct inode*) ;

struct inode *FUNC_15(struct super_block *VAR_10, unsigned int VAR_11,
    u64 VAR_12, u64 VAR_13, int VAR_14)
{
 struct inode *VAR_15;
 struct gfs2_inode *VAR_16;
 struct gfs2_glock *VAR_17 = ((void*)0);
 int VAR_18;

 VAR_15 = FUNC_8(VAR_10, VAR_12, VAR_14);
 VAR_16 = FUNC_2(VAR_15);

 if (!VAR_15)
  return FUNC_1(-VAR_2);

 if (VAR_15->i_state & VAR_6) {
  struct gfs2_sbd *VAR_19 = FUNC_3(VAR_15);
  VAR_16->i_no_formal_ino = VAR_13;

  VAR_18 = FUNC_5(VAR_19, VAR_12, &VAR_8, VAR_0, &VAR_16->i_gl);
  if (FUNC_13(VAR_18))
   goto fail;
  VAR_16->i_gl->gl_object = VAR_16;

  VAR_18 = FUNC_5(VAR_19, VAR_12, &VAR_9, VAR_0, &VAR_17);
  if (FUNC_13(VAR_18))
   goto fail_put;

  FUNC_12(VAR_3, &VAR_16->i_flags);
  VAR_18 = FUNC_6(VAR_17, VAR_7, VAR_4, &VAR_16->i_iopen_gh);
  if (FUNC_13(VAR_18))
   goto fail_iopen;

  VAR_16->i_iopen_gh.gh_gl->gl_object = VAR_16;
  FUNC_7(VAR_17);
  VAR_17 = ((void*)0);

   if (VAR_11 == VAR_1) {

   VAR_18 = FUNC_9(FUNC_2(VAR_15));
   if (VAR_18)
    goto fail_refresh;
  } else {
   VAR_15->i_mode = FUNC_0(VAR_11);
  }

  FUNC_10(VAR_15);
  FUNC_14(VAR_15);
 }

 return VAR_15;

fail_refresh:
 VAR_16->i_iopen_gh.gh_flags |= VAR_5;
 VAR_16->i_iopen_gh.gh_gl->gl_object = ((void*)0);
 FUNC_4(&VAR_16->i_iopen_gh);
fail_iopen:
 if (VAR_17)
  FUNC_7(VAR_17);
fail_put:
 VAR_16->i_gl->gl_object = ((void*)0);
 FUNC_7(VAR_16->i_gl);
fail:
 FUNC_11(VAR_15);
 return FUNC_1(VAR_18);
}
