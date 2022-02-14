
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_log_header_host {int dummy; } ;
struct gfs2_jdesc {int dummy; } ;
struct TYPE_2__ {int (* lo_before_scan ) (struct gfs2_jdesc*,struct gfs2_log_header_host*,unsigned int) ;} ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (struct gfs2_jdesc*,struct gfs2_log_header_host*,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct gfs2_jdesc *VAR_1,
        struct gfs2_log_header_host *VAR_2,
        unsigned int VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++)
  if (VAR_0[VAR_4]->lo_before_scan)
   VAR_0[VAR_4]->lo_before_scan(VAR_1, VAR_2, VAR_3);
}
