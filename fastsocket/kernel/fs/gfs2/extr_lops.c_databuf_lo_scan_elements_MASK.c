
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct gfs2_sbd {int sd_replayed_blocks; int sd_found_blocks; } ;
struct gfs2_log_descriptor {int ld_type; int ld_data1; } ;
struct gfs2_jdesc {int jd_inode; } ;
struct gfs2_inode {struct gfs2_glock* i_gl; } ;
struct gfs2_glock {int dummy; } ;
struct buffer_head {scalar_t__ b_data; int b_size; } ;
typedef int __be64 ;
typedef int __be32 ;


 struct gfs2_inode* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ) ;
 struct buffer_head* FUNC_6 (struct gfs2_glock*,scalar_t__) ;
 int FUNC_7 (struct gfs2_sbd*,unsigned int*) ;
 int FUNC_8 (struct gfs2_jdesc*,unsigned int,struct buffer_head**) ;
 scalar_t__ FUNC_9 (struct gfs2_sbd*,scalar_t__,unsigned int) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_12(struct gfs2_jdesc *VAR_2, unsigned int VAR_3,
        struct gfs2_log_descriptor *VAR_4,
        __be64 *VAR_5, int VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_2->jd_inode);
 struct gfs2_sbd *VAR_8 = FUNC_1(VAR_2->jd_inode);
 struct gfs2_glock *VAR_9 = VAR_7->i_gl;
 unsigned int VAR_10 = FUNC_2(VAR_4->ld_data1);
 struct buffer_head *VAR_11, *VAR_12;
 u64 VAR_13;
 u64 VAR_14;
 int VAR_15 = 0;

 if (VAR_6 != 1 || FUNC_2(VAR_4->ld_type) != VAR_0)
  return 0;

 FUNC_7(VAR_8, &VAR_3);
 for (; VAR_10; FUNC_7(VAR_8, &VAR_3), VAR_10--) {
  VAR_13 = FUNC_3(*VAR_5++);
  VAR_14 = FUNC_3(*VAR_5++);

  VAR_8->sd_found_blocks++;

  if (FUNC_9(VAR_8, VAR_13, VAR_3))
   continue;

  VAR_15 = FUNC_8(VAR_2, VAR_3, &VAR_11);
  if (VAR_15)
   return VAR_15;

  VAR_12 = FUNC_6(VAR_9, VAR_13);
  FUNC_11(VAR_12->b_data, VAR_11->b_data, VAR_11->b_size);


  if (VAR_14) {
   __be32 *VAR_16 = (__be32 *)VAR_12->b_data;
   *VAR_16 = FUNC_5(VAR_1);
  }
  FUNC_10(VAR_12);

  FUNC_4(VAR_11);
  FUNC_4(VAR_12);

  VAR_8->sd_replayed_blocks++;
 }

 return VAR_15;
}
