
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int sb_bsize; } ;
struct gfs2_sbd {unsigned int sd_jbsize; TYPE_1__ sd_sb; } ;
struct gfs2_meta_header {int dummy; } ;
struct TYPE_6__ {int i_size; int i_ctime; int i_mtime; } ;
struct gfs2_inode {int i_gl; TYPE_2__ i_inode; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_sbd* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int,unsigned int) ;
 scalar_t__ FUNC_3 (struct gfs2_sbd*,int ) ;
 scalar_t__ FUNC_4 (struct gfs2_sbd*,int) ;
 int FUNC_5 (struct gfs2_inode*,scalar_t__) ;
 int FUNC_6 (struct gfs2_inode*,int,struct buffer_head**) ;
 int FUNC_7 (struct gfs2_inode*,int,struct buffer_head**) ;
 int FUNC_8 (struct gfs2_inode*,char const*,unsigned int,unsigned int) ;
 int FUNC_9 (TYPE_2__*,int,int*,int*,scalar_t__*) ;
 int FUNC_10 (struct gfs2_inode*) ;
 scalar_t__ FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_13 (int ,struct buffer_head*) ;
 int FUNC_14 (struct gfs2_inode*,int *) ;
 int FUNC_15 (TYPE_2__*,int) ;
 int FUNC_16 (scalar_t__,char const*,unsigned int) ;

__attribute__((used)) static int FUNC_17(struct gfs2_inode *VAR_3, const char *VAR_4,
          u64 VAR_5, unsigned int VAR_6)
{
 struct gfs2_sbd *VAR_7 = FUNC_0(&VAR_3->i_inode);
 struct buffer_head *VAR_8;
 u64 VAR_9, VAR_10;
 u32 VAR_11 = 0;
 unsigned int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;

 if (!VAR_6)
  return 0;

 if (FUNC_11(VAR_3) &&
     VAR_5 + VAR_6 <= VAR_7->sd_sb.sb_bsize - sizeof(struct gfs2_dinode))
  return FUNC_8(VAR_3, VAR_4, (unsigned int)VAR_5,
           VAR_6);

 if (FUNC_3(VAR_7, FUNC_10(VAR_3)))
  return -VAR_1;

 if (FUNC_11(VAR_3)) {
  VAR_14 = FUNC_14(VAR_3, ((void*)0));
  if (VAR_14)
   return VAR_14;
 }

 VAR_9 = VAR_5;
 VAR_12 = FUNC_2(VAR_9, VAR_7->sd_jbsize) + sizeof(struct gfs2_meta_header);

 while (VAR_13 < VAR_6) {
  unsigned int VAR_16;
  struct buffer_head *VAR_17;

  VAR_16 = VAR_6 - VAR_13;
  if (VAR_16 > VAR_7->sd_sb.sb_bsize - VAR_12)
   VAR_16 = VAR_7->sd_sb.sb_bsize - VAR_12;

  if (!VAR_11) {
   VAR_15 = 1;
   VAR_14 = FUNC_9(&VAR_3->i_inode, VAR_9, &VAR_15,
      &VAR_10, &VAR_11);
   if (VAR_14)
    goto fail;
   VAR_14 = -VAR_2;
   if (FUNC_4(VAR_7, VAR_10))
    goto fail;
  }

  if (VAR_16 == VAR_7->sd_jbsize || VAR_15)
   VAR_14 = FUNC_7(VAR_3, VAR_10, &VAR_17);
  else
   VAR_14 = FUNC_6(VAR_3, VAR_10, &VAR_17);

  if (VAR_14)
   goto fail;

  FUNC_13(VAR_3->i_gl, VAR_17);
  FUNC_16(VAR_17->b_data + VAR_12, VAR_4, VAR_16);
  FUNC_1(VAR_17);

  VAR_4 += VAR_16;
  VAR_13 += VAR_16;
  VAR_9++;
  VAR_10++;
  VAR_11--;

  VAR_12 = sizeof(struct gfs2_meta_header);
 }

out:
 VAR_14 = FUNC_12(VAR_3, &VAR_8);
 if (VAR_14)
  return VAR_14;

 if (VAR_3->i_inode.i_size < VAR_5 + VAR_13)
  FUNC_15(&VAR_3->i_inode, VAR_5 + VAR_13);
 VAR_3->i_inode.i_mtime = VAR_3->i_inode.i_ctime = VAR_0;

 FUNC_13(VAR_3->i_gl, VAR_8);
 FUNC_5(VAR_3, VAR_8->b_data);
 FUNC_1(VAR_8);

 return VAR_13;
fail:
 if (VAR_13)
  goto out;
 return VAR_14;
}
