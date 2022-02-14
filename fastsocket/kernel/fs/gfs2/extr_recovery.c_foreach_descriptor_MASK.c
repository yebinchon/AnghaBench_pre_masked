
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_log_header_host {int dummy; } ;
struct TYPE_2__ {int mh_type; } ;
struct gfs2_log_descriptor {TYPE_1__ ld_header; int ld_length; } ;
struct gfs2_jdesc {int jd_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __be64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct gfs2_jdesc*,unsigned int,struct gfs2_log_header_host*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct gfs2_sbd*,struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 int FUNC_8 (struct gfs2_sbd*,unsigned int*) ;
 int FUNC_9 (struct gfs2_jdesc*,unsigned int,struct buffer_head**) ;
 int FUNC_10 (struct gfs2_jdesc*,unsigned int,struct gfs2_log_descriptor*,int *,int) ;

__attribute__((used)) static int FUNC_11(struct gfs2_jdesc *VAR_3, unsigned int VAR_4,
         unsigned int VAR_5, int VAR_6)
{
 struct gfs2_sbd *VAR_7 = FUNC_1(VAR_3->jd_inode);
 struct buffer_head *VAR_8;
 struct gfs2_log_descriptor *VAR_9;
 int VAR_10 = 0;
 u32 VAR_11;
 __be64 *VAR_12;
 unsigned int VAR_13 = sizeof(struct gfs2_log_descriptor);
 VAR_13 += sizeof(__be64) - 1;
 VAR_13 &= ~(sizeof(__be64) - 1);

 while (VAR_4 != VAR_5) {
  VAR_10 = FUNC_9(VAR_3, VAR_4, &VAR_8);
  if (VAR_10)
   return VAR_10;
  if (FUNC_6(VAR_7, VAR_8)) {
   FUNC_3(VAR_8);
   return -VAR_0;
  }
  VAR_9 = (struct gfs2_log_descriptor *)VAR_8->b_data;
  VAR_11 = FUNC_2(VAR_9->ld_length);

  if (FUNC_2(VAR_9->ld_header.mh_type) == VAR_2) {
   struct gfs2_log_header_host VAR_14;
   VAR_10 = FUNC_4(VAR_3, VAR_4, &VAR_14);
   if (!VAR_10) {
    FUNC_8(VAR_7, &VAR_4);
    FUNC_3(VAR_8);
    continue;
   }
   if (VAR_10 == 1) {
    FUNC_5(FUNC_0(VAR_3->jd_inode));
    VAR_10 = -VAR_0;
   }
   FUNC_3(VAR_8);
   return VAR_10;
  } else if (FUNC_7(VAR_7, VAR_8, VAR_1)) {
   FUNC_3(VAR_8);
   return -VAR_0;
  }
  VAR_12 = (__be64 *)(VAR_8->b_data + VAR_13);
  VAR_10 = FUNC_10(VAR_3, VAR_4, VAR_9, VAR_12, VAR_6);
  if (VAR_10) {
   FUNC_3(VAR_8);
   return VAR_10;
  }

  while (VAR_11--)
   FUNC_8(VAR_7, &VAR_4);

  FUNC_3(VAR_8);
 }

 return 0;
}
