
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {unsigned int sb_bsize; } ;
struct gfs2_sbd {int sd_found_revokes; TYPE_1__ sd_sb; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_log_descriptor {int ld_type; int ld_data1; int ld_length; } ;
struct gfs2_jdesc {int jd_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __be64 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 int FUNC_5 (struct gfs2_sbd*,unsigned int*) ;
 int FUNC_6 (struct gfs2_jdesc*,unsigned int,struct buffer_head**) ;
 int FUNC_7 (struct gfs2_sbd*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct gfs2_jdesc *VAR_2, unsigned int VAR_3,
       struct gfs2_log_descriptor *VAR_4, __be64 *VAR_5,
       int VAR_6)
{
 struct gfs2_sbd *VAR_7 = FUNC_0(VAR_2->jd_inode);
 unsigned int VAR_8 = FUNC_1(VAR_4->ld_length);
 unsigned int VAR_9 = FUNC_1(VAR_4->ld_data1);
 struct buffer_head *VAR_10;
 unsigned int VAR_11;
 u64 VAR_12;
 int VAR_13 = 1;
 int VAR_14;

 if (VAR_6 != 0 || FUNC_1(VAR_4->ld_type) != VAR_0)
  return 0;

 VAR_11 = sizeof(struct gfs2_log_descriptor);

 for (; VAR_8; FUNC_5(VAR_7, &VAR_3), VAR_8--) {
  VAR_14 = FUNC_6(VAR_2, VAR_3, &VAR_10);
  if (VAR_14)
   return VAR_14;

  if (!VAR_13)
   FUNC_4(VAR_7, VAR_10, VAR_1);

  while (VAR_11 + sizeof(u64) <= VAR_7->sd_sb.sb_bsize) {
   VAR_12 = FUNC_2(*(__be64 *)(VAR_10->b_data + VAR_11));

   VAR_14 = FUNC_7(VAR_7, VAR_12, VAR_3);
   if (VAR_14 < 0) {
    FUNC_3(VAR_10);
    return VAR_14;
   }
   else if (VAR_14)
    VAR_7->sd_found_revokes++;

   if (!--VAR_9)
    break;
   VAR_11 += sizeof(u64);
  }

  FUNC_3(VAR_10);
  VAR_11 = sizeof(struct gfs2_meta_header);
  VAR_13 = 0;
 }

 return 0;
}
