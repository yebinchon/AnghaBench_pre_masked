
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_leaf {int lf_entries; } ;
struct TYPE_2__ {int i_mode; int i_ctime; int i_mtime; } ;
struct gfs2_inode {int i_diskflags; scalar_t__ i_depth; TYPE_1__ i_inode; int i_entries; } ;
struct gfs2_dirent {int de_type; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct gfs2_dirent*) ;
 int FUNC_2 (struct gfs2_dirent*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct gfs2_inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct qstr const*) ;
 int FUNC_10 (struct inode*,struct qstr const*) ;
 int VAR_4 ;
 struct gfs2_dirent* FUNC_11 (struct inode*,struct qstr const*,int ,struct buffer_head**) ;
 struct gfs2_dirent* FUNC_12 (struct inode*,struct gfs2_dirent*,struct qstr const*,struct buffer_head*) ;
 int FUNC_13 (struct gfs2_inode const*,struct gfs2_dirent*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct inode*) ;

int FUNC_16(struct inode *VAR_5, const struct qstr *VAR_6,
   const struct gfs2_inode *VAR_7, unsigned VAR_8)
{
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_5);
 struct buffer_head *VAR_10;
 struct gfs2_dirent *VAR_11;
 struct gfs2_leaf *VAR_12;
 int VAR_13;

 while(1) {
  VAR_11 = FUNC_11(VAR_5, VAR_6, VAR_4,
       &VAR_10);
  if (VAR_11) {
   if (FUNC_1(VAR_11))
    return FUNC_2(VAR_11);
   VAR_11 = FUNC_12(VAR_5, VAR_11, VAR_6, VAR_10);
   FUNC_13(VAR_7, VAR_11);
   VAR_11->de_type = FUNC_6(VAR_8);
   if (VAR_9->i_diskflags & VAR_2) {
    VAR_12 = (struct gfs2_leaf *)VAR_10->b_data;
    FUNC_4(&VAR_12->lf_entries, 1);
   }
   FUNC_5(VAR_10);
   VAR_9->i_entries++;
   VAR_9->i_inode.i_mtime = VAR_9->i_inode.i_ctime = VAR_0;
   if (FUNC_3(VAR_7->i_inode.i_mode))
    FUNC_14(&VAR_9->i_inode);
   FUNC_15(VAR_5);
   VAR_13 = 0;
   break;
  }
  if (!(VAR_9->i_diskflags & VAR_2)) {
   VAR_13 = FUNC_8(VAR_5);
   if (VAR_13)
    break;
   continue;
  }
  VAR_13 = FUNC_10(VAR_5, VAR_6);
  if (VAR_13 == 0)
   continue;
  if (VAR_13 < 0)
   break;
  if (VAR_9->i_depth < VAR_3) {
   VAR_13 = FUNC_7(VAR_9);
   if (VAR_13)
    break;
   VAR_13 = FUNC_10(VAR_5, VAR_6);
   if (VAR_13 < 0)
    break;
   if (VAR_13 == 0)
    continue;
  }
  VAR_13 = FUNC_9(VAR_5, VAR_6);
  if (!VAR_13)
   continue;
  VAR_13 = -VAR_1;
  break;
 }
 return VAR_13;
}
