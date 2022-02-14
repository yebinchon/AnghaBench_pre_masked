
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qstr {int hash; } ;
struct inode {int dummy; } ;
struct gfs2_leaf {int lf_next; } ;
struct gfs2_inode {int i_diskflags; int i_depth; } ;
struct gfs2_dirent {int dummy; } ;
struct buffer_head {int b_size; scalar_t__ b_data; } ;
typedef int gfs2_dscan_t ;


 int VAR_0 ;
 struct gfs2_dirent* FUNC_0 (int) ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct gfs2_dirent*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct gfs2_inode*,unsigned int,struct buffer_head**) ;
 int FUNC_6 (struct gfs2_inode*,int ,struct buffer_head**) ;
 int FUNC_7 (struct gfs2_inode*) ;
 struct gfs2_dirent* FUNC_8 (struct inode*,scalar_t__,int ,int ,struct qstr const*,int *) ;
 int FUNC_9 (struct gfs2_inode*,struct buffer_head**) ;
 unsigned int FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static struct gfs2_dirent *FUNC_12(struct inode *VAR_2,
           const struct qstr *VAR_3,
           gfs2_dscan_t VAR_4,
           struct buffer_head **VAR_5)
{
 struct buffer_head *VAR_6;
 struct gfs2_dirent *VAR_7;
 struct gfs2_inode *VAR_8 = FUNC_1(VAR_2);
 int VAR_9;

 if (VAR_8->i_diskflags & VAR_1) {
  struct gfs2_leaf *VAR_10;
  unsigned VAR_11 = 1 << VAR_8->i_depth;
  unsigned VAR_12;
  u64 VAR_13;
  if (VAR_11 * sizeof(u64) != FUNC_10(VAR_2)) {
   FUNC_7(VAR_8);
   return FUNC_0(-VAR_0);
  }

  VAR_12 = VAR_3->hash >> (32 - VAR_8->i_depth);
  VAR_9 = FUNC_5(VAR_8, VAR_12, &VAR_6);
  if (VAR_9)
   return FUNC_0(VAR_9);
  do {
   VAR_7 = FUNC_8(VAR_2, VAR_6->b_data, VAR_6->b_size,
      VAR_4, VAR_3, ((void*)0));
   if (VAR_7)
    goto got_dent;
   VAR_10 = (struct gfs2_leaf *)VAR_6->b_data;
   VAR_13 = FUNC_3(VAR_10->lf_next);
   FUNC_4(VAR_6);
   if (!VAR_13)
    break;

   VAR_9 = FUNC_6(VAR_8, VAR_13, &VAR_6);
  } while(!VAR_9);

  return VAR_9 ? FUNC_0(VAR_9) : ((void*)0);
 }


 VAR_9 = FUNC_9(VAR_8, &VAR_6);
 if (VAR_9)
  return FUNC_0(VAR_9);
 VAR_7 = FUNC_8(VAR_2, VAR_6->b_data, VAR_6->b_size, VAR_4, VAR_3, ((void*)0));
got_dent:
 if (FUNC_11(VAR_7 == ((void*)0) || FUNC_2(VAR_7))) {
  FUNC_4(VAR_6);
  VAR_6 = ((void*)0);
 }
 *VAR_5 = VAR_6;
 return VAR_7;
}
