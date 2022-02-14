
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {TYPE_1__* i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct buffer_head {int b_data; } ;
struct TYPE_6__ {int * journal_info; } ;
struct TYPE_5__ {scalar_t__ gl_state; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct buffer_head*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_4 (struct gfs2_sbd*,char*,int) ;
 int FUNC_5 (struct gfs2_inode*,int ) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int ,struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_10 (TYPE_1__*,struct buffer_head*) ;
 int FUNC_11 (struct gfs2_sbd*,int ,int ) ;
 int FUNC_12 (struct gfs2_sbd*) ;

__attribute__((used)) static void FUNC_13(struct inode *VAR_3)
{
 struct gfs2_inode *VAR_4 = FUNC_0(VAR_3);
 struct gfs2_sbd *VAR_5 = FUNC_1(VAR_3);
 struct buffer_head *VAR_6;
 struct gfs2_holder VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10;

 if (!FUNC_7(VAR_4->i_gl)) {
  VAR_10 = FUNC_8(VAR_4->i_gl, VAR_0, 0, &VAR_7);
  if (VAR_10) {
   FUNC_4(VAR_5, "dirty_inode: glock %d\n", VAR_10);
   return;
  }
  VAR_8 = 1;
 } else if (FUNC_2(VAR_4->i_gl->gl_state != VAR_0))
  return;

 if (VAR_2->journal_info == ((void*)0)) {
  VAR_10 = FUNC_11(VAR_5, VAR_1, 0);
  if (VAR_10) {
   FUNC_4(VAR_5, "dirty_inode: gfs2_trans_begin %d\n", VAR_10);
   goto out;
  }
  VAR_9 = 1;
 }

 VAR_10 = FUNC_9(VAR_4, &VAR_6);
 if (VAR_10 == 0) {
  FUNC_10(VAR_4->i_gl, VAR_6);
  FUNC_5(VAR_4, VAR_6->b_data);
  FUNC_3(VAR_6);
 }

 if (VAR_9)
  FUNC_12(VAR_5);
out:
 if (VAR_8)
  FUNC_6(&VAR_7);
}
