
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {unsigned int sb_bsize; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; int sd_jbsize; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_gl; int i_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_sbd* FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct gfs2_sbd*,int ) ;
 int FUNC_5 (struct gfs2_inode*,char*,scalar_t__,unsigned int) ;
 int FUNC_6 (int *,scalar_t__,int*,scalar_t__*,int*) ;
 int FUNC_7 (struct gfs2_inode*) ;
 scalar_t__ FUNC_8 (struct gfs2_inode*) ;
 struct buffer_head* FUNC_9 (int ,scalar_t__,int) ;
 int FUNC_10 (int ,scalar_t__,int ,struct buffer_head**) ;
 int FUNC_11 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (char*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_14(struct gfs2_inode *VAR_3, char *VAR_4, u64 VAR_5,
         unsigned int VAR_6, unsigned VAR_7)
{
 struct gfs2_sbd *VAR_8 = FUNC_1(&VAR_3->i_inode);
 u64 VAR_9, VAR_10;
 u32 VAR_11 = 0;
 unsigned int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 u64 VAR_15 = FUNC_12(&VAR_3->i_inode);

 if (VAR_5 >= VAR_15)
  return 0;

 if (VAR_5 + VAR_6 > VAR_15)
  VAR_6 = VAR_15 - VAR_5;

 if (!VAR_6)
  return 0;

 if (FUNC_8(VAR_3))
  return FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);

 if (FUNC_4(VAR_8, FUNC_7(VAR_3)))
  return -VAR_1;

 VAR_9 = VAR_5;
 VAR_12 = FUNC_3(VAR_9, VAR_8->sd_jbsize) + sizeof(struct gfs2_meta_header);

 while (VAR_13 < VAR_6) {
  unsigned int VAR_16;
  struct buffer_head *VAR_17;
  int VAR_18;

  VAR_16 = VAR_6 - VAR_13;
  if (VAR_16 > VAR_8->sd_sb.sb_bsize - VAR_12)
   VAR_16 = VAR_8->sd_sb.sb_bsize - VAR_12;

  if (!VAR_11) {
   VAR_18 = 0;
   VAR_14 = FUNC_6(&VAR_3->i_inode, VAR_9, &VAR_18,
      &VAR_10, &VAR_11);
   if (VAR_14 || !VAR_10)
    goto fail;
   FUNC_0(VAR_11 < 1);
   if (!VAR_7)
    VAR_11 = 1;
   VAR_17 = FUNC_9(VAR_3->i_gl, VAR_10, VAR_11);
  } else {
   VAR_14 = FUNC_10(VAR_3->i_gl, VAR_10, VAR_0, &VAR_17);
   if (VAR_14)
    goto fail;
  }
  VAR_14 = FUNC_11(VAR_8, VAR_17, VAR_2);
  if (VAR_14) {
   FUNC_2(VAR_17);
   goto fail;
  }
  VAR_10++;
  VAR_11--;
  FUNC_13(VAR_4, VAR_17->b_data + VAR_12, VAR_16);
  FUNC_2(VAR_17);
  VAR_4 += VAR_16;
  VAR_13 += VAR_16;
  VAR_9++;
  VAR_12 = sizeof(struct gfs2_meta_header);
 }

 return VAR_13;
fail:
 return (VAR_13) ? VAR_13 : VAR_14;
}
