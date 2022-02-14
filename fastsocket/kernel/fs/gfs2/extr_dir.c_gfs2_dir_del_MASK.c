
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct qstr {int dummy; } ;
struct gfs2_leaf {int lf_entries; } ;
struct TYPE_3__ {int i_ctime; int i_mtime; } ;
struct gfs2_inode {int i_diskflags; TYPE_1__ i_inode; int i_entries; } ;
struct gfs2_dirent {int de_rec_len; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct gfs2_dirent*) ;
 int FUNC_1 (struct gfs2_dirent*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct gfs2_inode*,struct buffer_head*,struct gfs2_dirent*,struct gfs2_dirent*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 scalar_t__ FUNC_7 (struct gfs2_dirent*,struct qstr const*,int *) ;
 int VAR_3 ;
 struct gfs2_dirent* FUNC_8 (TYPE_1__*,struct qstr const*,int ,struct buffer_head**) ;
 int FUNC_9 (TYPE_1__*) ;

int FUNC_10(struct gfs2_inode *VAR_4, const struct qstr *VAR_5)
{
 struct gfs2_dirent *VAR_6, *VAR_7 = ((void*)0);
 struct buffer_head *VAR_8;



 VAR_6 = FUNC_8(&VAR_4->i_inode, VAR_5, VAR_3, &VAR_8);
 if (!VAR_6) {
  FUNC_6(VAR_4);
  return -VAR_1;
 }
 if (FUNC_0(VAR_6)) {
  FUNC_6(VAR_4);
  return FUNC_1(VAR_6);
 }

 if (FUNC_7(VAR_6, VAR_5, ((void*)0)) == 0) {
  VAR_7 = VAR_6;
  VAR_6 = (struct gfs2_dirent *)((char *)VAR_6 + FUNC_2(VAR_7->de_rec_len));
 }

 FUNC_5(VAR_4, VAR_8, VAR_7, VAR_6);
 if (VAR_4->i_diskflags & VAR_2) {
  struct gfs2_leaf *VAR_9 = (struct gfs2_leaf *)VAR_8->b_data;
  u16 VAR_10 = FUNC_2(VAR_9->lf_entries);
  if (!VAR_10)
   FUNC_6(VAR_4);
  VAR_9->lf_entries = FUNC_4(--VAR_10);
 }
 FUNC_3(VAR_8);

 if (!VAR_4->i_entries)
  FUNC_6(VAR_4);
 VAR_4->i_entries--;
 VAR_4->i_inode.i_mtime = VAR_4->i_inode.i_ctime = VAR_0;
 FUNC_9(&VAR_4->i_inode);

 return 0;
}
