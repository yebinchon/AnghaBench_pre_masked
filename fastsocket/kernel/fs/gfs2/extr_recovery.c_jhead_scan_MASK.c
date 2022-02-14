
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_log_header_host {unsigned int lh_blkno; scalar_t__ lh_sequence; } ;
struct gfs2_jdesc {unsigned int jd_blocks; int jd_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_jdesc*,unsigned int,struct gfs2_log_header_host*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gfs2_jdesc *VAR_1, struct gfs2_log_header_host *VAR_2)
{
 unsigned int VAR_3 = VAR_2->lh_blkno;
 struct gfs2_log_header_host VAR_4;
 int VAR_5;

 for (;;) {
  if (++VAR_3 == VAR_1->jd_blocks)
   VAR_3 = 0;

  VAR_5 = FUNC_1(VAR_1, VAR_3, &VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  if (VAR_5 == 1)
   continue;

  if (VAR_4.lh_sequence == VAR_2->lh_sequence) {
   FUNC_2(FUNC_0(VAR_1->jd_inode));
   return -VAR_0;
  }
  if (VAR_4.lh_sequence < VAR_2->lh_sequence)
   break;

  *VAR_2 = VAR_4;
 }

 return 0;
}
