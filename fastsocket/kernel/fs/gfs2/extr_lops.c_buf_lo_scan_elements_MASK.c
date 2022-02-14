
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_sbd {int sd_replayed_blocks; int sd_found_blocks; } ;
struct gfs2_log_descriptor {int ld_type; int ld_data1; } ;
struct gfs2_jdesc {int jd_inode; } ;
struct gfs2_inode {struct gfs2_glock* i_gl; } ;
struct gfs2_glock {int dummy; } ;
struct buffer_head {int b_size; int b_data; } ;
typedef int __be64 ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct gfs2_sbd*,struct buffer_head*) ;
 struct buffer_head* FUNC_6 (struct gfs2_glock*,int ) ;
 int FUNC_7 (struct gfs2_sbd*,unsigned int*) ;
 int FUNC_8 (struct gfs2_jdesc*,unsigned int,struct buffer_head**) ;
 scalar_t__ FUNC_9 (struct gfs2_sbd*,int ,unsigned int) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct gfs2_jdesc *VAR_2, unsigned int VAR_3,
    struct gfs2_log_descriptor *VAR_4, __be64 *VAR_5,
    int VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_2->jd_inode);
 struct gfs2_sbd *VAR_8 = FUNC_1(VAR_2->jd_inode);
 struct gfs2_glock *VAR_9 = VAR_7->i_gl;
 unsigned int VAR_10 = FUNC_2(VAR_4->ld_data1);
 struct buffer_head *VAR_11, *VAR_12;
 u64 VAR_13;
 int VAR_14 = 0;

 if (VAR_6 != 1 || FUNC_2(VAR_4->ld_type) != VAR_1)
  return 0;

 FUNC_7(VAR_8, &VAR_3);

 for (; VAR_10; FUNC_7(VAR_8, &VAR_3), VAR_10--) {
  VAR_13 = FUNC_3(*VAR_5++);

  VAR_8->sd_found_blocks++;

  if (FUNC_9(VAR_8, VAR_13, VAR_3))
   continue;

  VAR_14 = FUNC_8(VAR_2, VAR_3, &VAR_11);
  if (VAR_14)
   return VAR_14;

  VAR_12 = FUNC_6(VAR_9, VAR_13);
  FUNC_11(VAR_12->b_data, VAR_11->b_data, VAR_11->b_size);

  if (FUNC_5(VAR_8, VAR_12))
   VAR_14 = -VAR_0;
  else
   FUNC_10(VAR_12);

  FUNC_4(VAR_11);
  FUNC_4(VAR_12);

  if (VAR_14)
   break;

  VAR_8->sd_replayed_blocks++;
 }

 return VAR_14;
}
