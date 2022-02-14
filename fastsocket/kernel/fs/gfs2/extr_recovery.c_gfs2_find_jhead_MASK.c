
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gfs2_log_header_host {scalar_t__ lh_sequence; } ;
struct gfs2_jdesc {int jd_blocks; } ;


 int FUNC_0 (struct gfs2_jdesc*,int*,struct gfs2_log_header_host*) ;
 int FUNC_1 (struct gfs2_jdesc*,struct gfs2_log_header_host*) ;

int FUNC_2(struct gfs2_jdesc *VAR_0, struct gfs2_log_header_host *VAR_1)
{
 struct gfs2_log_header_host VAR_2, VAR_3;
 u32 VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = 0;
 VAR_5 = VAR_0->jd_blocks - 1;

 for (;;) {
  VAR_6 = (VAR_4 + VAR_5) / 2;

  VAR_7 = FUNC_0(VAR_0, &VAR_4, &VAR_2);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_0, &VAR_6, &VAR_3);
  if (VAR_7)
   return VAR_7;

  if (VAR_4 == VAR_6 || VAR_6 == VAR_5)
   break;

  if (VAR_2 <= VAR_3.lh_sequence)
   VAR_4 = VAR_6;
  else
   VAR_5 = VAR_6;
 }

 VAR_7 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_7)
  return VAR_7;

 *VAR_1 = VAR_2;

 return VAR_7;
}
