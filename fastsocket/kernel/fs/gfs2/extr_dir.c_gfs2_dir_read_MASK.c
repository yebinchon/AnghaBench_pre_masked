
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_diskflags; scalar_t__ i_entries; scalar_t__ i_no_addr; } ;
struct gfs2_dirent {int dummy; } ;
struct file_ra_state {int dummy; } ;
struct dirent_gather {scalar_t__ offset; struct gfs2_dirent const** pdent; } ;
struct buffer_head {int b_size; int b_data; } ;
typedef int filldir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct gfs2_dirent const*) ;
 int FUNC_3 (struct gfs2_dirent const*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*,int *,void*,int ,struct file_ra_state*) ;
 int FUNC_6 (struct gfs2_inode*,int *,void*,int ,struct gfs2_dirent const**,scalar_t__,int*) ;
 int FUNC_7 (struct gfs2_sbd*,char*,unsigned long long,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct gfs2_inode*) ;
 int VAR_4 ;
 struct gfs2_dirent* FUNC_9 (struct inode*,int ,int ,int ,int *,struct dirent_gather*) ;
 int FUNC_10 (struct gfs2_inode*) ;
 int FUNC_11 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_12 (struct gfs2_dirent const**) ;
 struct gfs2_dirent** FUNC_13 (int,int ) ;

int FUNC_14(struct inode *VAR_5, u64 *VAR_6, void *VAR_7,
    filldir_t VAR_8, struct file_ra_state *VAR_9)
{
 struct gfs2_inode *VAR_10 = FUNC_0(VAR_5);
 struct gfs2_sbd *VAR_11 = FUNC_1(VAR_5);
 struct dirent_gather VAR_12;
 const struct gfs2_dirent **VAR_13, *VAR_14;
 struct buffer_head *VAR_15;
 int VAR_16 = 0;
 int VAR_17;

 if (!VAR_10->i_entries)
  return 0;

 if (VAR_10->i_diskflags & VAR_3)
  return FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 if (!FUNC_10(VAR_10)) {
  FUNC_8(VAR_10);
  return -VAR_0;
 }

 VAR_17 = FUNC_11(VAR_10, &VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_17 = -VAR_1;

 VAR_13 = FUNC_13(96 * sizeof(struct gfs2_dirent *), VAR_2);
 if (VAR_13) {
  VAR_12.pdent = VAR_13;
  VAR_12.offset = 0;
  VAR_14 = FUNC_9(VAR_5, VAR_15->b_data, VAR_15->b_size,
     VAR_4, ((void*)0), &VAR_12);
  if (FUNC_2(VAR_14)) {
   VAR_17 = FUNC_3(VAR_14);
   goto out;
  }
  if (VAR_10->i_entries != VAR_12.offset) {
   FUNC_7(VAR_11, "Number of entries corrupt in dir %llu, "
    "ip->i_entries (%u) != g.offset (%u)\n",
    (unsigned long long)VAR_10->i_no_addr,
    VAR_10->i_entries,
    VAR_12.offset);
   VAR_17 = -VAR_0;
   goto out;
  }
  VAR_17 = FUNC_6(VAR_10, VAR_6, VAR_7, VAR_8, VAR_13,
     VAR_10->i_entries, &VAR_16);
out:
  FUNC_12(VAR_13);
 }

 if (VAR_17 > 0)
  VAR_17 = 0;

 FUNC_4(VAR_15);

 return VAR_17;
}
