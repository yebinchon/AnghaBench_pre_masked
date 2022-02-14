
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_log_header_host {int dummy; } ;
struct gfs2_jdesc {unsigned int jd_blocks; int jd_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_jdesc*,unsigned int,struct gfs2_log_header_host*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gfs2_jdesc *VAR_1, unsigned int *VAR_2,
   struct gfs2_log_header_host *VAR_3)
{
 unsigned int VAR_4 = *VAR_2;
 int VAR_5;

 for (;;) {
  VAR_5 = FUNC_1(VAR_1, *VAR_2, VAR_3);
  if (VAR_5 <= 0)
   return VAR_5;

  if (++*VAR_2 == VAR_1->jd_blocks)
   *VAR_2 = 0;

  if (*VAR_2 == VAR_4) {
   FUNC_2(FUNC_0(VAR_1->jd_inode));
   return -VAR_0;
  }
 }
}
